#include "API/ARK/Ark.h"
#include "API/ARK/UE.h"

ARK_API FProperty* UObject::FindProperty(FName name)
{
	for (FProperty* Property = this->ClassPrivateField()->PropertyLinkField(); Property != nullptr; Property = Property->PropertyLinkNextField())
	{
		if (Property->NamePrivateField().ToString().Equals(name.ToString()))
			return Property;
	}
	return nullptr;
}