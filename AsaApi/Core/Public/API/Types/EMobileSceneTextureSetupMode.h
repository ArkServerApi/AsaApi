#pragma once


enum class EMobileSceneTextureSetupMode:unsigned int
{
	None = 0x0,
	SceneColor = 0x1,
	SceneDepth = 0x2,
	CustomDepth = 0x4,
	GBufferA = 0x8,
	GBufferB = 0x10,
	GBufferC = 0x20,
	GBufferD = 0x40,
	SceneDepthAux = 0x80,
	SceneVelocity = 0x100,
	GBuffers = 0xF8,
	All = 0x1FF
};