#pragma once


enum class ESceneTextureSetupMode:unsigned int
{
	None = 0x0,
	SceneColor = 0x1,
	SceneDepth = 0x2,
	SceneVelocity = 0x4,
	GBufferA = 0x8,
	GBufferB = 0x10,
	GBufferC = 0x20,
	GBufferD = 0x40,
	GBufferE = 0x80,
	GBufferF = 0x100,
	SSAO = 0x200,
	CustomDepth = 0x400,
	GBuffers = 0x1F8,
	All = 0x7FF
};