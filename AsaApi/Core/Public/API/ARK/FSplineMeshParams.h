#pragma once
#include "UEValueForward.h"
#include "UEObjectForward.h"
#include <cstddef>
#include <type_traits>

struct FSplineMeshParams
{
public:
    UE :: Math :: TVector < double > StartPos;
    UE :: Math :: TVector < double > StartTangent;
    UE :: Math :: TVector2 < double > StartScale;
    float StartRoll;
    float EndRoll;
    UE :: Math :: TVector2 < double > StartOffset;
    UE :: Math :: TVector < double > EndPos;
    UE :: Math :: TVector2 < double > EndScale;
    UE :: Math :: TVector < double > EndTangent;
    UE :: Math :: TVector2 < double > EndOffset;
    float NaniteClusterBoundsScale;
    FSplineMeshParams()
		: StartPos(ForceInit)
		, StartTangent(ForceInit)
		, StartScale(ForceInit)
		, StartRoll(0)
		, EndRoll(0)
		, StartOffset(ForceInit)
		, EndPos(ForceInit)
		, EndScale(ForceInit)
		, EndTangent(ForceInit)
		, EndOffset(ForceInit)
		, NaniteClusterBoundsScale(1.0f)
	{
	}
    UE::Math::TVector<double>& StartPosField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FSplineMeshParams.StartPos"); }
    UE::Math::TVector<double>& StartTangentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FSplineMeshParams.StartTangent"); }
    UE::Math::TVector2<double>& StartScaleField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "FSplineMeshParams.StartScale"); }
    float& StartRollField() { return *GetNativePointerField<float*>(this, "FSplineMeshParams.StartRoll"); }
    float& EndRollField() { return *GetNativePointerField<float*>(this, "FSplineMeshParams.EndRoll"); }
    UE::Math::TVector2<double>& StartOffsetField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "FSplineMeshParams.StartOffset"); }
    UE::Math::TVector<double>& EndPosField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FSplineMeshParams.EndPos"); }
    UE::Math::TVector2<double>& EndScaleField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "FSplineMeshParams.EndScale"); }
    UE::Math::TVector<double>& EndTangentField() { return *GetNativePointerField<UE::Math::TVector<double>*>(this, "FSplineMeshParams.EndTangent"); }
    UE::Math::TVector2<double>& EndOffsetField() { return *GetNativePointerField<UE::Math::TVector2<double>*>(this, "FSplineMeshParams.EndOffset"); }
    float& NaniteClusterBoundsScaleField() { return *GetNativePointerField<float*>(this, "FSplineMeshParams.NaniteClusterBoundsScale"); }
};
static_assert(sizeof(FSplineMeshParams) == 176);
static_assert(offsetof(FSplineMeshParams, StartPos) == 0);
static_assert(offsetof(FSplineMeshParams, StartTangent) == 24);
static_assert(offsetof(FSplineMeshParams, StartScale) == 48);
static_assert(offsetof(FSplineMeshParams, StartRoll) == 64);
static_assert(offsetof(FSplineMeshParams, EndRoll) == 68);
static_assert(offsetof(FSplineMeshParams, StartOffset) == 72);
static_assert(offsetof(FSplineMeshParams, EndPos) == 88);
static_assert(offsetof(FSplineMeshParams, EndScale) == 112);
static_assert(offsetof(FSplineMeshParams, EndTangent) == 128);
static_assert(offsetof(FSplineMeshParams, EndOffset) == 152);
static_assert(offsetof(FSplineMeshParams, NaniteClusterBoundsScale) == 168);
static_assert(sizeof(((FSplineMeshParams*)nullptr)->StartPos) == 24);
static_assert(sizeof(((FSplineMeshParams*)nullptr)->StartTangent) == 24);
static_assert(sizeof(((FSplineMeshParams*)nullptr)->StartScale) == 16);
static_assert(sizeof(((FSplineMeshParams*)nullptr)->StartRoll) == 4);
static_assert(sizeof(((FSplineMeshParams*)nullptr)->EndRoll) == 4);
static_assert(sizeof(((FSplineMeshParams*)nullptr)->StartOffset) == 16);
static_assert(sizeof(((FSplineMeshParams*)nullptr)->EndPos) == 24);
static_assert(sizeof(((FSplineMeshParams*)nullptr)->EndScale) == 16);
static_assert(sizeof(((FSplineMeshParams*)nullptr)->EndTangent) == 24);
static_assert(sizeof(((FSplineMeshParams*)nullptr)->EndOffset) == 16);
static_assert(sizeof(((FSplineMeshParams*)nullptr)->NaniteClusterBoundsScale) == 4);
static_assert(std::is_trivially_copyable_v<FSplineMeshParams>);
