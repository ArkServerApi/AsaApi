#pragma once


struct /*VFT*/ FDamageEvent_vtbl
{
	char pad_0[8];
	int(__fastcall* GetTypeID)(FDamageEvent*);
	bool(__fastcall* IsOfType)(FDamageEvent*, int);
	void(__fastcall* GetBestHitInfo)(FDamageEvent*, const AActor*, const AActor*, FHitResult*, UE::Math::TVector<double>*);
};