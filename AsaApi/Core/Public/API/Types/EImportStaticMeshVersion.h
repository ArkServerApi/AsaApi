#pragma once


enum class EImportStaticMeshVersion:int
{
	BeforeImportStaticMeshVersionWasAdded = 0x0,
	RemoveStaticMeshSkinxxWorkflow = 0x1,
	StaticMeshVersionPlusOne = 0x2,
	LastVersion = 0x1
};