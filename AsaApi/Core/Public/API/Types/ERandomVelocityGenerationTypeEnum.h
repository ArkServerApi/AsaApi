#pragma once


enum class ERandomVelocityGenerationTypeEnum:unsigned char
{
	ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0x0,
	ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 0x1,
	ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 0x2,
	ChaosNiagara_Max = 0x3
};