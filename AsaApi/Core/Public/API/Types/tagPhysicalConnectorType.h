#pragma once


enum class tagPhysicalConnectorType:int
{
	PhysConn_Video_Tuner = 0x1,
	PhysConn_Video_Composite = 0x2,
	PhysConn_Video_SVideo = 0x3,
	PhysConn_Video_RGB = 0x4,
	PhysConn_Video_YRYBY = 0x5,
	PhysConn_Video_SerialDigital = 0x6,
	PhysConn_Video_ParallelDigital = 0x7,
	PhysConn_Video_SCSI = 0x8,
	PhysConn_Video_AUX = 0x9,
	PhysConn_Video_1394 = 0xA,
	PhysConn_Video_USB = 0xB,
	PhysConn_Video_VideoDecoder = 0xC,
	PhysConn_Video_VideoEncoder = 0xD,
	PhysConn_Video_SCART = 0xE,
	PhysConn_Video_Black = 0xF,
	PhysConn_Audio_Tuner = 0x1000,
	PhysConn_Audio_Line = 0x1001,
	PhysConn_Audio_Mic = 0x1002,
	PhysConn_Audio_AESDigital = 0x1003,
	PhysConn_Audio_SPDIFDigital = 0x1004,
	PhysConn_Audio_SCSI = 0x1005,
	PhysConn_Audio_AUX = 0x1006,
	PhysConn_Audio_1394 = 0x1007,
	PhysConn_Audio_USB = 0x1008,
	PhysConn_Audio_AudioDecoder = 0x1009
};