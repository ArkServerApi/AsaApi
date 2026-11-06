#pragma once


struct FSoftComponentReference : FBaseComponentReference
{
	// Fields

	TSoftObjectPtr<AActor>& OtherActorField() { return *GetNativePointerField<TSoftObjectPtr<AActor>*>(this, "FSoftComponentReference.OtherActor"); }

	// Bitfields

	// Functions

	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// bool SerializeFromMismatchedTag(const struct FPropertyTag* Tag, FStructuredArchiveSlot Slot);
	UActorComponent* GetComponent(struct AActor* OwningActor) const { return NativeCall<UActorComponent*, struct AActor*>(this, "FSoftComponentReference.GetComponent(AActor*)", OwningActor); }
	static UScriptStruct* StaticStruct() { return FindScriptStruct<FSoftComponentReference>(); }
};