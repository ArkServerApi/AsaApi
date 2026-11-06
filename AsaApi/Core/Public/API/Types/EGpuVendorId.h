#pragma once


enum class EGpuVendorId:unsigned __int64
{
	Unknown = 0xFF,
	NotQueried = 0x0,
	Amd = 0x1002,
	ImgTec = 0x1010,
	Nvidia = 0x10DE,
	Arm = 0x13B5,
	Broadcom = 0x14E4,
	Qualcomm = 0x5143,
	Intel = 0xFFFF8086,
	Apple = 0x106B,
	Vivante = 0x7A05,
	VeriSilicon = 0x1EB1,
	Kazan = 0x10003,
	Codeplay = 0x10004,
	Mesa = 0x10005
};