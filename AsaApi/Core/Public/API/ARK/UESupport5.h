#pragma once


inline UObject* AnyPackage()
{
	return reinterpret_cast<UObject*>(-1);
}

inline UScriptStruct* FindScriptStruct(std::wstring_view structName)
{
	if (structName.empty())
		return nullptr;

	constexpr std::wstring_view structPrefix = L"struct ";
	constexpr std::wstring_view classPrefix = L"class ";
	if (structName.starts_with(structPrefix))
		structName.remove_prefix(structPrefix.size());
	else if (structName.starts_with(classPrefix))
		structName.remove_prefix(classPrefix.size());

	if (const auto namespaceSeparator = structName.rfind(L"::"); namespaceSeparator != std::wstring_view::npos)
		structName.remove_prefix(namespaceSeparator + 2);

	if (structName.size() > 1 && structName.front() == L'F')
		structName.remove_prefix(1);

	if (structName.empty())
		return nullptr;

	UClass* scriptStructClass = UScriptStruct::StaticClass();
	if (!scriptStructClass)
		return nullptr;

	std::wstring reflectedName{ structName };
	if (structName.front() == L'/')
		return static_cast<UScriptStruct*>(Globals::StaticFindObject(scriptStructClass, nullptr, reflectedName.c_str(), true));

	const std::string requestedNameUtf8 = FString(reflectedName.c_str()).ToStringUTF8();
	const FName requestedName(requestedNameUtf8.c_str(), EFindName::FNAME_Find);
	TArray<UObject*> structs;
	Globals::GetObjectsOfClass(scriptStructClass, structs, false, EObjectFlags::RF_ClassDefaultObject, EInternalObjectFlags::None);

	UScriptStruct* result = nullptr;
	for (UObject* object : structs)
	{
		if (!object || object->NamePrivateField() != requestedName)
			continue;

		if (result && result != object)
			return nullptr;

		result = static_cast<UScriptStruct*>(object);
	}
	return result;
}

template <typename T>
inline UScriptStruct* FindScriptStruct()
{
	return FindScriptStruct(GetGeneratedTypeName<std::remove_cvref_t<T>>());
}