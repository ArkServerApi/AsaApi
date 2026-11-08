#pragma once


enum class EHttpServerRequestVerbs:unsigned short
{
	VERB_NONE = 0x0,
	VERB_GET = 0x1,
	VERB_POST = 0x2,
	VERB_PUT = 0x4,
	VERB_PATCH = 0x8,
	VERB_DELETE = 0x10,
	VERB_OPTIONS = 0x20
};