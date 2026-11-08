#pragma once
#include "BulkForward.h"
#include "AActor.h"

struct AResonanceAudioDirectivityVisualizer : public AActor
{
public:
	AResonanceAudioDirectivityVisualizer() = delete;
	~AResonanceAudioDirectivityVisualizer() = delete;
	AResonanceAudioDirectivityVisualizer(const AResonanceAudioDirectivityVisualizer&) = delete;
	AResonanceAudioDirectivityVisualizer& operator=(const AResonanceAudioDirectivityVisualizer&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("AResonanceAudioDirectivityVisualizer"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("AResonanceAudioDirectivityVisualizer"); }

	int& CIRCLE_SECTIONSField() { return *GetNativePointerField<int*>(this, "AResonanceAudioDirectivityVisualizer.CIRCLE_SECTIONS"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& VerticesField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "AResonanceAudioDirectivityVisualizer.Vertices"); }
	TArray<int, TSizedDefaultAllocator<32> >& TrianglesField() { return *GetNativePointerField<TArray<int, TSizedDefaultAllocator<32> >*>(this, "AResonanceAudioDirectivityVisualizer.Triangles"); }
	TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >& NormalsField() { return *GetNativePointerField<TArray<UE::Math::TVector<double>, TSizedDefaultAllocator<32> >*>(this, "AResonanceAudioDirectivityVisualizer.Normals"); }
	TArray<FColor, TSizedDefaultAllocator<32> >& VertexColorsField() { return *GetNativePointerField<TArray<FColor, TSizedDefaultAllocator<32> >*>(this, "AResonanceAudioDirectivityVisualizer.VertexColors"); }
	TArray<UE::Math::TVector2<double>, TSizedDefaultAllocator<32> >& UV0Field() { return *GetNativePointerField<TArray<UE::Math::TVector2<double>, TSizedDefaultAllocator<32> >*>(this, "AResonanceAudioDirectivityVisualizer.UV0"); }
	UProceduralMeshComponent*& MeshField() { return *GetNativePointerField<UProceduralMeshComponent**>(this, "AResonanceAudioDirectivityVisualizer.Mesh"); }
};
