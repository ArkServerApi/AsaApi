#pragma once


struct FContainerTasks
{
	// Fields

	struct AActor*& ContainerField() { return *GetNativePointerField<struct AActor**>(this, "FContainerTasks.Container"); }
	TArray<FSortingTask, TSizedDefaultAllocator<32> >& TasksField() { return *GetNativePointerField<TArray<FSortingTask, TSizedDefaultAllocator<32> >*>(this, "FContainerTasks.Tasks"); }

	// Bitfields

	// Functions

	UScriptStruct* StaticStruct() { return FindScriptStruct<FContainerTasks>(); }
};