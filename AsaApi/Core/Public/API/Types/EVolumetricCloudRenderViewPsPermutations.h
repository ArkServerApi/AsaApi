#pragma once


enum class EVolumetricCloudRenderViewPsPermutations:int
{
	CloudPs_AtmoTrans0_SampleShad0_2ndLight0 = 0x0,
	CloudPs_AtmoTrans1_SampleShad0_2ndLight0 = 0x1,
	CloudPs_AtmoTrans0_SampleShad1_2ndLight0 = 0x2,
	CloudPs_AtmoTrans1_SampleShad1_2ndLight0 = 0x3,
	CloudPs_AtmoTrans0_SampleShad0_2ndLight1 = 0x4,
	CloudPs_AtmoTrans1_SampleShad0_2ndLight1 = 0x5,
	CloudPs_AtmoTrans0_SampleShad1_2ndLight1 = 0x6,
	CloudPs_AtmoTrans1_SampleShad1_2ndLight1 = 0x7,
	CloudPsCount = 0x8
};