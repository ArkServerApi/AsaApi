#pragma once
#include "../UE/CoreTypes.h"

enum class EObjectFullNameFlags
{
	// Standard object full name (i.e. "Type PackageName.ObjectName:SubobjectName")
	None = 0,

	// Adds package to the type portion (i.e. "TypePackage.TypeName PackageName.ObjectName:SubobjectName")
	IncludeClassPackage = 1,
};
