#pragma once


enum class ECFCoreMakrupType:unsigned char
{
	PlaceHolderDoNotUse = 0x0,
	WysiwygHtml = 0x1,
	PlainText = 0x2,
	BBCode = 0x3,
	Creole = 0x4,
	Markdown = 0x5,
	RawHtml = 0x6,
	StandardBBCode = 0x8,
	RawCSS = 0x9
};