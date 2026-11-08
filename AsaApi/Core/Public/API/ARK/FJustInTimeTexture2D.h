#pragma once


struct FJustInTimeTexture2D
{
	// Fields

	TSoftObjectPtr<UTexture2D>& SoftTextureField() { return *GetNativePointerField<TSoftObjectPtr<UTexture2D>*>(this, "FJustInTimeTexture2D.SoftTexture"); }
	UTexture2D*& TextureField() { return *GetNativePointerField<UTexture2D**>(this, "FJustInTimeTexture2D.Texture"); }
	float& ExpirationTimeInSecondsField() { return *GetNativePointerField<float*>(this, "FJustInTimeTexture2D.ExpirationTimeInSeconds"); }
	float& ExpirationCounterField() { return *GetNativePointerField<float*>(this, "FJustInTimeTexture2D.ExpirationCounter"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FJustInTimeTexture2D>(); }
	FJustInTimeTexture2D& operator=(const FJustInTimeTexture2D* ThatTexture) { return NativeCall<FJustInTimeTexture2D&, const FJustInTimeTexture2D*>(this, "FJustInTimeTexture2D.operator=(FJustInTimeTexture2D&)", ThatTexture); }
	FJustInTimeTexture2D& operator=(UTexture2D* ThatTexture) { return NativeCall<FJustInTimeTexture2D&, UTexture2D*>(this, "FJustInTimeTexture2D.operator=(UTexture2D*)", ThatTexture); }
	// 	void OnPostLoad(UTexture2D** ppTextureToPotentiallyJIT) { NativeCall<void, UTexture2D**>(this, "FJustInTimeTexture2D.OnPostLoad(UTexture2D**)", ppTextureToPotentiallyJIT); }
	// FUNCTION MISSING: FJustInTimeTexture2D.OnPostLoad(UTexture2D**)
	UTexture2D* GetTexture(const UObject* pOwner) const { return NativeCall<UTexture2D*, const UObject*>(this, "FJustInTimeTexture2D.GetTexture(UObject*)", pOwner); }
};