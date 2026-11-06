#pragma once


enum class EKelvinletBrushMode:int
{
	ScaleKelvinlet = 0x0,
	PinchKelvinlet = 0x1,
	TwistKelvinlet = 0x2,
	PullKelvinlet = 0x3,
	LaplacianPullKelvinlet = 0x4,
	BiLaplacianPullKelvinlet = 0x5,
	BiLaplacianTwistPullKelvinlet = 0x6,
	LaplacianTwistPullKelvinlet = 0x7,
	SharpPullKelvinlet = 0x8
};