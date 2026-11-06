#pragma once


enum class EGCReferenceType:int
{
	GCRT_None = 0x0,
	GCRT_Object = 0x1,
	GCRT_ExternalPackage = 0x2,
	GCRT_ArrayObject = 0x3,
	GCRT_ArrayStruct = 0x4,
	GCRT_FixedArray = 0x5,
	GCRT_AddStructReferencedObjects = 0x6,
	GCRT_AddReferencedObjects = 0x7,
	GCRT_AddTMapReferencedObjects = 0x8,
	GCRT_AddTSetReferencedObjects = 0x9,
	GCRT_AddFieldPathReferencedObject = 0xA,
	GCRT_ArrayAddFieldPathReferencedObject = 0xB,
	GCRT_EndOfPointer = 0xC,
	GCRT_EndOfStream = 0xD,
	GCRT_ArrayObjectFreezable = 0xE,
	GCRT_ArrayStructFreezable = 0xF,
	GCRT_Optional = 0x10,
	GCRT_WeakObject = 0x11,
	GCRT_ArrayWeakObject = 0x12,
	GCRT_LazyObject = 0x13,
	GCRT_ArrayLazyObject = 0x14,
	GCRT_SoftObject = 0x15,
	GCRT_ArraySoftObject = 0x16,
	GCRT_Delegate = 0x17,
	GCRT_ArrayDelegate = 0x18,
	GCRT_MulticastDelegate = 0x19,
	GCRT_ArrayMulticastDelegate = 0x1A,
	GCRT_DynamicallyTypedValue = 0x1B,
	GCRT_SlowAddReferencedObjects = 0x1C
};