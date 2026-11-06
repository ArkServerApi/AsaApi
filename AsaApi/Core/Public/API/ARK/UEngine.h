#pragma once


struct UEngine : UObject
{
	// Fields

	TObjectPtr<UFont>& TinyFontField() { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.TinyFont"); }
	FSoftObjectPath& TinyFontNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.TinyFontName"); }
	TObjectPtr<UFont>& SmallFontField() { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.SmallFont"); }
	FSoftObjectPath& SmallFontNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.SmallFontName"); }
	TObjectPtr<UFont>& MediumFontField() { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.MediumFont"); }
	FSoftObjectPath& MediumFontNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.MediumFontName"); }
	TObjectPtr<UFont>& LargeFontField() { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.LargeFont"); }
	FSoftObjectPath& LargeFontNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.LargeFontName"); }
	TObjectPtr<UFont>& SubtitleFontField() { return *GetNativePointerField<TObjectPtr<UFont>*>(this, "UEngine.SubtitleFont"); }
	FSoftObjectPath& SubtitleFontNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.SubtitleFontName"); }
	TArray<TObjectPtr<UFont>, TSizedDefaultAllocator<32> >& AdditionalFontsField() { return *GetNativePointerField<TArray<TObjectPtr<UFont>, TSizedDefaultAllocator<32> >*>(this, "UEngine.AdditionalFonts"); }
	TArray<FString, TSizedDefaultAllocator<32> >& AdditionalFontNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UEngine.AdditionalFontNames"); }
	TSubclassOf<UConsole>& ConsoleClassField() { return *GetNativePointerField<TSubclassOf<UConsole>*>(this, "UEngine.ConsoleClass"); }
	FSoftClassPath& ConsoleClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.ConsoleClassName"); }
	//TSubclassOf<UGameViewportClient>& GameViewportClientClassField() { return *GetNativePointerField<TSubclassOf<UGameViewportClient>*>(this, "UEngine.GameViewportClientClass"); }
	FSoftClassPath& GameViewportClientClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.GameViewportClientClassName"); }
	TSubclassOf<ULocalPlayer>& LocalPlayerClassField() { return *GetNativePointerField<TSubclassOf<ULocalPlayer>*>(this, "UEngine.LocalPlayerClass"); }
	FSoftClassPath& LocalPlayerClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.LocalPlayerClassName"); }
	TSubclassOf<AWorldSettings>& WorldSettingsClassField() { return *GetNativePointerField<TSubclassOf<AWorldSettings>*>(this, "UEngine.WorldSettingsClass"); }
	FSoftClassPath& WorldSettingsClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.WorldSettingsClassName"); }
	FSoftClassPath& NavigationSystemClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.NavigationSystemClassName"); }
	//TSubclassOf<UNavigationSystemBase>& NavigationSystemClassField() { return *GetNativePointerField<TSubclassOf<UNavigationSystemBase>*>(this, "UEngine.NavigationSystemClass"); }
	FSoftClassPath& NavigationSystemConfigClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.NavigationSystemConfigClassName"); }
	TSubclassOf<UNavigationSystemConfig>& NavigationSystemConfigClassField() { return *GetNativePointerField<TSubclassOf<UNavigationSystemConfig>*>(this, "UEngine.NavigationSystemConfigClass"); }
	FSoftClassPath& AvoidanceManagerClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.AvoidanceManagerClassName"); }
	//TSubclassOf<UAvoidanceManager>& AvoidanceManagerClassField() { return *GetNativePointerField<TSubclassOf<UAvoidanceManager>*>(this, "UEngine.AvoidanceManagerClass"); }
	FSoftClassPath& AIControllerClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.AIControllerClassName"); }
	//TSubclassOf<UPhysicsCollisionHandler>& PhysicsCollisionHandlerClassField() { return *GetNativePointerField<TSubclassOf<UPhysicsCollisionHandler>*>(this, "UEngine.PhysicsCollisionHandlerClass"); }
	FSoftClassPath& PhysicsCollisionHandlerClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.PhysicsCollisionHandlerClassName"); }
	FSoftClassPath& GameUserSettingsClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.GameUserSettingsClassName"); }
	TSubclassOf<UGameUserSettings>& GameUserSettingsClassField() { return *GetNativePointerField<TSubclassOf<UGameUserSettings>*>(this, "UEngine.GameUserSettingsClass"); }
	TObjectPtr<UGameUserSettings>& GameUserSettingsField() { return *GetNativePointerField<TObjectPtr<UGameUserSettings>*>(this, "UEngine.GameUserSettings"); }
	TSubclassOf<ALevelScriptActor>& LevelScriptActorClassField() { return *GetNativePointerField<TSubclassOf<ALevelScriptActor>*>(this, "UEngine.LevelScriptActorClass"); }
	FSoftClassPath& LevelScriptActorClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.LevelScriptActorClassName"); }
	FSoftClassPath& DefaultBlueprintBaseClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.DefaultBlueprintBaseClassName"); }
	FSoftClassPath& GameSingletonClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.GameSingletonClassName"); }
	TObjectPtr<UObject>& GameSingletonField() { return *GetNativePointerField<TObjectPtr<UObject>*>(this, "UEngine.GameSingleton"); }
	FSoftClassPath& AssetManagerClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.AssetManagerClassName"); }
	//TObjectPtr<UAssetManager>& AssetManagerField() { return *GetNativePointerField<TObjectPtr<UAssetManager>*>(this, "UEngine.AssetManager"); }
	TObjectPtr<UTexture2D>& DefaultTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultTexture"); }
	FSoftObjectPath& DefaultTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultTextureName"); }
	TObjectPtr<UTexture>& DefaultDiffuseTextureField() { return *GetNativePointerField<TObjectPtr<UTexture>*>(this, "UEngine.DefaultDiffuseTexture"); }
	FSoftObjectPath& DefaultDiffuseTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultDiffuseTextureName"); }
	TObjectPtr<UTexture2D>& DefaultBSPVertexTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultBSPVertexTexture"); }
	FSoftObjectPath& DefaultBSPVertexTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultBSPVertexTextureName"); }
	TObjectPtr<UTexture2D>& HighFrequencyNoiseTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.HighFrequencyNoiseTexture"); }
	FSoftObjectPath& HighFrequencyNoiseTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.HighFrequencyNoiseTextureName"); }
	TObjectPtr<UTexture2D>& DefaultBokehTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultBokehTexture"); }
	FSoftObjectPath& DefaultBokehTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultBokehTextureName"); }
	TObjectPtr<UTexture2D>& DefaultBloomKernelTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultBloomKernelTexture"); }
	FSoftObjectPath& DefaultBloomKernelTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultBloomKernelTextureName"); }
	TObjectPtr<UTexture2D>& DefaultFilmGrainTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.DefaultFilmGrainTexture"); }
	FSoftObjectPath& DefaultFilmGrainTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultFilmGrainTextureName"); }
	TObjectPtr<UMaterial>& WireframeMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.WireframeMaterial"); }
	FString& WireframeMaterialNameField() { return *GetNativePointerField<FString*>(this, "UEngine.WireframeMaterialName"); }
	TObjectPtr<UMaterial>& DebugMeshMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.DebugMeshMaterial"); }
	FSoftObjectPath& DebugMeshMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DebugMeshMaterialName"); }
	TObjectPtr<UMaterial>& NaniteHiddenSectionMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.NaniteHiddenSectionMaterial"); }
	FString& NaniteHiddenSectionMaterialNameField() { return *GetNativePointerField<FString*>(this, "UEngine.NaniteHiddenSectionMaterialName"); }
	TObjectPtr<UMaterial>& EmissiveMeshMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.EmissiveMeshMaterial"); }
	FSoftObjectPath& EmissiveMeshMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.EmissiveMeshMaterialName"); }
	TObjectPtr<UMaterial>& LevelColorationLitMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.LevelColorationLitMaterial"); }
	FString& LevelColorationLitMaterialNameField() { return *GetNativePointerField<FString*>(this, "UEngine.LevelColorationLitMaterialName"); }
	TObjectPtr<UMaterial>& LevelColorationUnlitMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.LevelColorationUnlitMaterial"); }
	FString& LevelColorationUnlitMaterialNameField() { return *GetNativePointerField<FString*>(this, "UEngine.LevelColorationUnlitMaterialName"); }
	TObjectPtr<UMaterial>& LightingTexelDensityMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.LightingTexelDensityMaterial"); }
	FString& LightingTexelDensityNameField() { return *GetNativePointerField<FString*>(this, "UEngine.LightingTexelDensityName"); }
	TObjectPtr<UMaterial>& ShadedLevelColorationLitMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.ShadedLevelColorationLitMaterial"); }
	FString& ShadedLevelColorationLitMaterialNameField() { return *GetNativePointerField<FString*>(this, "UEngine.ShadedLevelColorationLitMaterialName"); }
	TObjectPtr<UMaterial>& ShadedLevelColorationUnlitMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.ShadedLevelColorationUnlitMaterial"); }
	FString& ShadedLevelColorationUnlitMaterialNameField() { return *GetNativePointerField<FString*>(this, "UEngine.ShadedLevelColorationUnlitMaterialName"); }
	TObjectPtr<UMaterial>& RemoveSurfaceMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.RemoveSurfaceMaterial"); }
	FSoftObjectPath& RemoveSurfaceMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.RemoveSurfaceMaterialName"); }
	TObjectPtr<UMaterial>& VertexColorMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorMaterial"); }
	FString& VertexColorMaterialNameField() { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorMaterialName"); }
	TObjectPtr<UMaterial>& VertexColorViewModeMaterial_ColorOnlyField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_ColorOnly"); }
	FString& VertexColorViewModeMaterialName_ColorOnlyField() { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_ColorOnly"); }
	TObjectPtr<UMaterial>& VertexColorViewModeMaterial_AlphaAsColorField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_AlphaAsColor"); }
	FString& VertexColorViewModeMaterialName_AlphaAsColorField() { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_AlphaAsColor"); }
	TObjectPtr<UMaterial>& VertexColorViewModeMaterial_RedOnlyField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_RedOnly"); }
	FString& VertexColorViewModeMaterialName_RedOnlyField() { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_RedOnly"); }
	TObjectPtr<UMaterial>& VertexColorViewModeMaterial_GreenOnlyField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_GreenOnly"); }
	FString& VertexColorViewModeMaterialName_GreenOnlyField() { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_GreenOnly"); }
	TObjectPtr<UMaterial>& VertexColorViewModeMaterial_BlueOnlyField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.VertexColorViewModeMaterial_BlueOnly"); }
	FString& VertexColorViewModeMaterialName_BlueOnlyField() { return *GetNativePointerField<FString*>(this, "UEngine.VertexColorViewModeMaterialName_BlueOnly"); }
	FSoftObjectPath& DebugEditorMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DebugEditorMaterialName"); }
	TObjectPtr<UMaterial>& ConstraintLimitMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.ConstraintLimitMaterial"); }
	TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialXField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialX"); }
	TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialXAxisField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialXAxis"); }
	TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialYField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialY"); }
	TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialYAxisField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialYAxis"); }
	TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialZField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialZ"); }
	TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialZAxisField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialZAxis"); }
	TObjectPtr<UMaterialInstanceDynamic>& ConstraintLimitMaterialPrismaticField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ConstraintLimitMaterialPrismatic"); }
	TObjectPtr<UMaterial>& InvalidLightmapSettingsMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.InvalidLightmapSettingsMaterial"); }
	FSoftObjectPath& InvalidLightmapSettingsMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.InvalidLightmapSettingsMaterialName"); }
	TObjectPtr<UMaterial>& PreviewShadowsIndicatorMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.PreviewShadowsIndicatorMaterial"); }
	FSoftObjectPath& PreviewShadowsIndicatorMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.PreviewShadowsIndicatorMaterialName"); }
	TObjectPtr<UMaterial>& ArrowMaterialField() { return *GetNativePointerField<TObjectPtr<UMaterial>*>(this, "UEngine.ArrowMaterial"); }
	TObjectPtr<UMaterialInstanceDynamic>& ArrowMaterialYellowField() { return *GetNativePointerField<TObjectPtr<UMaterialInstanceDynamic>*>(this, "UEngine.ArrowMaterialYellow"); }
	FSoftObjectPath& ArrowMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.ArrowMaterialName"); }
	FLinearColor& LightingOnlyBrightnessField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightingOnlyBrightness"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& ShaderComplexityColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.ShaderComplexityColors"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& QuadComplexityColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.QuadComplexityColors"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& LightComplexityColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.LightComplexityColors"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& StationaryLightOverlapColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.StationaryLightOverlapColors"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& LODColorationColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.LODColorationColors"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& HLODColorationColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.HLODColorationColors"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& StreamingAccuracyColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.StreamingAccuracyColors"); }
	FLinearColor& GPUSkinCacheVisualizationExcludedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.GPUSkinCacheVisualizationExcludedColor"); }
	FLinearColor& GPUSkinCacheVisualizationIncludedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.GPUSkinCacheVisualizationIncludedColor"); }
	FLinearColor& GPUSkinCacheVisualizationRecomputeTangentsColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.GPUSkinCacheVisualizationRecomputeTangentsColor"); }
	float& GPUSkinCacheVisualizationLowMemoryThresholdInMBField() { return *GetNativePointerField<float*>(this, "UEngine.GPUSkinCacheVisualizationLowMemoryThresholdInMB"); }
	float& GPUSkinCacheVisualizationHighMemoryThresholdInMBField() { return *GetNativePointerField<float*>(this, "UEngine.GPUSkinCacheVisualizationHighMemoryThresholdInMB"); }
	FLinearColor& GPUSkinCacheVisualizationLowMemoryColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.GPUSkinCacheVisualizationLowMemoryColor"); }
	FLinearColor& GPUSkinCacheVisualizationMidMemoryColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.GPUSkinCacheVisualizationMidMemoryColor"); }
	FLinearColor& GPUSkinCacheVisualizationHighMemoryColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.GPUSkinCacheVisualizationHighMemoryColor"); }
	TArray<FLinearColor, TSizedDefaultAllocator<32> >& GPUSkinCacheVisualizationRayTracingLODOffsetColorsField() { return *GetNativePointerField<TArray<FLinearColor, TSizedDefaultAllocator<32> >*>(this, "UEngine.GPUSkinCacheVisualizationRayTracingLODOffsetColors"); }
	float& MaxPixelShaderAdditiveComplexityCountField() { return *GetNativePointerField<float*>(this, "UEngine.MaxPixelShaderAdditiveComplexityCount"); }
	float& MaxES3PixelShaderAdditiveComplexityCountField() { return *GetNativePointerField<float*>(this, "UEngine.MaxES3PixelShaderAdditiveComplexityCount"); }
	float& MinLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.MinLightMapDensity"); }
	float& IdealLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.IdealLightMapDensity"); }
	float& MaxLightMapDensityField() { return *GetNativePointerField<float*>(this, "UEngine.MaxLightMapDensity"); }
	float& RenderLightMapDensityGrayscaleScaleField() { return *GetNativePointerField<float*>(this, "UEngine.RenderLightMapDensityGrayscaleScale"); }
	float& RenderLightMapDensityColorScaleField() { return *GetNativePointerField<float*>(this, "UEngine.RenderLightMapDensityColorScale"); }
	FLinearColor& LightMapDensityVertexMappedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightMapDensityVertexMappedColor"); }
	FLinearColor& LightMapDensitySelectedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.LightMapDensitySelectedColor"); }
	TArray<FStatColorMapping, TSizedDefaultAllocator<32> >& StatColorMappingsField() { return *GetNativePointerField<TArray<FStatColorMapping, TSizedDefaultAllocator<32> >*>(this, "UEngine.StatColorMappings"); }
	TObjectPtr<UPhysicalMaterial>& DefaultPhysMaterialField() { return *GetNativePointerField<TObjectPtr<UPhysicalMaterial>*>(this, "UEngine.DefaultPhysMaterial"); }
	FSoftObjectPath& DefaultPhysMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultPhysMaterialName"); }
	TObjectPtr<UPhysicalMaterial>& DefaultDestructiblePhysMaterialField() { return *GetNativePointerField<TObjectPtr<UPhysicalMaterial>*>(this, "UEngine.DefaultDestructiblePhysMaterial"); }
	FSoftObjectPath& DefaultDestructiblePhysMaterialNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.DefaultDestructiblePhysMaterialName"); }
	TArray<FGameNameRedirect, TSizedDefaultAllocator<32> >& ActiveGameNameRedirectsField() { return *GetNativePointerField<TArray<FGameNameRedirect, TSizedDefaultAllocator<32> >*>(this, "UEngine.ActiveGameNameRedirects"); }
	TArray<FClassRedirect, TSizedDefaultAllocator<32> >& ActiveClassRedirectsField() { return *GetNativePointerField<TArray<FClassRedirect, TSizedDefaultAllocator<32> >*>(this, "UEngine.ActiveClassRedirects"); }
	TArray<FPluginRedirect, TSizedDefaultAllocator<32> >& ActivePluginRedirectsField() { return *GetNativePointerField<TArray<FPluginRedirect, TSizedDefaultAllocator<32> >*>(this, "UEngine.ActivePluginRedirects"); }
	TArray<FStructRedirect, TSizedDefaultAllocator<32> >& ActiveStructRedirectsField() { return *GetNativePointerField<TArray<FStructRedirect, TSizedDefaultAllocator<32> >*>(this, "UEngine.ActiveStructRedirects"); }
	TObjectPtr<UTexture2D>& PreIntegratedSkinBRDFTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.PreIntegratedSkinBRDFTexture"); }
	FSoftObjectPath& PreIntegratedSkinBRDFTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.PreIntegratedSkinBRDFTextureName"); }
	TObjectPtr<UTexture2D>& BlueNoiseScalarTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.BlueNoiseScalarTexture"); }
	TObjectPtr<UTexture2D>& BlueNoiseVec2TextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.BlueNoiseVec2Texture"); }
	FSoftObjectPath& BlueNoiseScalarTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.BlueNoiseScalarTextureName"); }
	FSoftObjectPath& BlueNoiseVec2TextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.BlueNoiseVec2TextureName"); }
	TObjectPtr<UTexture2D>& MiniFontTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.MiniFontTexture"); }
	FSoftObjectPath& MiniFontTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.MiniFontTextureName"); }
	TObjectPtr<UTexture>& WeightMapPlaceholderTextureField() { return *GetNativePointerField<TObjectPtr<UTexture>*>(this, "UEngine.WeightMapPlaceholderTexture"); }
	FSoftObjectPath& WeightMapPlaceholderTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.WeightMapPlaceholderTextureName"); }
	TObjectPtr<UTexture2D>& LightMapDensityTextureField() { return *GetNativePointerField<TObjectPtr<UTexture2D>*>(this, "UEngine.LightMapDensityTexture"); }
	FSoftObjectPath& LightMapDensityTextureNameField() { return *GetNativePointerField<FSoftObjectPath*>(this, "UEngine.LightMapDensityTextureName"); }
	IEngineLoop*& EngineLoopField() { return *GetNativePointerField<IEngineLoop**>(this, "UEngine.EngineLoop"); }
	//TObjectPtr<UGameViewportClient>& GameViewportField() { return *GetNativePointerField<TObjectPtr<UGameViewportClient>*>(this, "UEngine.GameViewport"); }
	TArray<FString, TSizedDefaultAllocator<32> >& DeferredCommandsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UEngine.DeferredCommands"); }
	float& NearClipPlaneField() { return *GetNativePointerField<float*>(this, "UEngine.NearClipPlane"); }
	int& MaximumLoopIterationCountField() { return *GetNativePointerField<int*>(this, "UEngine.MaximumLoopIterationCount"); }
	float& FixedFrameRateField() { return *GetNativePointerField<float*>(this, "UEngine.FixedFrameRate"); }
	//FFloatRange& SmoothedFrameRateRangeField() { return *GetNativePointerField<FFloatRange*>(this, "UEngine.SmoothedFrameRateRange"); }
	//TObjectPtr<UEngineCustomTimeStep>& CustomTimeStepField() { return *GetNativePointerField<TObjectPtr<UEngineCustomTimeStep>*>(this, "UEngine.CustomTimeStep"); }
	//TMulticastDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>& CustomTimeStepChangedEventField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "UEngine.CustomTimeStepChangedEvent"); }
	FSoftClassPath& CustomTimeStepClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.CustomTimeStepClassName"); }
	//TObjectPtr<UTimecodeProvider>& TimecodeProviderField() { return *GetNativePointerField<TObjectPtr<UTimecodeProvider>*>(this, "UEngine.TimecodeProvider"); }
	//TMulticastDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>& TimecodeProviderChangedEventField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>*>(this, "UEngine.TimecodeProviderChangedEvent"); }
	FSoftClassPath& TimecodeProviderClassNameField() { return *GetNativePointerField<FSoftClassPath*>(this, "UEngine.TimecodeProviderClassName"); }
	//FFrameRate& GenerateDefaultTimecodeFrameRateField() { return *GetNativePointerField<FFrameRate*>(this, "UEngine.GenerateDefaultTimecodeFrameRate"); }
	float& GenerateDefaultTimecodeFrameDelayField() { return *GetNativePointerField<float*>(this, "UEngine.GenerateDefaultTimecodeFrameDelay"); }
	int& NumPawnsAllowedToBeSpawnedInAFrameField() { return *GetNativePointerField<int*>(this, "UEngine.NumPawnsAllowedToBeSpawnedInAFrame"); }
	FColor& C_WorldBoxField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_WorldBox"); }
	FColor& C_BrushWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BrushWire"); }
	FColor& C_AddWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_AddWire"); }
	FColor& C_SubtractWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_SubtractWire"); }
	FColor& C_SemiSolidWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_SemiSolidWire"); }
	FColor& C_NonSolidWireField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_NonSolidWire"); }
	FColor& C_WireBackgroundField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_WireBackground"); }
	FColor& C_ScaleBoxHiField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_ScaleBoxHi"); }
	FColor& C_VolumeCollisionField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_VolumeCollision"); }
	FColor& C_BSPCollisionField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BSPCollision"); }
	FColor& C_OrthoBackgroundField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_OrthoBackground"); }
	FColor& C_VolumeField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_Volume"); }
	FColor& C_BrushShapeField() { return *GetNativePointerField<FColor*>(this, "UEngine.C_BrushShape"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float& StreamingDistanceFactorField();
	//FDirectoryPath& GameScreenshotSaveDirectoryField() { return *GetNativePointerField<FDirectoryPath*>(this, "UEngine.GameScreenshotSaveDirectory"); }
	bool& UseSkeletalMeshMinLODPerQualityLevelsField() { return *GetNativePointerField<bool*>(this, "UEngine.UseSkeletalMeshMinLODPerQualityLevels"); }
	FString& TransitionDescriptionField() { return *GetNativePointerField<FString*>(this, "UEngine.TransitionDescription"); }
	FString& TransitionGameModeField() { return *GetNativePointerField<FString*>(this, "UEngine.TransitionGameMode"); }
	float& CameraRotationThresholdField() { return *GetNativePointerField<float*>(this, "UEngine.CameraRotationThreshold"); }
	float& CameraTranslationThresholdField() { return *GetNativePointerField<float*>(this, "UEngine.CameraTranslationThreshold"); }
	float& PrimitiveProbablyVisibleTimeField() { return *GetNativePointerField<float*>(this, "UEngine.PrimitiveProbablyVisibleTime"); }
	float& MaxOcclusionPixelsFractionField() { return *GetNativePointerField<float*>(this, "UEngine.MaxOcclusionPixelsFraction"); }
	int& MaxParticleResizeField() { return *GetNativePointerField<int*>(this, "UEngine.MaxParticleResize"); }
	int& MaxParticleResizeWarnField() { return *GetNativePointerField<int*>(this, "UEngine.MaxParticleResizeWarn"); }
	TArray<FDropNoteInfo, TSizedDefaultAllocator<32> >& PendingDroppedNotesField() { return *GetNativePointerField<TArray<FDropNoteInfo, TSizedDefaultAllocator<32> >*>(this, "UEngine.PendingDroppedNotes"); }
	float& NetClientTicksPerSecondField() { return *GetNativePointerField<float*>(this, "UEngine.NetClientTicksPerSecond"); }
	float& DisplayGammaField() { return *GetNativePointerField<float*>(this, "UEngine.DisplayGamma"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// float& MinDesiredFrameRateField();
	FLinearColor& DefaultSelectedMaterialColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.DefaultSelectedMaterialColor"); }
	FLinearColor& SelectedMaterialColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectedMaterialColor"); }
	FLinearColor& SelectionOutlineColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectionOutlineColor"); }
	FLinearColor& SubduedSelectionOutlineColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SubduedSelectionOutlineColor"); }
	FLinearColor& SelectedMaterialColorOverrideField() { return *GetNativePointerField<FLinearColor*>(this, "UEngine.SelectedMaterialColorOverride"); }
	unsigned int& bEnableVisualLogRecordingOnStartField() { return *GetNativePointerField<unsigned int*>(this, "UEngine.bEnableVisualLogRecordingOnStart"); }
	int& ScreenSaverInhibitorSemaphoreField() { return *GetNativePointerField<int*>(this, "UEngine.ScreenSaverInhibitorSemaphore"); }
	FString& ParticleEventManagerClassPathField() { return *GetNativePointerField<FString*>(this, "UEngine.ParticleEventManagerClassPath"); }
	float& SelectionHighlightIntensityField() { return *GetNativePointerField<float*>(this, "UEngine.SelectionHighlightIntensity"); }
	float& BSPSelectionHighlightIntensityField() { return *GetNativePointerField<float*>(this, "UEngine.BSPSelectionHighlightIntensity"); }
	float& SelectionHighlightIntensityBillboardsField() { return *GetNativePointerField<float*>(this, "UEngine.SelectionHighlightIntensityBillboards"); }
	//UEngine::FOnTravelFailure& TravelFailureEventField() { return *GetNativePointerField<UEngine::FOnTravelFailure*>(this, "UEngine.TravelFailureEvent"); }
	//UEngine::FOnNetworkFailure& NetworkFailureEventField() { return *GetNativePointerField<UEngine::FOnNetworkFailure*>(this, "UEngine.NetworkFailureEvent"); }
	//UEngine::FOnNetworkLagStateChanged& NetworkLagStateChangedEventField() { return *GetNativePointerField<UEngine::FOnNetworkLagStateChanged*>(this, "UEngine.NetworkLagStateChangedEvent"); }
	//UEngine::FOnNetworkDDoSEscalation& NetworkDDoSEscalationEventField() { return *GetNativePointerField<UEngine::FOnNetworkDDoSEscalation*>(this, "UEngine.NetworkDDoSEscalationEvent"); }
	unsigned __int64& LastGCFrameField() { return *GetNativePointerField<unsigned __int64*>(this, "UEngine.LastGCFrame"); }
	float& TimeSinceLastPendingKillPurgeField() { return *GetNativePointerField<float*>(this, "UEngine.TimeSinceLastPendingKillPurge"); }
	bool& bShouldDelayGarbageCollectField() { return *GetNativePointerField<bool*>(this, "UEngine.bShouldDelayGarbageCollect"); }
	//FAudioDeviceManager*& AudioDeviceManagerField() { return *GetNativePointerField<FAudioDeviceManager**>(this, "UEngine.AudioDeviceManager"); }
	//FAudioDeviceHandle& MainAudioDeviceHandleField() { return *GetNativePointerField<FAudioDeviceHandle*>(this, "UEngine.MainAudioDeviceHandle"); }
	TArray<FScreenMessageString, TSizedDefaultAllocator<32> >& PriorityScreenMessagesField() { return *GetNativePointerField<TArray<FScreenMessageString, TSizedDefaultAllocator<32> >*>(this, "UEngine.PriorityScreenMessages"); }
	TMap<int, FScreenMessageString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FScreenMessageString, 0> >& ScreenMessagesField() { return *GetNativePointerField<TMap<int, FScreenMessageString, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<int, FScreenMessageString, 0> >*>(this, "UEngine.ScreenMessages"); }
	TSharedPtr<IStereoRendering>& StereoRenderingDeviceField() { return *GetNativePointerField<TSharedPtr<IStereoRendering>*>(this, "UEngine.StereoRenderingDevice"); }
	//TSharedPtr<IXRTrackingSystem, 1>& XRSystemField() { return *GetNativePointerField<TSharedPtr<IXRTrackingSystem, 1>*>(this, "UEngine.XRSystem"); }
	//TSharedPtr<FSceneViewExtensions, 1>& ViewExtensionsField() { return *GetNativePointerField<TSharedPtr<FSceneViewExtensions, 1>*>(this, "UEngine.ViewExtensions"); }
	//TSharedPtr<IEyeTracker, 1>& EyeTrackingDeviceField() { return *GetNativePointerField<TSharedPtr<IEyeTracker, 1>*>(this, "UEngine.EyeTrackingDevice"); }
	//TMulticastDelegate<void __cdecl(enum EFrameHitchType, float), FDefaultDelegateUserPolicy>& OnHitchDetectedDelegateField() { return *GetNativePointerField<TMulticastDelegate<void __cdecl(enum EFrameHitchType, float), FDefaultDelegateUserPolicy>*>(this, "UEngine.OnHitchDetectedDelegate"); }
	//TSharedPtr<IMessageRpcClient, 1>& PortalRpcClientField() { return *GetNativePointerField<TSharedPtr<IMessageRpcClient, 1>*>(this, "UEngine.PortalRpcClient"); }
	//TSharedPtr<IPortalRpcLocator, 1>& PortalRpcLocatorField() { return *GetNativePointerField<TSharedPtr<IPortalRpcLocator, 1>*>(this, "UEngine.PortalRpcLocator"); }
	//TSharedPtr<FTypeContainer, 1>& ServiceDependenciesField() { return *GetNativePointerField<TSharedPtr<FTypeContainer, 1>*>(this, "UEngine.ServiceDependencies"); }
	//TSharedPtr<IPortalServiceLocator, 1>& ServiceLocatorField() { return *GetNativePointerField<TSharedPtr<IPortalServiceLocator, 1>*>(this, "UEngine.ServiceLocator"); }
	//TSharedPtr<FPerformanceTrackingChart, 1>& ActivePerformanceChartField() { return *GetNativePointerField<TSharedPtr<FPerformanceTrackingChart, 1>*>(this, "UEngine.ActivePerformanceChart"); }
	//TArray<TSharedPtr<IPerformanceDataConsumer, 1>, TSizedDefaultAllocator<32> >& ActivePerformanceDataConsumersField() { return *GetNativePointerField<TArray<TSharedPtr<IPerformanceDataConsumer, 1>, TSizedDefaultAllocator<32> >*>(this, "UEngine.ActivePerformanceDataConsumers"); }
	float& RunningAverageDeltaTimeField() { return *GetNativePointerField<float*>(this, "UEngine.RunningAverageDeltaTime"); }
	//UEngine::FWorldAddedEvent& WorldAddedEventField() { return *GetNativePointerField<UEngine::FWorldAddedEvent*>(this, "UEngine.WorldAddedEvent"); }
	//UEngine::FWorldDestroyedEvent& WorldDestroyedEventField() { return *GetNativePointerField<UEngine::FWorldDestroyedEvent*>(this, "UEngine.WorldDestroyedEvent"); }
	FRunnableThread*& ScreenSaverInhibitorField() { return *GetNativePointerField<FRunnableThread**>(this, "UEngine.ScreenSaverInhibitor"); }
	FScreenSaverInhibitor*& ScreenSaverInhibitorRunnableField() { return *GetNativePointerField<FScreenSaverInhibitor**>(this, "UEngine.ScreenSaverInhibitorRunnable"); }
	unsigned int& GlobalNetTravelCountField() { return *GetNativePointerField<unsigned int*>(this, "UEngine.GlobalNetTravelCount"); }
	TArray<FNetDriverDefinition, TSizedDefaultAllocator<32> >& NetDriverDefinitionsField() { return *GetNativePointerField<TArray<FNetDriverDefinition, TSizedDefaultAllocator<32> >*>(this, "UEngine.NetDriverDefinitions"); }
	//TArray<FIrisNetDriverConfig, TSizedDefaultAllocator<32> >& IrisNetDriverConfigsField() { return *GetNativePointerField<TArray<FIrisNetDriverConfig, TSizedDefaultAllocator<32> >*>(this, "UEngine.IrisNetDriverConfigs"); }
	TArray<FString, TSizedDefaultAllocator<32> >& ServerActorsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UEngine.ServerActors"); }
	TArray<FString, TSizedDefaultAllocator<32> >& RuntimeServerActorsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UEngine.RuntimeServerActors"); }
	float& NetErrorLogIntervalField() { return *GetNativePointerField<float*>(this, "UEngine.NetErrorLogInterval"); }
	//TIndirectArray<FWorldContext, TSizedDefaultAllocator<32> >& WorldListField() { return *GetNativePointerField<TIndirectArray<FWorldContext, TSizedDefaultAllocator<32> >*>(this, "UEngine.WorldList"); }
	int& NextWorldContextHandleField() { return *GetNativePointerField<int*>(this, "UEngine.NextWorldContextHandle"); }
	//FObjectSubsystemCollection<UEngineSubsystem>& EngineSubsystemCollectionField() { return *GetNativePointerField<FObjectSubsystemCollection<UEngineSubsystem>*>(this, "UEngine.EngineSubsystemCollection"); }
	//TArray<UEngine::FEngineStatFuncs, TSizedDefaultAllocator<32> >& EngineStatsField() { return *GetNativePointerField<TArray<UEngine::FEngineStatFuncs, TSizedDefaultAllocator<32> >*>(this, "UEngine.EngineStats"); }
	//TPimplPtr<UEngine::FErrorsAndWarningsCollector, 0>& ErrorsAndWarningsCollectorField() { return *GetNativePointerField<TPimplPtr<UEngine::FErrorsAndWarningsCollector, 0>*>(this, "UEngine.ErrorsAndWarningsCollector"); }
	FDelegateHandle& HandleScreenshotCapturedDelegateHandleField() { return *GetNativePointerField<FDelegateHandle*>(this, "UEngine.HandleScreenshotCapturedDelegateHandle"); }
	FString& LastModDownloadTextField() { return *GetNativePointerField<FString*>(this, "UEngine.LastModDownloadText"); }
	float& NetworkStressTestClientMode_MinFPSField() { return *GetNativePointerField<float*>(this, "UEngine.NetworkStressTestClientMode_MinFPS"); }
	float& NetworkStressTestClientMode_MaxFPSField() { return *GetNativePointerField<float*>(this, "UEngine.NetworkStressTestClientMode_MaxFPS"); }

	// Bitfields

	BitFieldValue<bool, unsigned __int32> bRenderLightMapDensityGrayscale() { return { this, "UEngine.bRenderLightMapDensityGrayscale" }; }
	BitFieldValue<bool, unsigned __int32> bSubtitlesEnabled() { return { this, "UEngine.bSubtitlesEnabled" }; }
	BitFieldValue<bool, unsigned __int32> bSubtitlesForcedOff() { return { this, "UEngine.bSubtitlesForcedOff" }; }
	BitFieldValue<bool, unsigned __int32> bCanBlueprintsTickByDefault() { return { this, "UEngine.bCanBlueprintsTickByDefault" }; }
	BitFieldValue<bool, unsigned __int32> bOptimizeAnimBlueprintMemberVariableAccess() { return { this, "UEngine.bOptimizeAnimBlueprintMemberVariableAccess" }; }
	BitFieldValue<bool, unsigned __int32> bAllowMultiThreadedAnimationUpdate() { return { this, "UEngine.bAllowMultiThreadedAnimationUpdate" }; }
	BitFieldValue<bool, unsigned __int32> bEnableEditorPSysRealtimeLOD() { return { this, "UEngine.bEnableEditorPSysRealtimeLOD" }; }
	BitFieldValue<bool, unsigned __int32> bForceDisableFrameRateSmoothing() { return { this, "UEngine.bForceDisableFrameRateSmoothing" }; }
	BitFieldValue<bool, unsigned __int32> bSmoothFrameRate() { return { this, "UEngine.bSmoothFrameRate" }; }
	BitFieldValue<bool, unsigned __int32> bUseFixedFrameRate() { return { this, "UEngine.bUseFixedFrameRate" }; }
	BitFieldValue<bool, unsigned __int32> bCheckForMultiplePawnsSpawnedInAFrame() { return { this, "UEngine.bCheckForMultiplePawnsSpawnedInAFrame" }; }
	BitFieldValue<bool, unsigned __int32> bShouldGenerateLowQualityLightmaps_DEPRECATED() { return { this, "UEngine.bShouldGenerateLowQualityLightmaps_DEPRECATED" }; }
	BitFieldValue<bool, unsigned __int32> bAllowMatureLanguage() { return { this, "UEngine.bAllowMatureLanguage" }; }
	BitFieldValue<bool, unsigned __int32> bPauseOnLossOfFocus() { return { this, "UEngine.bPauseOnLossOfFocus" }; }
	BitFieldValue<bool, unsigned __int32> bEnableOnScreenDebugMessages() { return { this, "UEngine.bEnableOnScreenDebugMessages" }; }
	BitFieldValue<bool, unsigned __int32> bEnableOnScreenDebugMessagesDisplay() { return { this, "UEngine.bEnableOnScreenDebugMessagesDisplay" }; }
	BitFieldValue<bool, unsigned __int32> bSuppressMapWarnings() { return { this, "UEngine.bSuppressMapWarnings" }; }
	BitFieldValue<bool, unsigned __int32> bDisableAILogging() { return { this, "UEngine.bDisableAILogging" }; }
	BitFieldValue<bool, unsigned __int32> bLockReadOnlyLevels() { return { this, "UEngine.bLockReadOnlyLevels" }; }
	BitFieldValue<bool, unsigned __int32> bStartedLoadMapMovie() { return { this, "UEngine.bStartedLoadMapMovie" }; }

	// Functions

	void ForceGarbageCollection(bool bForcePurge) { NativeCall<void, bool>(this, "UEngine.ForceGarbageCollection(bool)", bForcePurge); }
	static UClass* StaticClass() { return AsaApi::ResolveClass("UEngine"); }
	//UThreadNodeSubsystem* GetEngineSubsystem<class UThreadNodeSubsystem>() { return NativeCall<UThreadNodeSubsystem*>(this, "UEngine.GetEngineSubsystem<class UThreadNodeSubsystem>()"); }
	FString* GetLastModDownloadText(FString* result) { return NativeCall<FString*, FString*>(this, "UEngine.GetLastModDownloadText()", result); }
	bool IsInitialized() { return NativeCall<bool>(this, "UEngine.IsInitialized()"); }
	UWorld* GetWorldFromContextObject(const UObject* Object, bool bChecked) { return NativeCall<UWorld*, const UObject*, bool>(this, "UEngine.GetWorldFromContextObject(UObject*,EGetWorldErrorMode)", Object, bChecked); }
	void BroadcastTravelFailure(UWorld* InWorld, ETravelFailure::Type FailureType, const FString* ErrorString) { NativeCall<void, UWorld*, ETravelFailure::Type, const FString*>(this, "UEngine.BroadcastTravelFailure(UWorld*,ETravelFailure::Type,FString&)", InWorld, FailureType, ErrorString); }
	//USteelShieldSubsystem* GetEngineSubsystem<class USteelShieldSubsystem>() { return NativeCall<USteelShieldSubsystem*>(this, "UEngine.GetEngineSubsystem<class USteelShieldSubsystem>()"); }
	void Serialize(FStructuredArchiveRecord Record) { NativeCall<void, FStructuredArchiveRecord>(this, "UEngine.Serialize(FStructuredArchiveRecord)", Record); }
	void LoadMapRedrawViewports() { NativeCall<void>(this, "UEngine.LoadMapRedrawViewports()"); }
	void Tick(float DeltaSeconds, bool bIdleMode) { NativeCall<void, float, bool>(this, "UEngine.Tick(float,bool)", DeltaSeconds, bIdleMode); }
	static void AddPerformanceDataConsumer() { NativeCall<void>(nullptr, "UEngine.AddPerformanceDataConsumer(TSharedPtr<IPerformanceDataConsumer,1>)"); }
	static void RemovePerformanceDataConsumer() { NativeCall<void>(nullptr, "UEngine.RemovePerformanceDataConsumer(TSharedPtr<IPerformanceDataConsumer,1>)"); }
	void StartFPSChart(const FString* Label, bool bRecordPerFrameTimes) { NativeCall<void, const FString*, bool>(this, "UEngine.StartFPSChart(FString&,bool)", Label, bRecordPerFrameTimes); }
	void StopFPSChart(const FString* InMapName) { NativeCall<void, const FString*>(this, "UEngine.StopFPSChart(FString&)", InMapName); }
	void BroadcastNetworkLagStateChanged(UWorld* World, UNetDriver* NetDriver, ENetworkLagState::Type LagType) { NativeCall<void, UWorld*, UNetDriver*, ENetworkLagState::Type>(this, "UEngine.BroadcastNetworkLagStateChanged(UWorld*,UNetDriver*,ENetworkLagState::Type)", World, NetDriver, LagType); }
	static void PreGarbageCollect() { NativeCall<void>(nullptr, "UEngine.PreGarbageCollect()"); }
	float GetTimeBetweenGarbageCollectionPasses() { return NativeCall<float>(this, "UEngine.GetTimeBetweenGarbageCollectionPasses()"); }
	float GetTimeBetweenGarbageCollectionPasses(bool bHasPlayersConnected) { return NativeCall<float, bool>(this, "UEngine.GetTimeBetweenGarbageCollectionPasses(bool)", bHasPlayersConnected); }
	void ConditionalCollectGarbage() { NativeCall<void>(this, "UEngine.ConditionalCollectGarbage()"); }
	void PerformGarbageCollectionAndCleanupActors() { NativeCall<void>(this, "UEngine.PerformGarbageCollectionAndCleanupActors(bool)"); }
	void Init(IEngineLoop* InEngineLoop) { NativeCall<void, IEngineLoop*>(this, "UEngine.Init(IEngineLoop*)", InEngineLoop); }
	void OnExternalUIChange(bool bInIsOpening) { NativeCall<void, bool>(this, "UEngine.OnExternalUIChange(bool)", bInIsOpening); }
	void ReleaseAudioDeviceManager() { NativeCall<void>(this, "UEngine.ReleaseAudioDeviceManager()"); }
	void PreExit() { NativeCall<void>(this, "UEngine.PreExit()"); }
	// Unavailable in UE 5.8.3: no matching current declaration with a supported runtime key
	// void ShutdownHMD();
	void TickDeferredCommands() { NativeCall<void>(this, "UEngine.TickDeferredCommands()"); }
	long double CorrectNegativeTimeDelta(long double DeltaRealTime) { return NativeCall<long double, long double>(this, "UEngine.CorrectNegativeTimeDelta(double)", DeltaRealTime); }
	void UpdateTimeAndHandleMaxTickRate() { NativeCall<void>(this, "UEngine.UpdateTimeAndHandleMaxTickRate()"); }
	bool SetCustomTimeStep(struct UEngineCustomTimeStep* InCustomTimeStep) { return NativeCall<bool, UEngineCustomTimeStep*>(this, "UEngine.SetCustomTimeStep(UEngineCustomTimeStep*)", InCustomTimeStep); }
	bool SetTimecodeProvider(struct UTimecodeProvider* InTimecodeProvider) { return NativeCall<bool, UTimecodeProvider*>(this, "UEngine.SetTimecodeProvider(UTimecodeProvider*)", InTimecodeProvider); }
	void UpdateTimecode() { NativeCall<void>(this, "UEngine.UpdateTimecode()"); }
	void ParseCommandline() { NativeCall<void>(this, "UEngine.ParseCommandline()"); }
	void InitializeObjectReferences() { NativeCall<void>(this, "UEngine.InitializeObjectReferences()"); }
	void InitializePortalServices() { NativeCall<void>(this, "UEngine.InitializePortalServices()"); }
	void FinishDestroy() { NativeCall<void>(this, "UEngine.FinishDestroy()"); }
	void Serialize(FArchive* Ar) { NativeCall<void, FArchive*>(this, "UEngine.Serialize(FStructuredArchiveRecord)", Ar); }
	static void AddReferencedObjects(UObject* InThis, FReferenceCollector* Collector) { NativeCall<void, UObject*, FReferenceCollector*>(nullptr, "UEngine.AddReferencedObjects(UObject*,FReferenceCollector&)", InThis, Collector); }
	struct FAudioDeviceHandle* GetMainAudioDevice(FAudioDeviceHandle* result) { return NativeCall<FAudioDeviceHandle*, FAudioDeviceHandle*>(this, "UEngine.GetMainAudioDevice()", result); }
	void InitializeAudioDeviceManager() { NativeCall<void>(this, "UEngine.InitializeAudioDeviceManager()"); }
	bool UseSound() { return NativeCall<bool>(this, "UEngine.UseSound()"); }
	bool InitializeHMDDevice() { return NativeCall<bool>(this, "UEngine.InitializeHMDDevice()"); }
	bool InitializeEyeTrackingDevice() { return NativeCall<bool>(this, "UEngine.InitializeEyeTrackingDevice()"); }
	void RecordHMDAnalytics() { NativeCall<void>(this, "UEngine.RecordHMDAnalytics()"); }
	// 	bool IsSplitScreen(UWorld* InWorld) { return NativeCall<bool, UWorld*>(this, "UEngine.IsSplitScreen(UWorld*)", InWorld); }
	// FUNCTION MISSING: UEngine.IsSplitScreen(UWorld*)
	bool HasMultipleLocalPlayers(UWorld* InWorld) { return NativeCall<bool, UWorld*>(this, "UEngine.HasMultipleLocalPlayers(UWorld*)", InWorld); }
	ULocalPlayer* GetLocalPlayerFromControllerId(const struct UGameViewportClient* InViewport, const int ControllerId) { return NativeCall<ULocalPlayer*, const UGameViewportClient*, const int>(this, "UEngine.GetLocalPlayerFromControllerId(UGameViewportClient*,int)", InViewport, ControllerId); }
	ULocalPlayer* GetLocalPlayerFromControllerId(UWorld* InWorld, const int ControllerId) { return NativeCall<ULocalPlayer*, UWorld*, const int>(this, "UEngine.GetLocalPlayerFromControllerId(UWorld*,int)", InWorld, ControllerId); }
	ULocalPlayer* GetLocalPlayerFromInputDevice(const UGameViewportClient* InViewport, const FInputDeviceId InputDevice) { return NativeCall<ULocalPlayer*, const UGameViewportClient*, const FInputDeviceId>(this, "UEngine.GetLocalPlayerFromInputDevice(UGameViewportClient*,FInputDeviceId)", InViewport, InputDevice); }
	APlayerController* GetFirstLocalPlayerController(const UWorld* InWorld) { return NativeCall<APlayerController*, const UWorld*>(this, "UEngine.GetFirstLocalPlayerController(UWorld*)", InWorld); }
	void GetAllLocalPlayerControllers(TArray<APlayerController*, TSizedDefaultAllocator<32> >* PlayerList) { NativeCall<void, TArray<APlayerController*, TSizedDefaultAllocator<32> >*>(this, "UEngine.GetAllLocalPlayerControllers(TArray<APlayerController*,TSizedDefaultAllocator<32>>&)", PlayerList); }
	bool Exec(UWorld* InWorld, const wchar_t* Cmd, FOutputDevice* Ar) { return NativeCall<bool, UWorld*, const wchar_t*, FOutputDevice*>(this, "UEngine.Exec(UWorld*,wchar_t*,FOutputDevice&)", InWorld, Cmd, Ar); }
	bool HandleCeCommand(UWorld* InWorld, const wchar_t* Cmd, FOutputDevice* Ar) { return NativeCall<bool, UWorld*, const wchar_t*, FOutputDevice*>(this, "UEngine.HandleCeCommand(UWorld*,wchar_t*,FOutputDevice&)", InWorld, Cmd, Ar); }
	// 	bool HandleDumpTicksCommand(UWorld* InWorld, const wchar_t* Cmd, FOutputDevice* Ar) { return NativeCall<bool, UWorld*, const wchar_t*, FOutputDevice*>(this, "UEngine.HandleDumpTicksCommand(UWorld*,wchar_t*,FOutputDevice*)", InWorld, Cmd, Ar); }
	// FUNCTION MISSING: UEngine.HandleDumpTicksCommand(UWorld*,wchar_t*,FOutputDevice*)
	// 	bool HandleGammaCommand(const wchar_t* Cmd, FOutputDevice* Ar) { return NativeCall<bool, const wchar_t*, FOutputDevice*>(this, "UEngine.HandleGammaCommand(wchar_t*,FOutputDevice*)", Cmd, Ar); }
	// FUNCTION MISSING: UEngine.HandleGammaCommand(wchar_t*,FOutputDevice*)
	void OnLostFocusPause(bool EnablePause) { NativeCall<void, bool>(this, "UEngine.OnLostFocusPause(bool)", EnablePause); }
	void InitializeRunningAverageDeltaTime() { NativeCall<void>(this, "UEngine.InitializeRunningAverageDeltaTime()"); }
	void UpdateRunningAverageDeltaTime(float DeltaTime, bool bAllowFrameRateSmoothing) { NativeCall<void, float, bool>(this, "UEngine.UpdateRunningAverageDeltaTime(float,bool)", DeltaTime, bAllowFrameRateSmoothing); }
	float GetMaxTickRate(float DeltaTime, bool bAllowFrameRateSmoothing) { return NativeCall<float, float, bool>(this, "UEngine.GetMaxTickRate(float,bool)", DeltaTime, bAllowFrameRateSmoothing); }
	float GetMaxFPS() { return NativeCall<float>(this, "UEngine.GetMaxFPS()"); }
	void SetMaxFPS(const float MaxFPS) { NativeCall<void, const float>(this, "UEngine.SetMaxFPS(float)", MaxFPS); }
	void EnableScreenSaver(bool bEnable) { NativeCall<void, bool>(this, "UEngine.EnableScreenSaver(bool)", bEnable); }
	//void GetDynamicResolutionCurrentStateInfos(FDynamicResolutionStateInfos* OutInfos) { NativeCall<void, FDynamicResolutionStateInfos*>(this, "UEngine.GetDynamicResolutionCurrentStateInfos(FDynamicResolutionStateInfos*)", OutInfos); }
	void WorldAdded(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UEngine.WorldAdded(UWorld*)", InWorld); }
	void WorldDestroyed(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UEngine.WorldDestroyed(UWorld*)", InWorld); }
	void BroadcastNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString* ErrorString) { NativeCall<void, UWorld*, UNetDriver*, ENetworkFailure::Type, const FString*>(this, "UEngine.BroadcastNetworkFailure(UWorld*,UNetDriver*,ENetworkFailure::Type,FString&)", World, NetDriver, FailureType, ErrorString); }
	UWorld* GetWorldFromContextObject(const UObject* Object, EGetWorldErrorMode ErrorMode) { return NativeCall<UWorld*, const UObject*, EGetWorldErrorMode>(this, "UEngine.GetWorldFromContextObject(UObject*,EGetWorldErrorMode)", Object, ErrorMode); }
	const TArray<ULocalPlayer*, TSizedDefaultAllocator<32> >* GetGamePlayers(UWorld* World) { return NativeCall<const TArray<ULocalPlayer*, TSizedDefaultAllocator<32> >*, UWorld*>(this, "UEngine.GetGamePlayers(UWorld*)", World); }
	const TArray<ULocalPlayer*, TSizedDefaultAllocator<32> >* GetGamePlayers(const UGameViewportClient* Viewport) { return NativeCall<const TArray<ULocalPlayer*, TSizedDefaultAllocator<32> >*, const UGameViewportClient*>(this, "UEngine.GetGamePlayers(UGameViewportClient*)", Viewport); }
	ULocalPlayer* FindFirstLocalPlayerFromControllerId(int ControllerId) { return NativeCall<ULocalPlayer*, int>(this, "UEngine.FindFirstLocalPlayerFromControllerId(int)", ControllerId); }
	ULocalPlayer* GetFirstGamePlayer(UWorld* InWorld) { return NativeCall<ULocalPlayer*, UWorld*>(this, "UEngine.GetFirstGamePlayer(UWorld*)", InWorld); }
	ULocalPlayer* GetFirstGamePlayer(UPendingNetGame* PendingNetGame) { return NativeCall<ULocalPlayer*, UPendingNetGame*>(this, "UEngine.GetFirstGamePlayer(UPendingNetGame*)", PendingNetGame); }
	void ShutdownWorldNetDriver(UWorld* World) { NativeCall<void, UWorld*>(this, "UEngine.ShutdownWorldNetDriver(UWorld*)", World); }
	UNetDriver* FindNamedNetDriver(const UWorld* InWorld, FName NetDriverName) { return NativeCall<UNetDriver*, const UWorld*, FName>(this, "UEngine.FindNamedNetDriver(UWorld*,FName)", InWorld, NetDriverName); }
	bool CreateNamedNetDriver(UWorld* InWorld, FName NetDriverName, FName NetDriverDefinition) { return NativeCall<bool, UWorld*, FName, FName>(this, "UEngine.CreateNamedNetDriver(UWorld*,FName,FName)", InWorld, NetDriverName, NetDriverDefinition); }
	void DestroyNamedNetDriver(UWorld* InWorld, FName NetDriverName) { NativeCall<void, UWorld*, FName>(this, "UEngine.DestroyNamedNetDriver(UWorld*,FName)", InWorld, NetDriverName); }
	void DestroyNamedNetDriver(UPendingNetGame* PendingNetGame, FName NetDriverName) { NativeCall<void, UPendingNetGame*, FName>(this, "UEngine.DestroyNamedNetDriver(UPendingNetGame*,FName)", PendingNetGame, NetDriverName); }
	void HandleTravelFailure(UWorld* InWorld, ETravelFailure::Type FailureType, const FString* ErrorString) { NativeCall<void, UWorld*, ETravelFailure::Type, const FString*>(this, "UEngine.HandleTravelFailure(UWorld*,ETravelFailure::Type,FString&)", InWorld, FailureType, ErrorString); }
	void HandleNetworkFailure(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType, const FString* ErrorString) { NativeCall<void, UWorld*, UNetDriver*, ENetworkFailure::Type, const FString*>(this, "UEngine.HandleNetworkFailure(UWorld*,UNetDriver*,ENetworkFailure::Type,FString&)", World, NetDriver, FailureType, ErrorString); }
	void HandleNetworkFailure_NotifyGameInstance(UWorld* World, UNetDriver* NetDriver, ENetworkFailure::Type FailureType) { NativeCall<void, UWorld*, UNetDriver*, ENetworkFailure::Type>(this, "UEngine.HandleNetworkFailure_NotifyGameInstance(UWorld*,UNetDriver*,ENetworkFailure::Type)", World, NetDriver, FailureType); }
	void HandleTravelFailure_NotifyGameInstance(UWorld* World, ETravelFailure::Type FailureType) { NativeCall<void, UWorld*, ETravelFailure::Type>(this, "UEngine.HandleTravelFailure_NotifyGameInstance(UWorld*,ETravelFailure::Type)", World, FailureType); }
	void SpawnServerActors(UWorld* World) { NativeCall<void, UWorld*>(this, "UEngine.SpawnServerActors(UWorld*)", World); }
	bool HandleOpenCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UEngine.HandleOpenCommand(wchar_t*,FOutputDevice&,UWorld*)", Cmd, Ar, InWorld); }
	bool HandleTravelCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UEngine.HandleTravelCommand(wchar_t*,FOutputDevice&,UWorld*)", Cmd, Ar, InWorld); }
	bool HandleStreamMapCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UEngine.HandleStreamMapCommand(wchar_t*,FOutputDevice&,UWorld*)", Cmd, Ar, InWorld); }
	bool HandleServerTravelCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UEngine.HandleServerTravelCommand(wchar_t*,FOutputDevice&,UWorld*)", Cmd, Ar, InWorld); }
	bool HandleDisconnectCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UEngine.HandleDisconnectCommand(wchar_t*,FOutputDevice&,UWorld*)", Cmd, Ar, InWorld); }
	void HandleDisconnect(UWorld* InWorld, UNetDriver* NetDriver) { NativeCall<void, UWorld*, UNetDriver*>(this, "UEngine.HandleDisconnect(UWorld*,UNetDriver*)", InWorld, NetDriver); }
	bool HandleReconnectCommand(const wchar_t* Cmd, FOutputDevice* Ar, UWorld* InWorld) { return NativeCall<bool, const wchar_t*, FOutputDevice*, UWorld*>(this, "UEngine.HandleReconnectCommand(wchar_t*,FOutputDevice&,UWorld*)", Cmd, Ar, InWorld); }
	bool MakeSureMapNameIsValid(FString* InOutMapName) { return NativeCall<bool, FString*>(this, "UEngine.MakeSureMapNameIsValid(FString&)", InOutMapName); }
	//void SetClientTravel(UWorld* InWorld, const wchar_t* NextURL, ETravelType InTravelType) { NativeCall<void, UWorld*, const wchar_t*, ETravelType>(this, "UEngine.SetClientTravel(UWorld*,wchar_t*,ETravelType)", InWorld, NextURL, InTravelType); }
	void CancelPending(UNetDriver* PendingNetGameDriver) { NativeCall<void, UNetDriver*>(this, "UEngine.CancelPending(UNetDriver*)", PendingNetGameDriver); }
	void CancelPending(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.CancelPending(UWorld*,UPendingNetGame*)", Context); }
	void CancelPending(UWorld* InWorld, UPendingNetGame* NewPendingNetGame) { NativeCall<void, UWorld*, UPendingNetGame*>(this, "UEngine.CancelPending(UWorld*,UPendingNetGame*)", InWorld, NewPendingNetGame); }
	void CancelAllPending() { NativeCall<void>(this, "UEngine.CancelAllPending()"); }
	void BrowseToDefaultMap(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.BrowseToDefaultMap(FWorldContext&)", Context); }
	void HandleBrowseToDefaultMapFailure(FWorldContext* Context, const FString* TextURL, const FString* Error) { NativeCall<void, FWorldContext*, const FString*, const FString*>(this, "UEngine.HandleBrowseToDefaultMapFailure(FWorldContext&,FString&,FString&)", Context, TextURL, Error); }
	void TickWorldTravel(FWorldContext* Context, float DeltaSeconds) { NativeCall<void, FWorldContext*, float>(this, "UEngine.TickWorldTravel(FWorldContext&,float)", Context, DeltaSeconds); }
	static char LoadMap() { return NativeCall<char>(nullptr, "UEngine.LoadMap(FWorldContext&,FURL,UPendingNetGame*,FString&)"); }
	void CleanupPackagesToFullyLoad(FWorldContext* Context, EFullyLoadPackageType FullyLoadType, const FString* Tag) { NativeCall<void, FWorldContext*, EFullyLoadPackageType, const FString*>(this, "UEngine.CleanupPackagesToFullyLoad(FWorldContext&,EFullyLoadPackageType,FString&)", Context, FullyLoadType, Tag); }
	void CancelPendingMapChange(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.CancelPendingMapChange(FWorldContext&)", Context); }
	void ClearDebugDisplayProperties() { NativeCall<void>(this, "UEngine.ClearDebugDisplayProperties()"); }
	void MovePendingLevel(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.MovePendingLevel(FWorldContext&)", Context); }
	void LoadPackagesFully(UWorld* InWorld, EFullyLoadPackageType FullyLoadType, const FString* Tag) { NativeCall<void, UWorld*, EFullyLoadPackageType, const FString*>(this, "UEngine.LoadPackagesFully(UWorld*,EFullyLoadPackageType,FString&)", InWorld, FullyLoadType, Tag); }
	FWorldContext* CreateNewWorldContext(EWorldType::Type WorldType) { return NativeCall<FWorldContext*, EWorldType::Type>(this, "UEngine.CreateNewWorldContext(EWorldType::Type)", WorldType); }
	FWorldContext* GetWorldContextFromWorld(const UWorld* InWorld) { return NativeCall<FWorldContext*, const UWorld*>(this, "UEngine.GetWorldContextFromWorld(UWorld*)", InWorld); }
	FWorldContext* GetWorldContextFromWorldChecked(const UWorld* InWorld) { return NativeCall<FWorldContext*, const UWorld*>(this, "UEngine.GetWorldContextFromWorldChecked(UWorld*)", InWorld); }
	void DestroyWorldContext(UWorld* InWorld) { NativeCall<void, UWorld*>(this, "UEngine.DestroyWorldContext(UWorld*)", InWorld); }
	bool IsWorldDuplicate(const UWorld* const InWorld) { return NativeCall<bool, const UWorld* const>(this, "UEngine.IsWorldDuplicate(UWorld*const)", InWorld); }
	void CheckAndHandleStaleWorldObjectReferences(FWorldContext* WorldContext) { NativeCall<void, FWorldContext*>(this, "UEngine.CheckAndHandleStaleWorldObjectReferences(FWorldContext*)", WorldContext); }
	// 	static wchar_t*** FindAndPrintStaleReferencesToObjects() { return NativeCall<wchar_t***>(nullptr, "UEngine.FindAndPrintStaleReferencesToObjects()"); }
	// FUNCTION MISSING: UEngine.FindAndPrintStaleReferencesToObjects()
	bool PrepareMapChange(FWorldContext* Context, const TArray<FName, TSizedDefaultAllocator<32> >* LevelNames) { return NativeCall<bool, FWorldContext*, const TArray<FName, TSizedDefaultAllocator<32> >*>(this, "UEngine.PrepareMapChange(FWorldContext&,TArray<FName,TSizedDefaultAllocator<32>>&)", Context, LevelNames); }
	void ConditionalCommitMapChange(FWorldContext* Context) { NativeCall<void, FWorldContext*>(this, "UEngine.ConditionalCommitMapChange(FWorldContext&)", Context); }
	bool CommitMapChange(FWorldContext* Context) { return NativeCall<bool, FWorldContext*>(this, "UEngine.CommitMapChange(FWorldContext&)", Context); }
	FSeamlessTravelHandler* SeamlessTravelHandlerForWorld(UWorld* World) { return NativeCall<FSeamlessTravelHandler*, UWorld*>(this, "UEngine.SeamlessTravelHandlerForWorld(UWorld*)", World); }
	struct FURL* LastURLFromWorld(UWorld* World) { return NativeCall<FURL*, UWorld*>(this, "UEngine.LastURLFromWorld(UWorld*)", World); }
	void CreateGameUserSettings() { NativeCall<void>(this, "UEngine.CreateGameUserSettings()"); }
	UGameUserSettings* GetGameUserSettings() { return NativeCall<UGameUserSettings*>(this, "UEngine.GetGameUserSettings()"); }
	static void CopyPropertiesForUnrelatedObjects() { NativeCall<void>(nullptr, "UEngine.CopyPropertiesForUnrelatedObjects(UObject*,UObject*,UEngine::FCopyPropertiesForUnrelatedObjectsParams)"); }
	int GetGlobalFunctionCallspace(UFunction* Function, UObject* FunctionTarget, FFrame* Stack) { return NativeCall<int, UFunction*, UObject*, FFrame*>(this, "UEngine.GetGlobalFunctionCallspace(UFunction*,UObject*,FFrame*)", Function, FunctionTarget, Stack); }
	//void ExecEngineStat(UWorld* World, FCommonViewportClient* ViewportClient, const wchar_t* InName) { NativeCall<void, UWorld*, FCommonViewportClient*, const wchar_t*>(this, "UEngine.ExecEngineStat(UWorld*,FCommonViewportClient*,wchar_t*)", World, ViewportClient, InName); }
	//void SetEngineStat(UWorld* World, FCommonViewportClient* ViewportClient, const FString* InName, const bool bShow) { NativeCall<void, UWorld*, FCommonViewportClient*, const FString*, const bool>(this, "UEngine.SetEngineStat(UWorld*,FCommonViewportClient*,FString&,bool)", World, ViewportClient, InName, bShow); }
	//bool ToggleStatDetailed(UWorld* World, FCommonViewportClient* ViewportClient, const wchar_t* Stream) { return NativeCall<bool, UWorld*, FCommonViewportClient*, const wchar_t*>(this, "UEngine.ToggleStatDetailed(UWorld*,FCommonViewportClient*,wchar_t*)", World, ViewportClient, Stream); }
	//bool ToggleStatFPS(UWorld* World, FCommonViewportClient* ViewportClient, const wchar_t* Stream) { return NativeCall<bool, UWorld*, FCommonViewportClient*, const wchar_t*>(this, "UEngine.ToggleStatFPS(UWorld*,FCommonViewportClient*,wchar_t*)", World, ViewportClient, Stream); }
	//int RenderStatFPS(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatFPS(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//bool ToggleStatHitches(UWorld* World, FCommonViewportClient* ViewportClient, const wchar_t* Stream) { return NativeCall<bool, UWorld*, FCommonViewportClient*, const wchar_t*>(this, "UEngine.ToggleStatHitches(UWorld*,FCommonViewportClient*,wchar_t*)", World, ViewportClient, Stream); }
	//int RenderStatHitches(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatHitches(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//int RenderStatSummary(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatSummary(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//bool ToggleStatNamedEvents(UWorld* World, FCommonViewportClient* ViewportClient, const wchar_t* Stream) { return NativeCall<bool, UWorld*, FCommonViewportClient*, const wchar_t*>(this, "UEngine.ToggleStatNamedEvents(UWorld*,FCommonViewportClient*,wchar_t*)", World, ViewportClient, Stream); }
	//bool ToggleStatVerboseNamedEvents(UWorld* World, FCommonViewportClient* ViewportClient, const wchar_t* Stream) { return NativeCall<bool, UWorld*, FCommonViewportClient*, const wchar_t*>(this, "UEngine.ToggleStatVerboseNamedEvents(UWorld*,FCommonViewportClient*,wchar_t*)", World, ViewportClient, Stream); }
	//int RenderNamedEventsEnabled(FCanvas* Canvas, int X, int Y) { return NativeCall<int, FCanvas*, int, int>(this, "UEngine.RenderNamedEventsEnabled(FCanvas*,int,int)", Canvas, X, Y); }
	//int RenderStatColorList(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatColorList(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//int RenderStatLevels(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatLevels(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//bool ToggleStatUnit(UWorld* World, FCommonViewportClient* ViewportClient, const wchar_t* Stream) { return NativeCall<bool, UWorld*, FCommonViewportClient*, const wchar_t*>(this, "UEngine.ToggleStatUnit(UWorld*,FCommonViewportClient*,wchar_t*)", World, ViewportClient, Stream); }
	//int RenderStatUnit(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatUnit(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//int RenderStatDrawCount(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatDrawCount(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//int RenderStatAI(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatAI(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//int RenderStatTimecode(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatTimecode(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//int RenderStatFrameCounter(UWorld* World, FViewport* Viewport, FCanvas* Canvas, int X, int Y, const UE::Math::TVector<double>* ViewLocation, const UE::Math::TRotator<double>* ViewRotation) { return NativeCall<int, UWorld*, FViewport*, FCanvas*, int, int, const UE::Math::TVector<double>*, const UE::Math::TRotator<double>*>(this, "UEngine.RenderStatFrameCounter(UWorld*,FViewport*,FCanvas*,int,int,UE::Math::TVector<double>*,UE::Math::TRotator<double>*)", World, Viewport, Canvas, X, Y, ViewLocation, ViewRotation); }
	//void FEngineStatFuncs(UEngine::FEngineStatFuncs* __that) { NativeCall<void, UEngine::FEngineStatFuncs*>(this, "UEngine.FEngineStatFuncs(UEngine::FEngineStatFuncs*)", __that); }
	//static void FEngineStatFuncs() { NativeCall<void>(nullptr, "UEngine.FEngineStatFuncs()"); }
	struct UContentBundleEngineSubsystem* GetEngineSubsystem() { return NativeCall<UContentBundleEngineSubsystem*>(this, "UEngine.GetEngineSubsystem<UThreadNodeSubsystem>()"); }

	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UEngine"); }
};