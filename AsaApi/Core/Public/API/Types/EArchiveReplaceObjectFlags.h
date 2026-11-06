#pragma once


enum class EArchiveReplaceObjectFlags:int
{
	None = 0x0,
	NullPrivateRefs = 0x1,
	IgnoreOuterRef = 0x2,
	IgnoreArchetypeRef = 0x4,
	DelayStart = 0x8,
	IncludeClassGeneratedByRef = 0x10,
	TrackReplacedReferences = 0x20
};