#pragma once


/*
* \brief Gets the size in bytes of an Object class. Example: GetObjectClassSize<AActor>()
*
* tparam T - Object class
* \return The size of the class in bytes
*/
template <typename T>
int GetObjectClassSize()
{
	// Credits to Substitute#0001 for the idea
	UClass* objClass = T::StaticClass();
	if (objClass)
	{
		return objClass->PropertiesSizeField();
	}

	return 0;
}

/*
* \brief Gets the size in bytes of an struct. Example: GetStructSize<FTribeData>()
*
* \tparam T - struct type
* \return The size in bytes
*/
template <typename T>
int GetStructSize()
{
	// Credits to Substitute#0001 for the idea
	UScriptStruct* scriptStruct = FindScriptStruct<T>();
	if (scriptStruct)
	{
		return scriptStruct->PropertiesSizeField();
	}
	return 0;
}