#pragma once


enum class EHairStrandsCompositionType:unsigned char
{
	BeforeTranslucent = 0x0,
	AfterTranslucent = 0x1,
	AfterSeparateTranslucent = 0x2,
	AfterTranslucentBeforeTranslucentAfterDOF = 0x3
};