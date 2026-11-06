#pragma once


//struct FDamageEvent_vtbl
//{
//	//void(__fastcall* ~FDamageEvent)(FDamageEvent* _this);
//	int(__fastcall* GetTypeID)(FDamageEvent* _this);
//	bool(__fastcall* IsOfType)(FDamageEvent* _this, int);
//	void(__fastcall* GetBestHitInfo)(FDamageEvent* _this, const AActor*, const AActor*, FHitResult*, UE::Math::TVector<double>*);
//};
//
//struct FDamageEvent
//{
//	FDamageEvent_vtbl* vfptr;
//	float Impulse;
//	float OriginalDamage;
//	int InstanceBodyIndex;
//	int TypeIndex;
//	TSubclassOf<UDamageType> DamageTypeClass;
//};

//struct FDamageEvent
//{
//	// Fields
//
//	//FDamageEvent_vtbl& vftableField() { return *GetNativePointerField<FDamageEvent_vtbl*>(this, "FDamageEvent.__vftable"); }
//	//FDamageEvent_vtbl* vftableField() { return *((FDamageEvent_vtbl**)this); }
//	float& ImpulseField() { return *GetNativePointerField<float*>(this, "FDamageEvent.Impulse"); }
//	float& OriginalDamageField() { return *GetNativePointerField<float*>(this, "FDamageEvent.OriginalDamage"); }
//	int& InstanceBodyIndexField() { return *GetNativePointerField<int*>(this, "FDamageEvent.InstanceBodyIndex"); }
//	int& TypeIndexField() { return *GetNativePointerField<int*>(this, "FDamageEvent.TypeIndex"); }
//	TSubclassOf<UDamageType>& DamageTypeClassField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FDamageEvent.DamageTypeClass"); }
//
//	// Bitfields
//
//
//	// Functions
//
//	static UScriptStruct* StaticStruct() { return NativeCall<UScriptStruct*>(nullptr, "FDamageEvent.StaticStruct()"); }
//	void GetBestHitInfo(const AActor* HitActor, const AActor* HitInstigator, FHitResult* OutHitInfo, UE::Math::TVector<double>* OutImpulseDir) { NativeCall<void, const AActor*, const AActor*, FHitResult*, UE::Math::TVector<double>*>(this, "FDamageEvent.GetBestHitInfo(AActor*,AActor*,FHitResult&,UE::Math::TVector<double>&)", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
//};

struct FDamageEvent
{
	// Fields
	struct FDamageEvent_vtbl* __vftable /*VFT*/;
	float Impulse;
	float OriginalDamage;
	int InstanceBodyIndex;
	int TypeIndex;
	TSubclassOf<UDamageType> DamageTypeClass;

	float& ImpulseField() { return *GetNativePointerField<float*>(this, "FDamageEvent.Impulse"); }
	float& OriginalDamageField() { return *GetNativePointerField<float*>(this, "FDamageEvent.OriginalDamage"); }
	int& InstanceBodyIndexField() { return *GetNativePointerField<int*>(this, "FDamageEvent.InstanceBodyIndex"); }
	int& TypeIndexField() { return *GetNativePointerField<int*>(this, "FDamageEvent.TypeIndex"); }
	TSubclassOf<UDamageType>& DamageTypeClassField() { return *GetNativePointerField<TSubclassOf<UDamageType>*>(this, "FDamageEvent.DamageTypeClass"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FDamageEvent>(); }
	void GetBestHitInfo(const AActor* HitActor, const AActor* HitInstigator, FHitResult* OutHitInfo, UE::Math::TVector<double>& OutImpulseDir) { NativeCall<void, const AActor*, const AActor*, FHitResult*, UE::Math::TVector<double>&>(this, "FDamageEvent.GetBestHitInfo(AActor*,AActor*,FHitResult&,UE::Math::TVector<double>&)", HitActor, HitInstigator, OutHitInfo, OutImpulseDir); }
	int GetTypeID()const { return NativeCall<int>(this, "FDamageEvent.GetTypeID()"); }
	bool IsOfType(int InID) const { return NativeCall<bool, int>(this, "FDamageEvent.IsOfType(int)", InID); }
};