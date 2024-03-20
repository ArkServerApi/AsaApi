// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/Array.h"
#include "Containers/UnrealString.h"
#include "CoreTypes.h"
#include "HAL/PreprocessorHelpers.h"
#include "Math/MathFwd.h"
#include "Math/UnrealMathUtility.h"
#include "Misc/AssertionMacros.h"
#include "Misc/Crc.h"
#include "Misc/Parse.h"
#include "Serialization/Archive.h"
#include "Serialization/MemoryLayout.h"
#include "Serialization/StructuredArchive.h"
#include "Serialization/StructuredArchiveNameHelpers.h"
#include "Serialization/StructuredArchiveSlots.h"

class FFloat16Color;
class FMemoryImageWriter;
class FMemoryUnfreezeContent;
class FPointerTableBase;
class FSHA1;
struct FColor;
template <typename T> struct TIsPODType;

/**
 * Enum for the different kinds of gamma spaces we expect to need to convert from/to.
 */
enum class EGammaSpace : uint8
{
	/** No gamma correction is applied to this space, the incoming colors are assumed to already be in linear space. */
	Linear,
	/** A simplified sRGB gamma correction is applied, pow(1/2.2). */
	Pow22,
	/** Use the standard sRGB conversion. */
	sRGB,

	Invalid
};


/**
 * A linear, 32-bit/component floating point RGBA color.
 */
ARK_API struct FLinearColor
{
	union
	{
		struct 
		{
			float	R,
					G,
					B,
					A;
		};

		UE_DEPRECATED(all, "For internal use only.")
		float RGBA[4];
	};

	/** Static lookup table used for FColor -> FLinearColor conversion. Pow(2.2) */
	static float Pow22OneOver255Table[256];

	/** Static lookup table used for FColor -> FLinearColor conversion. sRGB */
	//ARK_API static float sRGBToLinearTable[256];
	static CONSTEXPR double sRGBToLinearTable[256] =
	{
		0,
		0.000303526983548838, 0.000607053967097675, 0.000910580950646512, 0.00121410793419535, 0.00151763491774419,
		0.00182116190129302, 0.00212468888484186, 0.0024282158683907, 0.00273174285193954, 0.00303526983548838,
		0.00334653564113713, 0.00367650719436314, 0.00402471688178252, 0.00439144189356217, 0.00477695332960869,
		0.005181516543916, 0.00560539145834456, 0.00604883284946662, 0.00651209061157708, 0.00699540999852809,
		0.00749903184667767, 0.00802319278093555, 0.0085681254056307, 0.00913405848170623, 0.00972121709156193,
		0.0103298227927056, 0.0109600937612386, 0.0116122449260844, 0.012286488094766, 0.0129830320714536,
		0.0137020827679224, 0.0144438433080002, 0.0152085141260192, 0.0159962930597398, 0.0168073754381669,
		0.0176419541646397, 0.0185002197955389, 0.0193823606149269, 0.0202885627054049, 0.0212190100154473,
		0.0221738844234532, 0.02315336579873, 0.0241576320596103, 0.0251868592288862, 0.0262412214867272,
		0.0273208912212394, 0.0284260390768075, 0.0295568340003534, 0.0307134432856324, 0.0318960326156814,
		0.0331047661035236, 0.0343398063312275, 0.0356013143874111, 0.0368894499032755, 0.0382043710872463,
		0.0395462347582974, 0.0409151963780232, 0.0423114100815264, 0.0437350287071788, 0.0451862038253117,
		0.0466650857658898, 0.0481718236452158, 0.049706565391714, 0.0512694577708345, 0.0528606464091205,
		0.0544802758174765, 0.0561284894136735, 0.0578054295441256, 0.0595112375049707, 0.0612460535624849,
		0.0630100169728596, 0.0648032660013696, 0.0666259379409563, 0.0684781691302512, 0.070360094971063,
		0.0722718499453493, 0.0742135676316953, 0.0761853807213167, 0.0781874210336082, 0.0802198195312533,
		0.0822827063349132, 0.0843762107375113, 0.0865004612181274, 0.0886555854555171, 0.0908417103412699,
		0.0930589619926197, 0.0953074657649191, 0.0975873462637915, 0.0998987273569704, 0.102241732185838,
		0.104616483176675, 0.107023102051626, 0.109461709839399, 0.1119324268857, 0.114435372863418,
		0.116970666782559, 0.119538426999953, 0.122138771228724, 0.124771816547542, 0.127437679409664,
		0.130136475651761, 0.132868320502552, 0.135633328591233, 0.138431613955729, 0.141263290050755,
		0.144128469755705, 0.147027265382362, 0.149959788682454, 0.152926150855031, 0.155926462553701,
		0.158960833893705, 0.162029374458845, 0.16513219330827, 0.168269398983119, 0.171441099513036,
		0.174647402422543, 0.17788841473729, 0.181164242990184, 0.184474993227387, 0.187820771014205,
		0.191201681440861, 0.194617829128147, 0.198069318232982, 0.201556252453853, 0.205078735036156,
		0.208636868777438, 0.212230756032542, 0.215860498718652, 0.219526198320249, 0.223227955893977,
		0.226965872073417, 0.23074004707378, 0.23455058069651, 0.238397572333811, 0.242281120973093,
		0.246201325201334, 0.250158283209375, 0.254152092796134, 0.258182851372752, 0.262250655966664,
		0.266355603225604, 0.270497789421545, 0.274677310454565, 0.278894261856656, 0.283148738795466,
		0.287440836077983, 0.291770648154158, 0.296138269120463, 0.300543792723403, 0.304987312362961,
		0.309468921095997, 0.313988711639584, 0.3185467763743, 0.323143207347467, 0.32777809627633,
		0.332451534551205, 0.337163613238559, 0.341914423084057, 0.346704054515559, 0.351532597646068,
		0.356400142276637, 0.361306777899234, 0.36625259369956, 0.371237678559833, 0.376262121061519,
		0.381326009488037, 0.386429431827418, 0.39157247577492, 0.396755228735618, 0.401977777826949,
		0.407240209881218, 0.41254261144808, 0.417885068796976, 0.423267667919539, 0.428690494531971,
		0.434153634077377, 0.439657171728079, 0.445201192387887, 0.450785780694349, 0.456411021020965,
		0.462076997479369, 0.467783793921492, 0.473531493941681, 0.479320180878805, 0.485149937818323,
		0.491020847594331, 0.496932992791578, 0.502886455747457, 0.50888131855397, 0.514917663059676,
		0.520995570871595, 0.527115123357109, 0.533276401645826, 0.539479486631421, 0.545724458973463,
		0.552011399099209, 0.558340387205378, 0.56471150325991, 0.571124827003694, 0.577580437952282,
		0.584078415397575, 0.590618838409497, 0.597201785837643, 0.603827336312907, 0.610495568249093,
		0.617206559844509, 0.623960389083534, 0.630757133738175, 0.637596871369601, 0.644479679329661,
		0.651405634762384, 0.658374814605461, 0.665387295591707, 0.672443154250516, 0.679542466909286,
		0.686685309694841, 0.693871758534824, 0.701101889159085, 0.708375777101046, 0.71569349769906,
		0.723055126097739, 0.730460737249286, 0.737910405914797, 0.745404206665559, 0.752942213884326,
		0.760524501766589, 0.768151144321824, 0.775822215374732, 0.783537788566466, 0.791297937355839,
		0.799102735020525, 0.806952254658248, 0.81484656918795, 0.822785751350956, 0.830769873712124,
		0.838799008660978, 0.846873228412837, 0.854992605009927, 0.863157210322481, 0.871367116049835,
		0.879622393721502, 0.887923114698241, 0.896269350173118, 0.904661171172551, 0.913098648557343,
		0.921581853023715, 0.930110855104312, 0.938685725169219, 0.947306533426946, 0.955973349925421,
		0.964686244552961, 0.973445287039244, 0.982250546956257, 0.991102093719252, 1.0,
	};

	FORCEINLINE FLinearColor() {}
	FORCEINLINE explicit FLinearColor(EForceInit)
	: R(0), G(0), B(0), A(0)
	{}
	constexpr FORCEINLINE FLinearColor(float InR,float InG,float InB,float InA = 1.0f): R(InR), G(InG), B(InB), A(InA) {}
	
	/**
	 * Converts an FColor which is assumed to be in sRGB space, into linear color space.
	 * @param Color The sRGB color that needs to be converted into linear space.
	 * to get direct conversion use ReinterpretAsLinear
	 */
	FORCEINLINE FLinearColor(const FColor& Color);

	FLinearColor(const FVector3f& Vector);
	explicit FLinearColor(const FVector3d& Vector); // Warning: keep this explicit, or FVector4f will be implicitly created from FVector3d via FLinearColor

	FLinearColor(const FVector4f& Vector);
	explicit FLinearColor(const FVector4d& Vector); // Warning: keep this explicit, or FVector4f will be implicitly created from FVector4d via FLinearColor
	
	// use Float16Color::GetFloats() directly
	explicit FLinearColor(const FFloat16Color& C);

	// Serializer.

	friend void operator<<(FStructuredArchive::FSlot Slot, FLinearColor& Color)
	{
		FStructuredArchive::FRecord Record = Slot.EnterRecord();
		Record << SA_VALUE(TEXT("R"), Color.R) << SA_VALUE(TEXT("G"), Color.G) << SA_VALUE(TEXT("B"), Color.B) << SA_VALUE(TEXT("A"), Color.A);
	}

	bool Serialize(FStructuredArchive::FSlot Slot)
	{
		Slot << *this;
		return true;
	}

	// Conversions.
	FColor ToRGBE() const;

	/**
	 * Converts an FColor coming from an observed sRGB output, into a linear color.
	 * @param Color The sRGB color that needs to be converted into linear space.
	 */
	FORCEINLINE static FLinearColor FromSRGBColor(const FColor& Color)
	{
		return FLinearColor(Color);
	}

	/**
	 * Converts an FColor coming from an observed Pow(1/2.2) output, into a linear color.
	 * @param Color The Pow(1/2.2) color that needs to be converted into linear space.
	 */
	static FLinearColor FromPow22Color(const FColor& Color);

	// Operators.

	FORCEINLINE float& Component(int32 Index)
	{
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
		return RGBA[Index];
	PRAGMA_ENABLE_DEPRECATION_WARNINGS
	}

	FORCEINLINE const float& Component(int32 Index) const
	{
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
		return RGBA[Index];
	PRAGMA_ENABLE_DEPRECATION_WARNINGS
	}

	FORCEINLINE void operator=(const FLinearColor& ColorB) 
	{		
		this->R = ColorB.R;
		this->G = ColorB.G;
		this->B = ColorB.B;
		this->A = ColorB.A;
	}

	FORCEINLINE FLinearColor operator+(const FLinearColor& ColorB) const
	{
		return FLinearColor(
			this->R + ColorB.R,
			this->G + ColorB.G,
			this->B + ColorB.B,
			this->A + ColorB.A
			);
	}
	FORCEINLINE FLinearColor& operator+=(const FLinearColor& ColorB)
	{
		R += ColorB.R;
		G += ColorB.G;
		B += ColorB.B;
		A += ColorB.A;
		return *this;
	}

	FORCEINLINE FLinearColor operator-(const FLinearColor& ColorB) const
	{
		return FLinearColor(
			this->R - ColorB.R,
			this->G - ColorB.G,
			this->B - ColorB.B,
			this->A - ColorB.A
			);
	}
	FORCEINLINE FLinearColor& operator-=(const FLinearColor& ColorB)
	{
		R -= ColorB.R;
		G -= ColorB.G;
		B -= ColorB.B;
		A -= ColorB.A;
		return *this;
	}

	FORCEINLINE FLinearColor operator*(const FLinearColor& ColorB) const
	{
		return FLinearColor(
			this->R * ColorB.R,
			this->G * ColorB.G,
			this->B * ColorB.B,
			this->A * ColorB.A
			);
	}
	FORCEINLINE FLinearColor& operator*=(const FLinearColor& ColorB)
	{
		R *= ColorB.R;
		G *= ColorB.G;
		B *= ColorB.B;
		A *= ColorB.A;
		return *this;
	}

	FORCEINLINE FLinearColor operator*(float Scalar) const
	{
		return FLinearColor(
			this->R * Scalar,
			this->G * Scalar,
			this->B * Scalar,
			this->A * Scalar
			);
	}

	FORCEINLINE FLinearColor& operator*=(float Scalar)
	{
		R *= Scalar;
		G *= Scalar;
		B *= Scalar;
		A *= Scalar;
		return *this;
	}

	FORCEINLINE FLinearColor operator/(const FLinearColor& ColorB) const
	{
		return FLinearColor(
			this->R / ColorB.R,
			this->G / ColorB.G,
			this->B / ColorB.B,
			this->A / ColorB.A
			);
	}
	FORCEINLINE FLinearColor& operator/=(const FLinearColor& ColorB)
	{
		R /= ColorB.R;
		G /= ColorB.G;
		B /= ColorB.B;
		A /= ColorB.A;
		return *this;
	}

	FORCEINLINE FLinearColor operator/(float Scalar) const
	{
		const float	InvScalar = 1.0f / Scalar;
		return FLinearColor(
			this->R * InvScalar,
			this->G * InvScalar,
			this->B * InvScalar,
			this->A * InvScalar
			);
	}
	FORCEINLINE FLinearColor& operator/=(float Scalar)
	{
		const float	InvScalar = 1.0f / Scalar;
		R *= InvScalar;
		G *= InvScalar;
		B *= InvScalar;
		A *= InvScalar;
		return *this;
	}

	// clamped in 0..1 range
	FORCEINLINE FLinearColor GetClamped(float InMin = 0.0f, float InMax = 1.0f) const
	{
		FLinearColor Ret;

		Ret.R = FMath::Clamp(R, InMin, InMax);
		Ret.G = FMath::Clamp(G, InMin, InMax);
		Ret.B = FMath::Clamp(B, InMin, InMax);
		Ret.A = FMath::Clamp(A, InMin, InMax);

		return Ret;
	}

	/** Comparison operators */
	FORCEINLINE bool operator==(const FLinearColor& ColorB) const
	{
		return this->R == ColorB.R && this->G == ColorB.G && this->B == ColorB.B && this->A == ColorB.A;
	}
	FORCEINLINE bool operator!=(const FLinearColor& Other) const
	{
		return this->R != Other.R || this->G != Other.G || this->B != Other.B || this->A != Other.A;
	}

	// Error-tolerant comparison.
	FORCEINLINE bool Equals(const FLinearColor& ColorB, float Tolerance=UE_KINDA_SMALL_NUMBER) const
	{
		return FMath::Abs(this->R - ColorB.R) < Tolerance && FMath::Abs(this->G - ColorB.G) < Tolerance && FMath::Abs(this->B - ColorB.B) < Tolerance && FMath::Abs(this->A - ColorB.A) < Tolerance;
	}

	FLinearColor CopyWithNewOpacity(float NewOpacicty) const
	{
		FLinearColor NewCopy = *this;
		NewCopy.A = NewOpacicty;
		return NewCopy;
	}

	UE_DEPRECATED(4.22, "FGetHSV doesn't perform a valid HSV conversion, use MakeFromHSV8 instead")
	static FLinearColor FGetHSV(uint8 H,uint8 S,uint8 V);

	/**
	 * Converts byte hue-saturation-brightness to floating point red-green-blue.
	 */
	static FLinearColor MakeFromHSV8(uint8 H, uint8 S, uint8 V);

	/**
	* Makes a random but quite nice color.
	*/
	static FLinearColor MakeRandomColor();

	/**
	* Converts temperature in Kelvins of a black body radiator to RGB chromaticity.
	*/
	static FLinearColor MakeFromColorTemperature( float Temp );

	/**
	* Makes a random color based on a seed.
	*/
	static FLinearColor MakeRandomSeededColor(int32 Seed);

	/**
	 * Euclidean distance between two points.
	 */
	static inline float Dist( const FLinearColor &V1, const FLinearColor &V2 )
	{
		return FMath::Sqrt( FMath::Square(V2.R-V1.R) + FMath::Square(V2.G-V1.G) + FMath::Square(V2.B-V1.B) + FMath::Square(V2.A-V1.A) );
	}

	/**
	 * Generates a list of sample points on a Bezier curve defined by 2 points.
	 *
	 * @param	ControlPoints	Array of 4 Linear Colors (vert1, controlpoint1, controlpoint2, vert2).
	 * @param	NumPoints		Number of samples.
	 * @param	OutPoints		Receives the output samples.
	 * @return					Path length.
	 */
	static float EvaluateBezier(const FLinearColor* ControlPoints, int32 NumPoints, TArray<FLinearColor>& OutPoints);

	/** Converts a linear space RGB color to an HSV color */
	FLinearColor LinearRGBToHSV() const;

	/** Converts an HSV color to a linear space RGB color */
	FLinearColor HSVToLinearRGB() const;

	/**
	 * Linearly interpolates between two colors by the specified progress amount.  The interpolation is performed in HSV color space
	 * taking the shortest path to the new color's hue.  This can give better results than FMath::Lerp(), but is much more expensive.
	 * The incoming colors are in RGB space, and the output color will be RGB.  The alpha value will also be interpolated.
	 * 
	 * @param	From		The color and alpha to interpolate from as linear RGBA
	 * @param	To			The color and alpha to interpolate to as linear RGBA
	 * @param	Progress	Scalar interpolation amount (usually between 0.0 and 1.0 inclusive)
	 * @return	The interpolated color in linear RGB space along with the interpolated alpha value
	 */
	static FLinearColor LerpUsingHSV( const FLinearColor& From, const FLinearColor& To, const float Progress );

	/** Quantizes the linear color with rounding and returns the result as a FColor.  This bypasses the SRGB conversion. 
	* QuantizeRound can be dequantized back to linear with FColor::ReinterpretAsLinear (just /255.f)
	* this matches the GPU UNORM<->float conversion spec and should be preferred
	*/
	FORCEINLINE FColor QuantizeRound() const;
	
	/** Quantizes the linear color and returns the result as a FColor.  This bypasses the SRGB conversion.
	* Uses floor quantization, which does not match the GPU standard conversion.
	* Restoration to float should be done with a +0.5 bias to restore to centered buckets.
	* Do NOT use this for graphics or textures or images, use QuantizeRound instead.
	*/
	FORCEINLINE FColor QuantizeFloor() const;

	/** backwards compatible Quantize function name, does QuantizeFloor.
	* @todo deprecate me
	*/
	UE_DEPRECATED(5.0, "Most callers of Quantize should have been calling QuantizeRound; to match old behavior use QuantizeFloor")
	FORCEINLINE FColor Quantize() const;

	/** Quantizes the linear color and returns the result as a FColor with optional sRGB conversion. 
	* Clamps in [0,1] range before conversion.
	* ToFColor(false) is QuantizeRound
	*/
	FColor ToFColorSRGB() const;
	
	FORCEINLINE FColor ToFColor(const bool bSRGB) const;
	
	/**
	 * Returns a desaturated color, with 0 meaning no desaturation and 1 == full desaturation
	 *
	 * @param	Desaturation	Desaturation factor in range [0..1]
	 * @return	Desaturated color
	 */
	FLinearColor Desaturate( float Desaturation ) const;

	/** Computes the perceptually weighted luminance value of a color. */
	inline float GetLuminance() const
	{		
		return R * 0.3f + G * 0.59f + B * 0.11f;
	}
	
	/**
	 * Returns the maximum value in this color structure
	 *
	 * @return The maximum color channel value
	 */
	FORCEINLINE float GetMax() const
	{
		return FMath::Max( FMath::Max( FMath::Max( R, G ), B ), A );
	}

	/** useful to detect if a light contribution needs to be rendered */
	bool IsAlmostBlack() const
	{
		return FMath::Square(R) < UE_DELTA && FMath::Square(G) < UE_DELTA && FMath::Square(B) < UE_DELTA;
	}

	/**
	 * Returns the minimum value in this color structure
	 *
	 * @return The minimum color channel value
	 */
	FORCEINLINE float GetMin() const
	{
		return FMath::Min( FMath::Min( FMath::Min( R, G ), B ), A );
	}

	FString ToString() const
	{
		return FString::Printf(TEXT("(R=%f,G=%f,B=%f,A=%f)"),R,G,B,A);
	}

	/**
	 * Initialize this Color based on an FString. The String is expected to contain R=, G=, B=, A=.
	 * The FLinearColor will be bogus when InitFromString returns false.
	 *
	 * @param InSourceString FString containing the color values.
	 * @return true if the R,G,B values were read successfully; false otherwise.
	 */
	bool InitFromString( const FString& InSourceString )
	{
		R = G = B = 0.f;
		A = 1.f;

		// The initialization is only successful if the R, G, and B values can all be parsed from the string
		const bool bSuccessful = FParse::Value( *InSourceString, TEXT("R=") , R ) && FParse::Value( *InSourceString, TEXT("G="), G ) && FParse::Value( *InSourceString, TEXT("B="), B );
		
		// Alpha is optional, so don't factor in its presence (or lack thereof) in determining initialization success
		FParse::Value( *InSourceString, TEXT("A="), A );
		
		return bSuccessful;
	}

	/**
	 * Helper for pixel format conversions. Clamps to [0,1], mapping NaNs to 0,
	 * for consistency with GPU conversions.
	 * 
	 * @param InValue The input value.
	 * @return InValue clamped to [0,1]. NaNs map to 0.
	 */
	static FORCEINLINE float Clamp01NansTo0(float InValue)
	{
		// Write this explicitly instead of using FMath::Clamp because we're particular
		// about what happens with NaNs here.
		const float ClampedLo = (InValue > 0.0f) ? InValue : 0.0f; // Also turns NaNs into 0.
		return (ClampedLo < 1.0f) ? ClampedLo : 1.0f;
	}

	// Common colors.	
	static const FLinearColor White;
	static const FLinearColor Gray;
	static const FLinearColor Black;
	static const FLinearColor Transparent;
	static const FLinearColor Red;
	static const FLinearColor Green;
	static const FLinearColor Blue;
	static const FLinearColor Yellow;

	friend FORCEINLINE uint32 GetTypeHash( const FLinearColor& LinearColor )
	{
		// Note: this assumes there's no padding in FLinearColor that could contain uncompared data.
		return FCrc::MemCrc_DEPRECATED(&LinearColor, sizeof(FLinearColor));
	}
};
DECLARE_INTRINSIC_TYPE_LAYOUT(FLinearColor);

FORCEINLINE FLinearColor operator*(float Scalar,const FLinearColor& Color)
{
	return Color.operator*( Scalar );
}

//
//	FColor
//	Stores a color with 8 bits of precision per channel.  
//	Note: Linear color values should always be converted to gamma space before stored in an FColor, as 8 bits of precision is not enough to store linear space colors!
//	This can be done with FLinearColor::ToFColor(true) 
//

ARK_API struct FColor
{
public:
	// Variables.
#if PLATFORM_LITTLE_ENDIAN
	union { struct{ uint8 B,G,R,A; }; uint32 Bits; };
#else // PLATFORM_LITTLE_ENDIAN
	union { struct{ uint8 A,R,G,B; }; uint32 Bits; };
#endif

	uint32& DWColor(void) {return Bits;}
	const uint32& DWColor(void) const {return Bits;}

	// Constructors.
	FORCEINLINE FColor() {}
	FORCEINLINE explicit FColor(EForceInit)
	{
		// put these into the body for proper ordering with INTEL vs non-INTEL_BYTE_ORDER
		R = G = B = A = 0;
	}
	constexpr FORCEINLINE FColor( uint8 InR, uint8 InG, uint8 InB, uint8 InA = 255 )
		// put these into the body for proper ordering with INTEL vs non-INTEL_BYTE_ORDER
#if PLATFORM_LITTLE_ENDIAN
		: B(InB), G(InG), R(InR), A(InA)
#else
		: A(InA), R(InR), G(InG), B(InB)
#endif
	{}

	FORCEINLINE explicit FColor( uint32 InColor )
	{ 
		DWColor() = InColor; 
	}

	// Serializer.
	friend FArchive& operator<< (FArchive &Ar, FColor &Color )
	{
		return Ar << Color.DWColor();
	}

	bool Serialize( FArchive& Ar )
	{
		Ar << *this;
		return true;
	}

	// Serializer.
	friend void operator<< (FStructuredArchive::FSlot Slot, FColor &Color)
	{
		return Slot << Color.DWColor();
	}

	bool Serialize(FStructuredArchive::FSlot Slot)
	{
		Slot << *this;
		return true;
	}

	// Operators.
	FORCEINLINE bool operator==( const FColor &C ) const
	{
		return DWColor() == C.DWColor();
	}

	FORCEINLINE bool operator!=( const FColor& C ) const
	{
		return DWColor() != C.DWColor();
	}

	FORCEINLINE void operator+=(const FColor& C)
	{
		R = (uint8) FMath::Min((int32) R + (int32) C.R,255);
		G = (uint8) FMath::Min((int32) G + (int32) C.G,255);
		B = (uint8) FMath::Min((int32) B + (int32) C.B,255);
		A = (uint8) FMath::Min((int32) A + (int32) C.A,255);
	}

	FLinearColor FromRGBE() const;

	/**
	 * Creates a color value from the given hexadecimal string.
	 *
	 * Supported formats are: RGB, RRGGBB, RRGGBBAA, #RGB, #RRGGBB, #RRGGBBAA
	 *
	 * @param HexString - The hexadecimal string.
	 * @return The corresponding color value.
	 * @see ToHex
	 */
	static FColor FromHex( const FString& HexString );

	/**
	 * Makes a random but quite nice color.
	 */
	static FColor MakeRandomColor();

	/**
	 * Makes a color red->green with the passed in scalar (e.g. 0 is red, 1 is green)
	 */
	static FColor MakeRedToGreenColorFromScalar(float Scalar);

	/**
	* Converts temperature in Kelvins of a black body radiator to RGB chromaticity.
	*/
	static FColor MakeFromColorTemperature( float Temp );

	/**
	* Makes a random color based on a seed.
	*/
	static FColor MakeRandomSeededColor(int32 Seed);

	/**
	* Conversions to/from GPU UNorm floats, U8, U16
	* matches convention of FColor FLinearColor::QuantizeRound
	*/

	static uint8 QuantizeUNormFloatTo8( float UnitFloat )
	{
		UnitFloat = FMath::Clamp(UnitFloat,0.f,1.f);
		return (uint8)( 0.5f + UnitFloat * 255.f );
	}
	
	static uint16 QuantizeUNormFloatTo16( float UnitFloat )
	{
		UnitFloat = FMath::Clamp(UnitFloat,0.f,1.f);
		return (uint16)( 0.5f + UnitFloat * 65535.f );
	}

	static float DequantizeUNorm8ToFloat( int Value8 )
	{
		check( Value8 >= 0 && Value8 <= 255 );

		return (float)Value8 / 255.f;
	}
	
	static float DequantizeUNorm16ToFloat( int Value16 )
	{
		check( Value16 >= 0 && Value16 <= 65535 );

		return (float)Value16 / 65535.f;
	}

	static uint8 Requantize10to8( int Value10 )
	{
		check( Value10 >= 0 && Value10 <= 1023 );

		// Dequantize from 10 bit (Value10/1023.f)
		// requantize to 8 bit with rounding (GPU convention UNorm)
		//  this is the computation we want :
		// (int)( (Value10/1023.f)*255.f + 0.5f );
		// this gives the exactly the same results :
		int Temp = Value10*255 + (1<<9);
		int Value8 = (Temp + (Temp >> 10)) >> 10;
		return (uint8)Value8;
	}
	
	static uint8 Requantize16to8(int Value16)
	{
		check( Value16 >= 0 && Value16 <= 65535 );

		// Dequantize x from 16 bit (Value16/65535.f)
		// then requantize to 8 bit with rounding (GPU convention UNorm)

		// matches exactly with :
		//  (int)( (Value16/65535.f) * 255.f + 0.5f );
		int Value8 = (Value16*255 + 32895)>>16;
		return (uint8)Value8;
	}

	/**
	* Return 8-bit color Quantized from 10-bit RGB , 2-bit A
	*/
	static FColor MakeRequantizeFrom1010102( int R, int G, int B, int A )
	{
		check( A >= 0 && A <= 3 );

		// requantize 2 bits to 8 ; could bit-replicate or just table lookup :
		const uint8 Requantize2to8[4] = { 0, 0x55, 0xAA, 0xFF };
		return FColor(
			Requantize10to8(R),
			Requantize10to8(G),
			Requantize10to8(B),
			Requantize2to8[A] );

	}

	/**
	 *	@return a new FColor based of this color with the new alpha value.
	 *	Usage: const FColor& MyColor = FColorList::Green.WithAlpha(128);
	 */
	FColor WithAlpha( uint8 Alpha ) const
	{
		return FColor( R, G, B, Alpha );
	}

	/**
	 * Reinterprets the color as a linear color.
	 * This is the correct dequantizer for QuantizeRound.
	 * This matches the GPU spec conversion for U8<->float
	 * @return The linear color representation.
	 */
	FORCEINLINE FLinearColor ReinterpretAsLinear() const
	{
		return FLinearColor(R / 255.f, G / 255.f, B / 255.f, A / 255.f);
	}

	/**
	 * Converts this color value to a hexadecimal string.
	 *
	 * The format of the string is RRGGBBAA.
	 *
	 * @return Hexadecimal string.
	 * @see FromHex, ToString
	 */
	FORCEINLINE FString ToHex() const
	{
		return FString::Printf(TEXT("%02X%02X%02X%02X"), R, G, B, A);
	}

	/**
	 * Converts this color value to a string.
	 *
	 * @return The string representation.
	 * @see ToHex
	 */
	FORCEINLINE FString ToString() const
	{
		return FString::Printf(TEXT("(R=%i,G=%i,B=%i,A=%i)"), R, G, B, A);
	}

	/**
	 * Initialize this Color based on an FString. The String is expected to contain R=, G=, B=, A=.
	 * The FColor will be bogus when InitFromString returns false.
	 *
	 * @param	InSourceString	FString containing the color values.
	 * @return true if the R,G,B values were read successfully; false otherwise.
	 */
	bool InitFromString( const FString& InSourceString )
	{
		R = G = B = 0;
		A = 255;

		// The initialization is only successful if the R, G, and B values can all be parsed from the string
		const bool bSuccessful = FParse::Value( *InSourceString, TEXT("R=") , R ) && FParse::Value( *InSourceString, TEXT("G="), G ) && FParse::Value( *InSourceString, TEXT("B="), B );
		
		// Alpha is optional, so don't factor in its presence (or lack thereof) in determining initialization success
		FParse::Value( *InSourceString, TEXT("A="), A );
		
		return bSuccessful;
	}

	/**
	 * Gets the color in a packed uint32 format packed in the order ARGB.
	 */
	FORCEINLINE uint32 ToPackedARGB() const
	{
		return ( A << 24 ) | ( R << 16 ) | ( G << 8 ) | ( B << 0 );
	}

	/**
	 * Gets the color in a packed uint32 format packed in the order ABGR.
	 */
	FORCEINLINE uint32 ToPackedABGR() const
	{
		return ( A << 24 ) | ( B << 16 ) | ( G << 8 ) | ( R << 0 );
	}

	/**
	 * Gets the color in a packed uint32 format packed in the order RGBA.
	 */
	FORCEINLINE uint32 ToPackedRGBA() const
	{
		return ( R << 24 ) | ( G << 16 ) | ( B << 8 ) | ( A << 0 );
	}

	/**
	 * Gets the color in a packed uint32 format packed in the order BGRA.
	 */
	FORCEINLINE uint32 ToPackedBGRA() const
	{
		return ( B << 24 ) | ( G << 16 ) | ( R << 8 ) | ( A << 0 );
	}

	/** Some pre-inited colors, useful for debug code */
	ARK_API static const FColor White;
	ARK_API static const FColor Black;
	ARK_API static const FColor Transparent;
	ARK_API static const FColor Red;
	ARK_API static const FColor Green;
	ARK_API static const FColor Blue;
	ARK_API static const FColor Yellow;
	ARK_API static const FColor Cyan;
	ARK_API static const FColor Magenta;
	ARK_API static const FColor Orange;
	ARK_API static const FColor Purple;
	ARK_API static const FColor Turquoise;
	ARK_API static const FColor Silver;
	ARK_API static const FColor Emerald;

	friend FORCEINLINE uint32 GetTypeHash( const FColor& Color )
	{
		return Color.DWColor();
	}

private:
	/**
	 * Please use .ToFColor(true) on FLinearColor if you wish to convert from FLinearColor to FColor,
	 * with proper sRGB conversion applied.
	 *
	 * Note: Do not implement or make public.  We don't want people needlessly and implicitly converting between
	 * FLinearColor and FColor.  It's not a free conversion.
	 */
	ARK_API explicit FColor(const FLinearColor& LinearColor);
};
DECLARE_INTRINSIC_TYPE_LAYOUT(FColor);

static const float OneOver255 = 1.0f / 255.0f;
FORCEINLINE FLinearColor::FLinearColor(const FColor& Color)
{
	R = (float)sRGBToLinearTable[Color.R];
	G = (float)sRGBToLinearTable[Color.G];
	B = (float)sRGBToLinearTable[Color.B];
	A = float(Color.A) * OneOver255;
}

FORCEINLINE FColor FLinearColor::QuantizeRound() const
{
	// Avoid FMath::RoundToInt because it calls floor()
	return FColor(
		(uint8)(0.5f + Clamp01NansTo0(R) * 255.f),
		(uint8)(0.5f + Clamp01NansTo0(G) * 255.f),
		(uint8)(0.5f + Clamp01NansTo0(B) * 255.f),
		(uint8)(0.5f + Clamp01NansTo0(A) * 255.f)
	);
}

FORCEINLINE FColor FLinearColor::QuantizeFloor() const
{
	return FColor(
		(uint8)(Clamp01NansTo0(R) * 255.f),
		(uint8)(Clamp01NansTo0(G) * 255.f),
		(uint8)(Clamp01NansTo0(B) * 255.f),
		(uint8)(Clamp01NansTo0(A) * 255.f)
	);
}

FORCEINLINE FColor FLinearColor::Quantize() const
{
	return QuantizeFloor();
}

FORCEINLINE FColor FLinearColor::ToFColor(const bool bSRGB) const
{
	if ( bSRGB )
	{
		return ToFColorSRGB();
	}
	else
	{
		return QuantizeRound();
	}
}


/** Computes a brightness and a fixed point color from a floating point color. */
extern void ComputeAndFixedColorAndIntensity(const FLinearColor& InLinearColor,FColor& OutColor,float& OutIntensity);

/** Convert multiple FLinearColors to sRGB FColor; array version of FLinearColor::ToFColorSRGB. */
extern void ConvertFLinearColorsToFColorSRGB(const FLinearColor* InLinearColors, FColor* OutColorsSRGB, int64 InCount);

// These act like a POD
template <> struct TIsPODType<FColor> { enum { Value = true }; };
template <> struct TIsPODType<FLinearColor> { enum { Value = true }; };


/**
 * Helper struct for a 16 bit 565 color of a DXT1/3/5 block.
 */
struct FDXTColor565
{
	/** Blue component, 5 bit. */
	uint16 B:5;

	/** Green component, 6 bit. */
	uint16 G:6;

	/** Red component, 5 bit */
	uint16 R:5;
};


/**
 * Helper struct for a 16 bit 565 color of a DXT1/3/5 block.
 */
struct FDXTColor16
{
	union 
	{
		/** 565 Color */
		FDXTColor565 Color565;
		/** 16 bit entity representation for easy access. */
		uint16 Value;
	};
};


/**
 * Structure encompassing single DXT1 block.
 */
struct FDXT1
{
	/** Color 0/1 */
	union
	{
		FDXTColor16 Color[2];
		uint32 Colors;
	};
	/** Indices controlling how to blend colors. */
	uint32 Indices;
};


/**
 * Structure encompassing single DXT5 block
 */
struct FDXT5
{
	/** Alpha component of DXT5 */
	uint8	Alpha[8];
	/** DXT1 color component. */
	FDXT1	DXT1;
};


// Make DXT helpers act like PODs
template <> struct TIsPODType<FDXT1> { enum { Value = true }; };
template <> struct TIsPODType<FDXT5> { enum { Value = true }; };
template <> struct TIsPODType<FDXTColor16> { enum { Value = true }; };
template <> struct TIsPODType<FDXTColor565> { enum { Value = true }; };
