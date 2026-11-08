#pragma once


enum class ECompiledPartialDerivativeVariation:int
{
	CompiledPDV_FiniteDifferences = 0x0,
	CompiledPDV_Analytic = 0x1,
	CompiledPDV_MAX = 0x2
};