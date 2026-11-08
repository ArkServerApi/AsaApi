#pragma once


enum class EAmazonS3MultipartUploadStatus:int
{
	NotStarted = 0x0,
	Uploading = 0x1,
	Done = 0x2,
	Errored = 0x3
};