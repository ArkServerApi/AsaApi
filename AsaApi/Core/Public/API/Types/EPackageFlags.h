#pragma once


enum class EPackageFlags:unsigned __int64
{
	PKG_None = 0x0,
	PKG_NewlyCreated = 0x1,
	PKG_ClientOptional = 0x2,
	PKG_ServerSideOnly = 0x4,
	PKG_CompiledIn = 0x10,
	PKG_ForDiffing = 0x20,
	PKG_EditorOnly = 0x40,
	PKG_Developer = 0x80,
	PKG_UncookedOnly = 0x100,
	PKG_Cooked = 0x200,
	PKG_ContainsNoAsset = 0x400,
	PKG_NotExternallyReferenceable = 0x800,
	PKG_UnversionedProperties = 0x2000,
	PKG_ContainsMapData = 0x4000,
	PKG_IsSaving = 0xFFFF8000,
	PKG_Compiling = 0x10000,
	PKG_ContainsMap = 0x20000,
	PKG_RequiresLocalizationGather = 0x40000,
	PKG_PlayInEditor = 0x100000,
	PKG_ContainsScript = 0x200000,
	PKG_DisallowExport = 0x400000,
	PKG_CookGenerated = 0x8000000,
	PKG_DynamicImports = 0x10000000,
	PKG_RuntimeGenerated = 0x20000000,
	PKG_ReloadingForCooker = 0x40000000,
	PKG_FilterEditorOnly = 0x80000000,
	PKG_TransientFlags = 0x40008001
};