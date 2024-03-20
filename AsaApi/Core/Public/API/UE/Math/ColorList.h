// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/Array.h"
#include "Containers/Map.h"
#include "Containers/UnrealString.h"
#include "CoreTypes.h"
#include "HAL/PlatformCrt.h"
#include "Math/Color.h"
#include "Misc/Exec.h"

class FString;

ARK_API class FColorList
{
public:
	typedef TMap< FString, const FColor* > TColorsMap;
	typedef TArray< const FColor* > TColorsLookup;

	// Common colors.	
	inline static const FColor White = FColor(255, 255, 255, 255);
	inline static const FColor Red = FColor(255, 0, 0, 255);
	inline static const FColor Green = FColor(0, 255, 0, 255);
	inline static const FColor Blue = FColor(0, 0, 255, 255);
	inline static const FColor Magenta = FColor(255, 0, 255, 255);
	inline static const FColor Cyan = FColor(0, 255, 255, 255);
	inline static const FColor Yellow = FColor(255, 255, 0, 255);
	inline static const FColor Black = FColor(0, 0, 0, 255);
	inline static const FColor Aquamarine = FColor(112, 219, 147, 255);
	inline static const FColor BakerChocolate = FColor(92, 51, 23, 255);
	inline static const FColor BlueViolet = FColor(159, 95, 159, 255);
	inline static const FColor Brass = FColor(181, 166, 66, 255);
	inline static const FColor BrightGold = FColor(217, 217, 25, 255);
	inline static const FColor Brown = FColor(166, 42, 42, 255);
	inline static const FColor Bronze = FColor(140, 120, 83, 255);
	inline static const FColor BronzeII = FColor(166, 125, 61, 255);
	inline static const FColor CadetBlue = FColor(95, 159, 159, 255);
	inline static const FColor CoolCopper = FColor(217, 135, 25, 255);
	inline static const FColor Copper = FColor(184, 115, 51, 255);
	inline static const FColor Coral = FColor(255, 127, 0, 255);
	inline static const FColor CornFlowerBlue = FColor(66, 66, 111, 255);
	inline static const FColor DarkBrown = FColor(92, 64, 51, 255);
	inline static const FColor DarkGreen = FColor(47, 79, 47, 255);
	inline static const FColor DarkGreenCopper = FColor(74, 118, 110, 255);
	inline static const FColor DarkOliveGreen = FColor(79, 79, 47, 255);
	inline static const FColor DarkOrchid = FColor(153, 50, 205, 255);
	inline static const FColor DarkPurple = FColor(135, 31, 120, 255);
	inline static const FColor DarkSlateBlue = FColor(107, 35, 142, 255);
	inline static const FColor DarkSlateGrey = FColor(47, 79, 79, 255);
	inline static const FColor DarkTan = FColor(151, 105, 79, 255);
	inline static const FColor DarkTurquoise = FColor(112, 147, 219, 255);
	inline static const FColor DarkWood = FColor(133, 94, 66, 255);
	inline static const FColor DimGrey = FColor(84, 84, 84, 255);
	inline static const FColor DustyRose = FColor(133, 99, 99, 255);
	inline static const FColor Feldspar = FColor(209, 146, 117, 255);
	inline static const FColor Firebrick = FColor(142, 35, 35, 255);
	inline static const FColor ForestGreen = FColor(35, 142, 35, 255);
	inline static const FColor Gold = FColor(205, 127, 50, 255);
	inline static const FColor Goldenrod = FColor(219, 219, 112, 255);
	inline static const FColor Grey = FColor(192, 192, 192, 255);
	inline static const FColor GreenCopper = FColor(82, 127, 118, 255);
	inline static const FColor GreenYellow = FColor(147, 219, 112, 255);
	inline static const FColor HunterGreen = FColor(33, 94, 33, 255);
	inline static const FColor IndianRed = FColor(78, 47, 47, 255);
	inline static const FColor Khaki = FColor(159, 159, 95, 255);
	inline static const FColor LightBlue = FColor(192, 217, 217, 255);
	inline static const FColor LightGrey = FColor(168, 168, 168, 255);
	inline static const FColor LightSteelBlue = FColor(143, 143, 189, 255);
	inline static const FColor LightWood = FColor(233, 194, 166, 255);
	inline static const FColor LimeGreen = FColor(50, 205, 50, 255);
	inline static const FColor MandarianOrange = FColor(228, 120, 51, 255);
	inline static const FColor Maroon = FColor(142, 35, 107, 255);
	inline static const FColor MediumAquamarine = FColor(50, 205, 153, 255);
	inline static const FColor MediumBlue = FColor(50, 50, 205, 255);
	inline static const FColor MediumForestGreen = FColor(107, 142, 35, 255);
	inline static const FColor MediumGoldenrod = FColor(234, 234, 174, 255);
	inline static const FColor MediumOrchid = FColor(147, 112, 219, 255);
	inline static const FColor MediumSeaGreen = FColor(66, 111, 66, 255);
	inline static const FColor MediumSlateBlue = FColor(127, 0, 255, 255);
	inline static const FColor MediumSpringGreen = FColor(127, 255, 0, 255);
	inline static const FColor MediumTurquoise = FColor(112, 219, 219, 255);
	inline static const FColor MediumVioletRed = FColor(219, 112, 147, 255);
	inline static const FColor MediumWood = FColor(166, 128, 100, 255);
	inline static const FColor MidnightBlue = FColor(47, 47, 79, 255);
	inline static const FColor NavyBlue = FColor(35, 35, 142, 255);
	inline static const FColor NeonBlue = FColor(77, 77, 255, 255);
	inline static const FColor NeonPink = FColor(255, 110, 199, 255);
	inline static const FColor NewMidnightBlue = FColor(0, 0, 156, 255);
	inline static const FColor NewTan = FColor(235, 199, 158, 255);
	inline static const FColor OldGold = FColor(207, 181, 59, 255);
	inline static const FColor Orange = FColor(255, 127, 0, 255);
	inline static const FColor OrangeRed = FColor(255, 36, 0, 255);
	inline static const FColor Orchid = FColor(219, 112, 219, 255);
	inline static const FColor PaleGreen = FColor(143, 188, 143, 255);
	inline static const FColor Pink = FColor(188, 143, 143, 255);
	inline static const FColor Plum = FColor(234, 173, 234, 255);
	inline static const FColor Quartz = FColor(217, 217, 243, 255);
	inline static const FColor RichBlue = FColor(89, 89, 171, 255);
	inline static const FColor Salmon = FColor(111, 66, 66, 255);
	inline static const FColor Scarlet = FColor(140, 23, 23, 255);
	inline static const FColor SeaGreen = FColor(35, 142, 104, 255);
	inline static const FColor SemiSweetChocolate = FColor(107, 66, 38, 255);
	inline static const FColor Sienna = FColor(142, 107, 35, 255);
	inline static const FColor Silver = FColor(230, 232, 250, 255);
	inline static const FColor SkyBlue = FColor(50, 153, 204, 255);
	inline static const FColor SlateBlue = FColor(0, 127, 255, 255);
	inline static const FColor SpicyPink = FColor(255, 28, 174, 255);
	inline static const FColor SpringGreen = FColor(0, 255, 127, 255);
	inline static const FColor SteelBlue = FColor(35, 107, 142, 255);
	inline static const FColor SummerSky = FColor(56, 176, 222, 255);
	inline static const FColor Tan = FColor(219, 147, 112, 255);
	inline static const FColor Thistle = FColor(216, 191, 216, 255);
	inline static const FColor Turquoise = FColor(173, 234, 234, 255);
	inline static const FColor VeryDarkBrown = FColor(92, 64, 51, 255);
	inline static const FColor VeryLightGrey = FColor(205, 205, 205, 255);
	inline static const FColor Violet = FColor(79, 47, 79, 255);
	inline static const FColor VioletRed = FColor(204, 50, 153, 255);
	inline static const FColor Wheat = FColor(216, 216, 191, 255);
	inline static const FColor YellowGreen = FColor(153, 204, 50, 255);

	/** Initializes list of common colors. */
	void CreateColorMap();

	/** Returns a color based on ColorName. If not found, returns White. */
	ARK_API const FColor& GetFColorByName( const TCHAR* ColorName ) const;

	/** Returns a linear color based on ColorName. If not found, returns White. */
	ARK_API const FLinearColor GetFLinearColorByName( const TCHAR* ColorName ) const;

	/** Returns true if color is valid common colors. If not found returns false. */
	bool IsValidColorName( const TCHAR* ColorName ) const;

	/** Returns index of color based on ColorName. If not found returns 0. */
	ARK_API int32 GetColorIndex( const TCHAR* ColorName ) const;

	/** Returns a color based on index. If index is invalid, returns White. */
	ARK_API const FColor& GetFColorByIndex( int32 ColorIndex ) const;

	/** Returns color's name based on index. If index is invalid, returns BadIndex. */
	ARK_API const FString& GetColorNameByIndex( int32 ColorIndex ) const;

	/** Returns the number of colors. */
	ARK_API int32 GetColorsNum() const
	{
		return ColorsMap.Num();
	}

	/** Prints to log all colors information. */
	void LogColors();

protected:
	void InitializeColor( const TCHAR* ColorName, const FColor* ColorPtr, int32& CurrentIndex );

	/** List of common colors. */
	TColorsMap ColorsMap;

	/** Array of colors for fast lookup when using index. */
	TColorsLookup ColorsLookup;
};


ARK_API extern FColorList GColorList;
