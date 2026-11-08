#pragma once


enum class EClusterSizeMethodEnum:unsigned char
{
	Dataflow_ClusterSizeMethod_ByNumber = 0x0,
	Dataflow_ClusterSizeMethod_ByFractionOfInput = 0x1,
	Dataflow_ClusterSizeMethod_BySize = 0x2,
	Dataflow_Max = 0x3
};