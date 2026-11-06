#pragma once


enum class EDataflowVectorFieldOperationType:unsigned char
{
	Dataflow_VectorFieldOperationType_Multiply = 0x0,
	Dataflow_VectorFieldFalloffType_Divide = 0x1,
	Dataflow_VectorFieldFalloffType_Add = 0x2,
	Dataflow_VectorFieldFalloffType_Substract = 0x3,
	Dataflow_VectorFieldFalloffType_CrossProduct = 0x4,
	Dataflow_Max = 0x5
};