#pragma once


struct FObjectPtr
{
	union
	{
		UObject* Handle;
		UObject* DebugPtr;
	};

	// Fields

	UObject*& HandleField() { return *GetNativePointerField<UObject**>(this, "FObjectPtr.Handle"); }
	UObject*& DebugPtrField() { return *GetNativePointerField<UObject**>(this, "FObjectPtr.DebugPtr"); }

	// Bitfields

	// Functions

	bool IsA(const UClass* SomeBase) const { return NativeCall<bool, const UClass*>(this, "FObjectPtr.IsA(UClass*)", SomeBase); }
	FString* GetPathName(FString* result) { return NativeCall<FString*, FString*>(this, "FObjectPtr.GetPathName()", result); }
	FObjectPtr& operator=(const FObjectPtr& InOther) { return NativeCall<FObjectPtr&, const FObjectPtr&>(this, "FObjectPtr.operator=(FObjectPtr&)", InOther); }
	FObjectPtr& operator=(UObject* Other) { return NativeCall<FObjectPtr&, UObject*>(this, "FObjectPtr.operator=(UObject*)", Other); }
	// Current counterpart already declared for: FObjectPtr& operator=(FObjectPtr* InOther);

	FObjectPtr(UObject* object) { this->operator=(object); }
};