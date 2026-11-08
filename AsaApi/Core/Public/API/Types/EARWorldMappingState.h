#pragma once


enum class EARWorldMappingState:unsigned char
{
	NotAvailable = 0x0,
	StillMappingNotRelocalizable = 0x1,
	StillMappingRelocalizable = 0x2,
	Mapped = 0x3
};