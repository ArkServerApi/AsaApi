#pragma once


enum class ECustomAttributeTypeEnum:unsigned char
{
	Dataflow_CustomAttributeType_UInt8 = 0x0,
	Dataflow_CustomAttributeType_Int32 = 0x1,
	Dataflow_CustomAttributeType_Float = 0x2,
	Dataflow_CustomAttributeType_Double = 0x3,
	Dataflow_CustomAttributeType_Bool = 0x4,
	Dataflow_CustomAttributeType_String = 0x5,
	Dataflow_CustomAttributeType_Vector2f = 0x6,
	Dataflow_CustomAttributeType_Vector3f = 0x7,
	Dataflow_CustomAttributeType_Vector3d = 0x8,
	Dataflow_CustomAttributeType_Vector4f = 0x9,
	Dataflow_CustomAttributeType_LinearColor = 0xA,
	Dataflow_CustomAttributeType_Transform = 0xB,
	Dataflow_CustomAttributeType_Quat4f = 0xC,
	Dataflow_CustomAttributeType_Box = 0xD,
	Dataflow_CustomAttributeType_Guid = 0xE,
	Dataflow_CustomAttributeType_Int32Set = 0xF,
	Dataflow_CustomAttributeType_Int32Array = 0x10,
	Dataflow_CustomAttributeType_IntVector = 0x11,
	Dataflow_CustomAttributeType_IntVector2 = 0x12,
	Dataflow_CustomAttributeType_IntVector4 = 0x13,
	Dataflow_CustomAttributeType_IntVector2Array = 0x14,
	Dataflow_CustomAttributeType_FloatArray = 0x15,
	Dataflow_CustomAttributeType_Vector2fArray = 0x16,
	Dataflow_CustomAttributeType_FVector3fArray = 0x17,
	Dataflow_Max = 0x18
};