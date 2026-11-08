#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <string>
#include <utility>
#include <type_traits>
#include <cstring>
#include <memory>
#include <new>
#include <stdexcept>

#include "Base.h"

template <typename RT, typename... ArgsTypes, typename... Args>
RT NativeCall(const void* _this, const std::string& func_name, Args&&... args)
{
	return static_cast<RT(__fastcall*)(DWORD64, ArgsTypes ...)>(GetAddress(func_name))(
		reinterpret_cast<DWORD64>(_this), std::forward<Args>(args)...);
}

template <typename RT, typename... ArgsTypes, typename... Args>
RT NativeCall(void* _this, const std::string& func_name, Args&&... args)
{
	return static_cast<RT(__fastcall*)(DWORD64, ArgsTypes ...)>(GetAddress(func_name))(
		reinterpret_cast<DWORD64>(_this), std::forward<Args>(args)...);
}

template <typename RT, typename... ArgsTypes, typename... Args>
RT NativeCall(nullptr_t, const std::string& funcName, Args&&... args)
{
	return static_cast<RT(__fastcall*)(ArgsTypes ...)>(GetAddress(funcName))(std::forward<Args>(args)...);
}

template <typename RT>
RT GetNativeField(const void* _this, const std::string& field_name)
{
	return *reinterpret_cast<RT*>(GetAddress(_this, field_name));
}

template <typename RT>
RT GetNativePointerField(const void* _this, const std::string& field_name)
{
	return reinterpret_cast<RT>(GetAddress(_this, field_name));
}

template <typename RT>
RT GetNativeDataPointerField(const std::string& field_name)
{
	return reinterpret_cast<RT>(GetDataAddress(field_name));
}

namespace AsaApi::detail
{
    inline void ValidateBitFieldMetadata(const BitField& field, const std::string& key)
    {
        if (field.length == 0 || field.length > 8 || field.num_bits == 0 || field.num_bits > 64 ||
            field.bit_position >= 64 || field.bit_position + field.num_bits > field.length * 8)
            throw std::runtime_error("Invalid bitfield metadata: " + key);
    }
}

template <typename RT, typename T>
RT GetNativeBitField(const LPVOID _this, const std::string& field_name)
{
    const auto field = GetBitField(_this, field_name);
    AsaApi::detail::ValidateBitFieldMetadata(field, field_name);
    const auto first_byte = field.bit_position / 8;
    const auto shift = field.bit_position % 8;
    const auto byte_count = (shift + field.num_bits + 7) / 8;
    unsigned long long storage = 0;
    std::memcpy(&storage, reinterpret_cast<const unsigned char*>(field.offset) + first_byte, byte_count);
    const auto mask = ~0ULL >> (64 - field.num_bits);
    auto value = (storage >> shift) & mask;
    if constexpr (std::is_integral_v<RT> && std::is_signed_v<RT>)
    {
        if (field.num_bits < 64 && (value & (1ULL << (field.num_bits - 1))))
            value |= ~mask;
    }
    return static_cast<RT>(value);
}

template <typename RT, typename T>
void SetNativeBitField(LPVOID _this, const std::string& field_name, RT new_value)
{
    const auto field = GetBitField(_this, field_name);
    AsaApi::detail::ValidateBitFieldMetadata(field, field_name);
    const auto first_byte = field.bit_position / 8;
    const auto shift = field.bit_position % 8;
    const auto byte_count = (shift + field.num_bits + 7) / 8;
    auto* bytes = reinterpret_cast<unsigned char*>(field.offset) + first_byte;
    unsigned long long storage = 0;
    std::memcpy(&storage, bytes, byte_count);
    const auto mask = ~0ULL >> (64 - field.num_bits);
    storage = (storage & ~(mask << shift)) | ((static_cast<unsigned long long>(new_value) & mask) << shift);
    std::memcpy(bytes, &storage, byte_count);
}

template <typename T, size_t size>
class FieldArray
{
public:
	FieldArray(void* parent, const std::string& field_name)
		: value_(GetNativePointerField<T*>(parent, field_name))
	{

	}

	T* operator()()
	{
		return value_;
	}

	FieldArray& operator=(const T& other) = delete;

	static size_t GetSize()
	{
		return size;
	}

private:
	T* value_;
};

template <typename T>
class DataValue
{
public:
	DataValue(const std::string& field_name)
		: value_(GetNativeDataPointerField<T*>(field_name))
	{
	}

	T& operator()() const
	{
		return *value_;
	}

	DataValue& operator=(const T& other)
	{
		*value_ = other;
		return *this;
	}

	T& Get() const
	{
		return *value_;
	}

	void Set(const T& other)
	{
		*value_ = other;
	}

private:
	T* value_;
};

#include "LegacyBooleanFields.h"

template <typename RT, typename T>
class BitFieldValue
{
public:
	BitFieldValue(void* parent, std::string field_name)
		: parent_(parent), field_name_(std::move(field_name))
	{
	}

	RT operator()() const
	{
        if constexpr (std::is_same_v<RT, bool>)
        {
            bool value;
            if (AsaApi::detail::ReadLegacyBoolean(parent_, field_name_, value)) return value;
        }
		return GetNativeBitField<RT, T>(parent_, field_name_);
	}

	BitFieldValue& operator=(RT other)
	{
        if constexpr (std::is_same_v<RT, bool>)
            if (AsaApi::detail::WriteLegacyBoolean(parent_, field_name_, other)) return *this;
		SetNativeBitField<RT, T>(parent_, field_name_, other);
		return *this;
	}

	RT Get() const
	{
        if constexpr (std::is_same_v<RT, bool>)
        {
            bool value;
            if (AsaApi::detail::ReadLegacyBoolean(parent_, field_name_, value)) return value;
        }
		return GetNativeBitField<RT, T>(parent_, field_name_);
	}

	void Set(RT other)
	{
        if constexpr (std::is_same_v<RT, bool>)
            if (AsaApi::detail::WriteLegacyBoolean(parent_, field_name_, other)) return;
		SetNativeBitField<RT, T>(parent_, field_name_, other);
	}

private:
	void* parent_;
	std::string field_name_;
};