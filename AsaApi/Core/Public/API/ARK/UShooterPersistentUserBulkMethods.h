#pragma once
inline int & UShooterPersistentUser::KillsField()  { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.Kills"); }
inline int & UShooterPersistentUser::DeathsField()  { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.Deaths"); }
inline int & UShooterPersistentUser::WinsField()  { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.Wins"); }
inline int & UShooterPersistentUser::LossesField()  { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.Losses"); }
inline int & UShooterPersistentUser::BulletsFiredField()  { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.BulletsFired"); }
inline int & UShooterPersistentUser::RocketsFiredField()  { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.RocketsFired"); }
inline int & UShooterPersistentUser::BotsCountField()  { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.BotsCount"); }
inline float & UShooterPersistentUser::GammaField()  { return *GetNativePointerField<float*>(this, "UShooterPersistentUser.Gamma"); }
inline float & UShooterPersistentUser::AimSensitivityField()  { return *GetNativePointerField<float*>(this, "UShooterPersistentUser.AimSensitivity"); }
inline bool & UShooterPersistentUser::bInvertedYAxisField()  { return *GetNativePointerField<bool*>(this, "UShooterPersistentUser.bInvertedYAxis"); }
inline bool & UShooterPersistentUser::bIsDirtyField()  { return *GetNativePointerField<bool*>(this, "UShooterPersistentUser.bIsDirty"); }
inline FString & UShooterPersistentUser::SlotNameField()  { return *GetNativePointerField<FString*>(this, "UShooterPersistentUser.SlotName"); }
inline int & UShooterPersistentUser::UserIndexField()  { return *GetNativePointerField<int*>(this, "UShooterPersistentUser.UserIndex"); }
inline void UShooterPersistentUser::TellInputAboutKeybindings()  { NativeCall<void>(this, "UShooterPersistentUser.TellInputAboutKeybindings()"); }
inline int UShooterPersistentUser::GetUserIndex()  { return NativeCall<int>(this, "UShooterPersistentUser.GetUserIndex()"); }
inline void UShooterPersistentUser::SaveIfDirty()  { NativeCall<void>(this, "UShooterPersistentUser.SaveIfDirty()"); }
