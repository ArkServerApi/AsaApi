#pragma once


namespace EExportedDeclaration
{
	enum Type:int
	{
		Local = 0x0,
		Member = 0x1,
		Parameter = 0x2,
		MacroParameter = 0x3
	};
}