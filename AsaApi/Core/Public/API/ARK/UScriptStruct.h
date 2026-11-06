#pragma once


struct UScriptStruct : UStruct {
	static UClass* StaticClass() = delete;
	static UClass* GetPrivateStaticClass() = delete;
};