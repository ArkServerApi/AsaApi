#pragma once


static_assert(sizeof(TSoftObjectPtr<UObject>) == sizeof(FSoftObjectPtr),
	"TSoftObjectPtr must preserve the native FSoftObjectPtr layout.");