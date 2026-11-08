#pragma once


namespace EAsyncPackageState
{
	enum Type:int
	{
		TimeOut = 0x0,
		PendingImports = 0x1,
		Complete = 0x2
	};
}