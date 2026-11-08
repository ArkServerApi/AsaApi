#pragma once


struct FCharacterAndControllerPair
{
	// Fields

	AShooterCharacter*& CharacterField() { return *GetNativePointerField<AShooterCharacter**>(this, "FCharacterAndControllerPair.Character"); }
	AShooterPlayerController*& ControllerField() { return *GetNativePointerField<AShooterPlayerController**>(this, "FCharacterAndControllerPair.Controller"); }

	// Bitfields

	// Functions

	static UScriptStruct* StaticStruct() { return FindScriptStruct<FCharacterAndControllerPair>(); }
};