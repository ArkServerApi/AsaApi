#pragma once


enum class EMoviePipelineDLSSQuality:unsigned char
{
	EMoviePipelineDLSSQuality_DLAA = 0x0,
	EMoviePipelineDLSSQuality_UltraQuality = 0x1,
	EMoviePipelineDLSSQuality_Quality = 0x2,
	EMoviePipelineDLSSQuality_Balanced = 0x3,
	EMoviePipelineDLSSQuality_Performance = 0x4,
	EMoviePipelineDLSSQuality_UltraPerformance = 0x5
};