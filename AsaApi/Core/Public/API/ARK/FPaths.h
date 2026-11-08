#pragma once


struct FPaths
{
    enum class EGetExtensionDirsFlags : unsigned char
    {
        None = 0, WithBase = 1, WithRestricted = 2, WithPlatforms = 4,
        CheckPlatformsValid = 8, Default = 0xFF
    };
	// Fields

	FWindowsCriticalSection& GameProjectFilePathLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FPaths.GameProjectFilePathLock"); }
	FString& GameProjectFilePathField() { return *GetNativePointerField<FString*>(this, "FPaths.GameProjectFilePath"); }
	FString& UserDirArgField() { return *GetNativePointerField<FString*>(this, "FPaths.UserDirArg"); }
	FString& GameSavedDirField() { return *GetNativePointerField<FString*>(this, "FPaths.GameSavedDir"); }
	FString& EngineSavedDirField() { return *GetNativePointerField<FString*>(this, "FPaths.EngineSavedDir"); }
	FString& ShaderDirField() { return *GetNativePointerField<FString*>(this, "FPaths.ShaderDir"); }
	FString& UserFolderField() { return *GetNativePointerField<FString*>(this, "FPaths.UserFolder"); }
	TArray<FString, TSizedDefaultAllocator<32> >& EngineLocalizationPathsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.EngineLocalizationPaths"); }
	TArray<FString, TSizedDefaultAllocator<32> >& EditorLocalizationPathsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.EditorLocalizationPaths"); }
	TArray<FString, TSizedDefaultAllocator<32> >& CookedEditorLocalizationPathsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.CookedEditorLocalizationPaths"); }
	TArray<FString, TSizedDefaultAllocator<32> >& PropertyNameLocalizationPathsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.PropertyNameLocalizationPaths"); }
	TArray<FString, TSizedDefaultAllocator<32> >& ToolTipLocalizationPathsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.ToolTipLocalizationPaths"); }
	TArray<FString, TSizedDefaultAllocator<32> >& GameLocalizationPathsField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.GameLocalizationPaths"); }
	TArray<FString, TSizedDefaultAllocator<32> >& RestrictedFolderNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.RestrictedFolderNames"); }
	TArray<FString, TSizedDefaultAllocator<32> >& RestrictedSlashedFolderNamesField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "FPaths.RestrictedSlashedFolderNames"); }
	FString& RelativePathToRootField() { return *GetNativePointerField<FString*>(this, "FPaths.RelativePathToRoot"); }
	bool& bUserDirArgInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bUserDirArgInitialized"); }
	bool& bGameSavedDirInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bGameSavedDirInitialized"); }
	bool& bEngineSavedDirInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bEngineSavedDirInitialized"); }
	bool& bShaderDirInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bShaderDirInitialized"); }
	bool& bUserFolderInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bUserFolderInitialized"); }
	bool& bEngineLocalizationPathsInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bEngineLocalizationPathsInitialized"); }
	bool& bEditorLocalizationPathsInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bEditorLocalizationPathsInitialized"); }
	bool& bCookedEditorLocalizationPathsInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bCookedEditorLocalizationPathsInitialized"); }
	bool& bPropertyNameLocalizationPathsInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bPropertyNameLocalizationPathsInitialized"); }
	bool& bToolTipLocalizationPathsInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bToolTipLocalizationPathsInitialized"); }
	bool& bGameLocalizationPathsInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bGameLocalizationPathsInitialized"); }
	bool& bRestrictedFolderNamesInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bRestrictedFolderNamesInitialized"); }
	bool& bRestrictedSlashedFolderNamesInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bRestrictedSlashedFolderNamesInitialized"); }
	bool& bRelativePathToRootInitializedField() { return *GetNativePointerField<bool*>(this, "FPaths.bRelativePathToRootInitialized"); }

	// Bitfields

	// Functions

	static FString EngineVersionAgnosticUserDir() { return NativeCall<FString>(nullptr, "FPaths.EngineVersionAgnosticUserDir()"); }
	static bool CollapseRelativeDirectories(FString& InPath, bool bCollapseAllPossible) { return NativeCall<bool, FString&, bool>(nullptr, "FPaths.CollapseRelativeDirectories(FString&,bool)", InPath, bCollapseAllPossible); }
	static FString ProjectLogDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectLogDir()"); }
	static FString EnterpriseFeaturePackDir() { return NativeCall<FString>(nullptr, "FPaths.EnterpriseFeaturePackDir()"); }
	static TArray<FString, TSizedDefaultAllocator<32> > const& GetEditorLocalizationPaths() { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> > const&>(nullptr, "FPaths.GetEditorLocalizationPaths()"); }
	static FString RemoveDuplicateSlashes(const FString& InPath) { FString Result = InPath; FPaths::RemoveDuplicateSlashes(Result); return MoveTemp(Result); }
	static void RemoveDuplicateSlashes(FString& InPath) { NativeCall<void, FString&>(nullptr, "FPaths.RemoveDuplicateSlashes(FString&)", InPath); }
	static FString SandboxesDir() { return NativeCall<FString>(nullptr, "FPaths.SandboxesDir()"); }
	static bool HasProjectPersistentDownloadDir() { return NativeCall<bool>(nullptr, "FPaths.HasProjectPersistentDownloadDir()"); }
	static FString GameAgnosticSavedDir() { return NativeCall<FString>(nullptr, "FPaths.GameAgnosticSavedDir()"); }
	static FString EnginePluginsDir() { return NativeCall<FString>(nullptr, "FPaths.EnginePluginsDir()"); }
	static bool IsRestrictedPath(const FString& InPath) { return NativeCall<bool, const FString&>(nullptr, "FPaths.IsRestrictedPath(FString&)", InPath); }
	static FString EngineContentDir() { return NativeCall<FString>(nullptr, "FPaths.EngineContentDir()"); }
	static FString EngineUserDir() { return NativeCall<FString>(nullptr, "FPaths.EngineUserDir()"); }
	static FString ShaderWorkingDir() { return NativeCall<FString>(nullptr, "FPaths.ShaderWorkingDir()"); }
	static void Split(const FString& InPath, FString& PathPart, FString& FilenamePart, FString& ExtensionPart) { NativeCall<void, const FString&, FString&, FString&, FString&>(nullptr, "FPaths.Split(FString&,FString&,FString&,FString&)", InPath, PathPart, FilenamePart, ExtensionPart); }
	static FString ProjectIntermediateDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectIntermediateDir()"); }
	// 	static FString EnginePlatformExtensionsDir() { return NativeCall<FString>(nullptr, "FPaths.EnginePlatformExtensionsDir()"); }
	// FUNCTION MISSING: FPaths.EnginePlatformExtensionsDir()
	static TArray<FString, TSizedDefaultAllocator<32> > const& GetToolTipLocalizationPaths() { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> > const&>(nullptr, "FPaths.GetToolTipLocalizationPaths()"); }
	static FString GameUserDeveloperDir() { return NativeCall<FString>(nullptr, "FPaths.GameUserDeveloperDir()"); }
	static FString EnterpriseDir() { return NativeCall<FString>(nullptr, "FPaths.EnterpriseDir()"); }
	static FString const& CustomShaderDirArgument() { return NativeCall<FString const&>(nullptr, "FPaths.CustomShaderDirArgument()"); }
	static TArray<FString, TSizedDefaultAllocator<32> >* GetExtensionDirs(TArray<FString, TSizedDefaultAllocator<32> >* result, const FString& BaseDir, const FString& SubDir, FPaths::EGetExtensionDirsFlags Flags) { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> >*, TArray<FString, TSizedDefaultAllocator<32> >*, const FString&, const FString&, FPaths::EGetExtensionDirsFlags>(nullptr, "FPaths.GetExtensionDirs(FString&,FString&,FPaths::EGetExtensionDirsFlags)", result, BaseDir, SubDir, Flags); }
	static FString GetExtension(const FString& InPath, bool bIncludeDot) { return NativeCall<FString, const FString&, bool>(nullptr, "FPaths.GetExtension(FString&,bool)", InPath, bIncludeDot); }
	static FString SetExtension(const FString& InPath, const FString& InNewExtension) { return NativeCall<FString, const FString&, const FString&>(nullptr, "FPaths.SetExtension(FString&,FString&)", InPath, InNewExtension); }
	static FString EngineIntermediateDir() { return NativeCall<FString>(nullptr, "FPaths.EngineIntermediateDir()"); }
	static FString* GetBaseFilename(FString* result, FString&& InPath, bool bRemovePath) { return NativeCall<FString*, FString*, FString&&, bool>(nullptr, "FPaths.GetBaseFilename(FString&&,bool)", result, std::move(InPath), bRemovePath); }
	static FString* GetBaseFilename(FString* result, const FString& InPath, bool bRemovePath) { return NativeCall<FString*, FString*, const FString&, bool>(nullptr, "FPaths.GetBaseFilename(FString&,bool)", result, InPath, bRemovePath); }
	// Current counterpart already declared for: static FString GetBaseFilename(const FString& InPath, bool bRemovePath);
	static FString* GetCleanFilename(FString* result, const FString& InPath) { return NativeCall<FString*, FString*, const FString&>(nullptr, "FPaths.GetCleanFilename(FString&)", result, InPath); }
	static FString* GetCleanFilename(FString* result, FString&& InPath) { return NativeCall<FString*, FString*, FString&&>(nullptr, "FPaths.GetCleanFilename(FString&&)", result, std::move(InPath)); }
	// Current counterpart already declared for: static FString GetCleanFilename(const FString& InPath);
	static FString ConvertFromSandboxPath(const FString& InPath, const wchar_t* InSandboxName) { return NativeCall<FString, const FString&, const wchar_t*>(nullptr, "FPaths.ConvertFromSandboxPath(FString&,wchar_t*)", InPath, InSandboxName); }
	static FString GeneratedConfigDir() { return NativeCall<FString>(nullptr, "FPaths.GeneratedConfigDir()"); }
	static FString ProjectUserDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectUserDir()"); }
	static FString MakeValidFileName(const FString& InString, wchar_t InReplacementChar) { return NativeCall<FString, const FString&, wchar_t>(nullptr, "FPaths.MakeValidFileName(FString&,wchar_t)", InString, InReplacementChar); }
	static void CombineInternal(FString& OutPath, const TStringView<wchar_t>* Paths, int NumPaths) { NativeCall<void, FString&, const TStringView<wchar_t>*, int>(nullptr, "FPaths.CombineInternal(TStringView<wchar_t>*,int)", OutPath, Paths, NumPaths); }
	static FString SourceConfigDir() { return NativeCall<FString>(nullptr, "FPaths.SourceConfigDir()"); }
	static bool FileExists(const FString& InPath) { return NativeCall<bool, const FString&>(nullptr, "FPaths.FileExists(FString&)", InPath); }
	static FString GetInvalidFileSystemChars() { return NativeCall<FString>(nullptr, "FPaths.GetInvalidFileSystemChars()"); }
	static FString AutomationLogDir() { return NativeCall<FString>(nullptr, "FPaths.AutomationLogDir()"); }
	static FString GameDevelopersDir() { return NativeCall<FString>(nullptr, "FPaths.GameDevelopersDir()"); }
	static FString ScreenShotDir() { return NativeCall<FString>(nullptr, "FPaths.ScreenShotDir()"); }
	static FString CreateStandardFilename(const FString& InPath) { return NativeCall<FString, const FString&>(nullptr, "FPaths.CreateStandardFilename(FString&)", InPath); }
	static bool IsProjectFilePathSet() { return NativeCall<bool>(nullptr, "FPaths.IsProjectFilePathSet()"); }
	static void NormalizeDirectoryName(FString& InPath) { NativeCall<void, FString&>(nullptr, "FPaths.NormalizeDirectoryName(FString&)", InPath); }
	static FString EngineSavedDir() { return NativeCall<FString>(nullptr, "FPaths.EngineSavedDir()"); }
	static bool DirectoryExists(const FString& InPath) { return NativeCall<bool, const FString&>(nullptr, "FPaths.DirectoryExists(FString&)", InPath); }
	static FString ProjectPersistentDownloadDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectPersistentDownloadDir()"); }
	static bool MakePathRelativeTo(FString& InPath, const wchar_t* InRelativeTo) { return NativeCall<bool, FString&, const wchar_t*>(nullptr, "FPaths.MakePathRelativeTo(FString&,wchar_t*)", InPath, InRelativeTo); }
	static FString EngineDir() { return NativeCall<FString>(nullptr, "FPaths.EngineDir()"); }
	static FString AutomationTransientDir() { return NativeCall<FString>(nullptr, "FPaths.AutomationTransientDir()"); }
	static FString ChangeExtension(const FString& InPath, const FString& InNewExtension) { return NativeCall<FString, const FString&, const FString&>(nullptr, "FPaths.ChangeExtension(FString&,FString&)", InPath, InNewExtension); }
	static bool ShouldSaveToUserDir() { return NativeCall<bool>(nullptr, "FPaths.ShouldSaveToUserDir()"); }
	static bool IsRelative(const FString& InPath) { return NativeCall<bool, const FString&>(nullptr, "FPaths.IsRelative(FString&)", InPath); }
	static FString* GetPath(FString* result, FString&& InPath) { return NativeCall<FString*, FString*, FString&&>(nullptr, "FPaths.GetPath(FString&&)", result, std::move(InPath)); }
	static FString* GetPath(FString* result, const FString& InPath) { return NativeCall<FString*, FString*, const FString&>(nullptr, "FPaths.GetPath(FString&)", result, InPath); }
	// Current counterpart already declared for: static FString GetPath(const FString& InPath);
	static FString ProjectConfigDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectConfigDir()"); }
	static FString const& CustomUserDirArgument() { return NativeCall<FString const&>(nullptr, "FPaths.CustomUserDirArgument()"); }
	static FString RootDir() { return NativeCall<FString>(nullptr, "FPaths.RootDir()"); }
	static FString BugItDir() { return NativeCall<FString>(nullptr, "FPaths.BugItDir()"); }
	// 	static FString ProjectPlatformExtensionsDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectPlatformExtensionsDir()"); }
	// FUNCTION MISSING: FPaths.ProjectPlatformExtensionsDir()
	static void MakeStandardFilename(FString& InPath) { NativeCall<void, FString&>(nullptr, "FPaths.MakeStandardFilename(FString&)", InPath); }
	static FString CreateTempFilename(const wchar_t* Path, const wchar_t* Prefix, const wchar_t* Extension) { return NativeCall<FString, const wchar_t*, const wchar_t*, const wchar_t*>(nullptr, "FPaths.CreateTempFilename(wchar_t*,wchar_t*,wchar_t*)", Path, Prefix, Extension); }
	static TArray<FString, TSizedDefaultAllocator<32> > const& GetGameLocalizationPaths() { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> > const&>(nullptr, "FPaths.GetGameLocalizationPaths()"); }
	static FString const& ProjectSavedDir() { return NativeCall<FString const&>(nullptr, "FPaths.ProjectSavedDir()"); }
	static FString ConvertToSandboxPath(const FString& InPath, const wchar_t* InSandboxName) { return NativeCall<FString, const FString&, const wchar_t*>(nullptr, "FPaths.ConvertToSandboxPath(FString&,wchar_t*)", InPath, InSandboxName); }
	static bool IsUnderDirectory(const FString& InPath, const FString& InDirectory) { return NativeCall<bool, const FString&, const FString&>(nullptr, "FPaths.IsUnderDirectory(FString&,FString&)", InPath, InDirectory); }
	static FString EngineSourceDir() { return NativeCall<FString>(nullptr, "FPaths.EngineSourceDir()"); }
	static FString ProfilingDir() { return NativeCall<FString>(nullptr, "FPaths.ProfilingDir()"); }
	static bool IsSamePath(const FString& PathA, const FString& PathB) { return NativeCall<bool, const FString&, const FString&>(nullptr, "FPaths.IsSamePath(FString&,FString&)", PathA, PathB); }
	static TArray<FString, TSizedDefaultAllocator<32> > const& GetEngineLocalizationPaths() { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> > const&>(nullptr, "FPaths.GetEngineLocalizationPaths()"); }
	static FString ProjectDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectDir()"); }
	static FString ProjectPluginsDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectPluginsDir()"); }
	static FString const& GetRelativePathToRoot() { return NativeCall<FString const&>(nullptr, "FPaths.GetRelativePathToRoot()"); }
	static FString GetPlatformLocalizationFolderName() { return NativeCall<FString>(nullptr, "FPaths.GetPlatformLocalizationFolderName()"); }
	static TArray<FString, TSizedDefaultAllocator<32> > const& GetRestrictedFolderNames() { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> > const&>(nullptr, "FPaths.GetRestrictedFolderNames()"); }
	static FString DiffDir() { return NativeCall<FString>(nullptr, "FPaths.DiffDir()"); }
	static FString GameSourceDir() { return NativeCall<FString>(nullptr, "FPaths.GameSourceDir()"); }
	static FString EnterprisePluginsDir() { return NativeCall<FString>(nullptr, "FPaths.EnterprisePluginsDir()"); }
	static TArray<FString, TSizedDefaultAllocator<32> > const& GetPropertyNameLocalizationPaths() { return NativeCall<TArray<FString, TSizedDefaultAllocator<32> > const&>(nullptr, "FPaths.GetPropertyNameLocalizationPaths()"); }
	static void NormalizeFilename(FString& InPath) { NativeCall<void, FString&>(nullptr, "FPaths.NormalizeFilename(FString&)", InPath); }
	static FString ProjectContentDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectContentDir()"); }
	static void SetProjectFilePath(const FString& NewGameProjectFilePath) { NativeCall<void, const FString&>(nullptr, "FPaths.SetProjectFilePath(FString&)", NewGameProjectFilePath); }
	static FString GetProjectFilePath() { return NativeCall<FString>(nullptr, "FPaths.GetProjectFilePath()"); }
	static FString FeaturePackDir() { return NativeCall<FString>(nullptr, "FPaths.FeaturePackDir()"); }
	static bool IsDrive(const FString& InPath) { return NativeCall<bool, const FString&>(nullptr, "FPaths.IsDrive(FString&)", InPath); }
	static FString CloudDir() { return NativeCall<FString>(nullptr, "FPaths.CloudDir()"); }
	static FString LaunchDir() { return NativeCall<FString>(nullptr, "FPaths.LaunchDir()"); }
	static FString EngineConfigDir() { return NativeCall<FString>(nullptr, "FPaths.EngineConfigDir()"); }
	static bool ValidatePath(const FString& InPath, FText* OutReason) { return NativeCall<bool, const FString&, FText*>(nullptr, "FPaths.ValidatePath(FString&,FText*)", InPath, OutReason); }
	static FString AudioCaptureDir() { return NativeCall<FString>(nullptr, "FPaths.AudioCaptureDir()"); }
	static FString VideoCaptureDir() { return NativeCall<FString>(nullptr, "FPaths.VideoCaptureDir()"); }
	static void MakePlatformFilename(FString& InPath) { NativeCall<void, FString&>(nullptr, "FPaths.MakePlatformFilename(FString&)", InPath); }
	static FString* ConvertRelativePathToFull(FString* result, const FString& BasePath, const FString& InPath) { return NativeCall<FString*, FString*, const FString&, const FString&>(nullptr, "FPaths.ConvertRelativePathToFull(FString&,FString&)", result, BasePath, InPath); }
	static FString* ConvertRelativePathToFull(FString* result, FString&& InPath) { return NativeCall<FString*, FString*, FString&&>(nullptr, "FPaths.ConvertRelativePathToFull(FString&&)", result, std::move(InPath)); }
	static FString* ConvertRelativePathToFull(FString* result, FString&& BasePath, FString&& InPath) { return NativeCall<FString*, FString*, FString&&, FString&&>(nullptr, "FPaths.ConvertRelativePathToFull(FString&&,FString&&)", result, std::move(BasePath), std::move(InPath)); }
	static FString* ConvertRelativePathToFull(FString* result, FString&& BasePath, const FString& InPath) { return NativeCall<FString*, FString*, FString&&, const FString&>(nullptr, "FPaths.ConvertRelativePathToFull(FString&&,FString&)", result, std::move(BasePath), InPath); }
	static FString* ConvertRelativePathToFull(FString* result, const FString& InPath) { return NativeCall<FString*, FString*, const FString&>(nullptr, "FPaths.ConvertRelativePathToFull(FString&)", result, InPath); }
	// Current counterpart already declared for: static FString ConvertRelativePathToFull(FString* InPath);
	// Current counterpart already declared for: static FString ConvertRelativePathToFull(FString* BasePath, const FString& InPath);
	// Current counterpart already declared for: static FString ConvertRelativePathToFull(const FString& BasePath, const FString& InPath);
	// Current counterpart already declared for: static FString ConvertRelativePathToFull(const FString& InPath);
	static FString ProjectModsDir() { return NativeCall<FString>(nullptr, "FPaths.ProjectModsDir()"); }
	static FString AutomationDir() { return NativeCall<FString>(nullptr, "FPaths.AutomationDir()"); }
};