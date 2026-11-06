#pragma once


namespace EThreadAsyncExecTag
{
	enum Type: char
	{
		DoExecution = 0x1,
		WithoutCompletion = 0x2
	};
}