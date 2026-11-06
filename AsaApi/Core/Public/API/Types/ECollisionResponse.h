#pragma once


enum class ECollisionResponse:int
{
	ECR_Ignore = 0x0,
	ECR_Overlap = 0x1,
	ECR_Block = 0x2,
	ECR_MAX = 0x3
};