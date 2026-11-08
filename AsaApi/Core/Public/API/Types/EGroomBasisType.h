#pragma once


enum class EGroomBasisType:unsigned char
{
	NoBasis = 0x0,
	BezierBasis = 0x1,
	BsplineBasis = 0x2,
	CatmullromBasis = 0x3,
	HermiteBasis = 0x4,
	PowerBasis = 0x5
};