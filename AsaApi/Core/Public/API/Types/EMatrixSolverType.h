#pragma once


enum class EMatrixSolverType:int
{
	LU = 0x0,
	QR = 0x1,
	BICGSTAB = 0x2,
	PCG = 0x3,
	FastestPSD = 0x4
};