#pragma once


enum class ECFCoreChangelogMarkupType:unsigned char
{
	PlaceHolderDoNotUse = 0x0,
	Text = 0x1,
	HTML = 0x2,
	Markdown = 0x3
};