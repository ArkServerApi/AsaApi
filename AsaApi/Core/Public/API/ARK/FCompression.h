#pragma once


struct FCompression
{
	// Fields

	// Bitfields

	// Functions

	static bool UncompressMemoryStream(FName FormatName, void* UncompressedBuffer, int UncompressedSize, IMemoryReadStream* Stream, long StreamOffset, int CompressedSize, ECompressionFlags Flags, int CompressionData) { return NativeCall<bool, FName, void*, int, IMemoryReadStream*, long, int, ECompressionFlags, int>(nullptr, "FCompression.UncompressMemoryStream(FName,void*,__int64,IMemoryReadStream*,__int64,__int64,ECompressionFlags,unsigned__int64)", FormatName, UncompressedBuffer, UncompressedSize, Stream, StreamOffset, CompressedSize, Flags, CompressionData); }
	static bool CompressMemory(FName FormatName, void* CompressedBuffer, int& CompressedSize, const void* UncompressedBuffer, int UncompressedSize, ECompressionFlags Flags, int CompressionData) { return NativeCall<bool, FName, void*, int&, const void*, int, ECompressionFlags, int>(nullptr, "FCompression.CompressMemory(FName,void*,int&,void*,int,ECompressionFlags,int)", FormatName, CompressedBuffer, CompressedSize, UncompressedBuffer, UncompressedSize, Flags, CompressionData); }
	static FName GetCompressionFormatFromDeprecatedFlags(ECompressionFlags Flags) { return NativeCall<FName, ECompressionFlags>(nullptr, "FCompression.GetCompressionFormatFromDeprecatedFlags(ECompressionFlags)", Flags); }
	static bool UncompressMemory(FName FormatName, void* UncompressedBuffer, int UncompressedSize, const void* CompressedBuffer, int CompressedSize, ECompressionFlags Flags, int CompressionData) { return NativeCall<bool, FName, void*, int, const void*, int, ECompressionFlags, int>(nullptr, "FCompression.UncompressMemory(FName,void*,__int64,void*,__int64,ECompressionFlags,unsigned__int64)", FormatName, UncompressedBuffer, UncompressedSize, CompressedBuffer, CompressedSize, Flags, CompressionData); }
	static int CompressMemoryBound(FName FormatName, int UncompressedSize, ECompressionFlags Flags, int CompressionData) { return NativeCall<int, FName, int, ECompressionFlags, int>(nullptr, "FCompression.CompressMemoryBound(FName,int,ECompressionFlags,int)", FormatName, UncompressedSize, Flags, CompressionData); }
	//static ICompressionFormat* GetCompressionFormat(FName FormatName, bool bErrorOnFailure) { return NativeCall<ICompressionFormat*, FName, bool>(nullptr, "FCompression.GetCompressionFormat(FName,bool)", FormatName, bErrorOnFailure); }
};