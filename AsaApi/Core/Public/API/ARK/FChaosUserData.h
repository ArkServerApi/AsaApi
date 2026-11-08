#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FChaosUserData
{
public:
    EChaosUserDataType :: Type Type;
    void * Payload;
    FChaosUserData()									:Type(EChaosUserDataType::Invalid), Payload(nullptr) {}
    FChaosUserData(FBodyInstance* InPayload)			:Type(EChaosUserDataType::BodyInstance), Payload(InPayload) {}
    FChaosUserData(UPhysicalMaterial* InPayload)		:Type(EChaosUserDataType::PhysicalMaterial), Payload(InPayload) {}
    FChaosUserData(FConstraintInstance* InPayload)		:Type(EChaosUserDataType::ConstraintInstance), Payload(InPayload) {}
    FChaosUserData(UPrimitiveComponent* InPayload)		:Type(EChaosUserDataType::PrimitiveComponent), Payload(InPayload) {}
    FChaosUserData(FKShapeElem* InPayload)				:Type(EChaosUserDataType::AggShape), Payload(InPayload) {}
    FChaosUserData(FCustomChaosPayload* InPayload)		:Type(EChaosUserDataType::CustomPayload), Payload(InPayload) {}
    void*& PayloadField() { return *GetNativePointerField<void**>(this, "FChaosUserData.Payload"); }
};
static_assert(sizeof(FChaosUserData) == 16);
static_assert(offsetof(FChaosUserData, Type) == 0);
static_assert(offsetof(FChaosUserData, Payload) == 8);
static_assert(sizeof(((FChaosUserData*)nullptr)->Type) == 4);
static_assert(sizeof(((FChaosUserData*)nullptr)->Payload) == 8);
static_assert(std::is_trivially_copyable_v<FChaosUserData>);
