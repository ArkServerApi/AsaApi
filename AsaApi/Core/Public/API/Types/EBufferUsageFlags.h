#pragma once


enum class EBufferUsageFlags:unsigned int
{
	None = 0x0,
	Static = 0x1,
	Dynamic = 0x2,
	Volatile = 0x4,
	UnorderedAccess = 0x8,
	ByteAddressBuffer = 0x10,
	SourceCopy = 0x20,
	StreamOutput = 0x40,
	DrawIndirect = 0x80,
	ShaderResource = 0x100,
	KeepCPUAccessible = 0x200,
	FastVRAM = 0x400,
	Shared = 0x1000,
	AccelerationStructure = 0x2000,
	VertexBuffer = 0x4000,
	IndexBuffer = 0xFFFF8000,
	StructuredBuffer = 0x10000,
	MultiGPUAllocate = 0x20000,
	MultiGPUGraphIgnore = 0x40000,
	RayTracingScratch = 0x80008,
	AnyDynamic = 0x6
};