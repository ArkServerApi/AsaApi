#pragma once
#include "UEObjectForward.h"
#include "BulkForward.h"
#include "UObject.h"

struct UConsole : public UObject
{
public:
	UConsole() = delete;
	~UConsole() = delete;
	UConsole(const UConsole&) = delete;
	UConsole& operator=(const UConsole&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UConsole"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UConsole"); }
	TArray<FString, TSizedDefaultAllocator<32> >& ScrollbackField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UConsole.Scrollback"); }
	int& SBHeadField() { return *GetNativePointerField<int*>(this, "UConsole.SBHead"); }
	int& SBPosField() { return *GetNativePointerField<int*>(this, "UConsole.SBPos"); }
	TArray<FString, TSizedDefaultAllocator<32> >& HistoryBufferField() { return *GetNativePointerField<TArray<FString, TSizedDefaultAllocator<32> >*>(this, "UConsole.HistoryBuffer"); }
	FString& TypedStrField() { return *GetNativePointerField<FString*>(this, "UConsole.TypedStr"); }
	int& TypedStrPosField() { return *GetNativePointerField<int*>(this, "UConsole.TypedStrPos"); }
	FString& PrecompletedInputLineField() { return *GetNativePointerField<FString*>(this, "UConsole.PrecompletedInputLine"); }
	FString& LastAutoCompletedCommandField() { return *GetNativePointerField<FString*>(this, "UConsole.LastAutoCompletedCommand"); }
	int& AutoCompleteIndexField() { return *GetNativePointerField<int*>(this, "UConsole.AutoCompleteIndex"); }
	int& AutoCompleteCursorField() { return *GetNativePointerField<int*>(this, "UConsole.AutoCompleteCursor"); }
	FName& ConsoleStateField() { return *GetNativePointerField<FName*>(this, "UConsole.ConsoleState"); }
	FAutoCompleteNode& AutoCompleteTreeField() { return *GetNativePointerField<FAutoCompleteNode*>(this, "UConsole.AutoCompleteTree"); }
	float& TextWField() { return *GetNativePointerField<float*>(this, "UConsole.TextW"); }
	float& TextHField() { return *GetNativePointerField<float*>(this, "UConsole.TextH"); }
	const UConsoleSettings*& ConsoleSettingsField() { return *GetNativePointerField<const UConsoleSettings**>(this, "UConsole.ConsoleSettings"); }
	bool& bDPIAwareStringMeasurementField() { return *GetNativePointerField<bool*>(this, "UConsole.bDPIAwareStringMeasurement"); }
	BitFieldValue<bool, unsigned __int32> bCaptureKeyInput() { return { this, "UConsole.bCaptureKeyInput"}; }
	BitFieldValue<bool, unsigned __int32> bCtrl() { return { this, "UConsole.bCtrl"}; }
	BitFieldValue<bool, unsigned __int32> bShift() { return { this, "UConsole.bShift"}; }
	BitFieldValue<bool, unsigned __int32> bAutoCompleteLocked() { return { this, "UConsole.bAutoCompleteLocked"}; }
	BitFieldValue<bool, unsigned __int32> bIsRuntimeAutoCompleteUpToDate() { return { this, "UConsole.bIsRuntimeAutoCompleteUpToDate"}; }
	void ClearOutput() { NativeCall<void>(this, "UConsole.ClearOutput()"); }
	void OutputText(const FString& Text) { NativeCall<void, const FString&>(this, "UConsole.OutputText(FString&)", Text); }
	void PostInitProperties() { NativeCall<void>(this, "UConsole.PostInitProperties()"); }
	void ConsoleCommand(const FString& Command) { NativeCall<void, const FString&>(this, "UConsole.ConsoleCommand(FString&)", Command); }
	void NormalizeHistoryBuffer() { NativeCall<void>(this, "UConsole.NormalizeHistoryBuffer()"); }
	void UpdatePrecompletedInputLine() { NativeCall<void>(this, "UConsole.UpdatePrecompletedInputLine()"); }
	void BuildRuntimeAutoCompleteList(bool bForce) { NativeCall<void, bool>(this, "UConsole.BuildRuntimeAutoCompleteList(bool)", bForce); }
	void MouseMove(FViewport* Viewport, int X, int Y) { NativeCall<void, FViewport*, int, int>(this, "UConsole.MouseMove(FViewport*,int,int)", Viewport, X, Y); }
	void PostRender_Console_Open(UCanvas* Canvas) { NativeCall<void, UCanvas*>(this, "UConsole.PostRender_Console_Open(UCanvas*)", Canvas); }
	void SetAutoCompleteFromHistory() { NativeCall<void>(this, "UConsole.SetAutoCompleteFromHistory()"); }
	void PostRender_Console(UCanvas* Canvas) { NativeCall<void, UCanvas*>(this, "UConsole.PostRender_Console(UCanvas*)", Canvas); }
	bool ConsoleActive() { return NativeCall<bool>(this, "UConsole.ConsoleActive()"); }
	void BeginState_Open(FName PreviousStateName) { NativeCall<void, FName>(this, "UConsole.BeginState_Open(FName)", PreviousStateName); }
	void FakeGotoState(FName NextStateName) { NativeCall<void, FName>(this, "UConsole.FakeGotoState(FName)", NextStateName); }
	void EndState_Open(FName NextStateName) { NativeCall<void, FName>(this, "UConsole.EndState_Open(FName)", NextStateName); }
	void BeginState_Typing(FName PreviousStateName) { NativeCall<void, FName>(this, "UConsole.BeginState_Typing(FName)", PreviousStateName); }
	void SetInputText(const FString& Text) { NativeCall<void, const FString&>(this, "UConsole.SetInputText(FString&)", Text); }
	void EndState_Typing(FName NextStateName) { NativeCall<void, FName>(this, "UConsole.EndState_Typing(FName)", NextStateName); }
	void UpdateCompleteIndices(bool bIsSearchNarrowing) { NativeCall<void, bool>(this, "UConsole.UpdateCompleteIndices(bool)", bIsSearchNarrowing); }
	void SetCursorPos(int Position) { NativeCall<void, int>(this, "UConsole.SetCursorPos(int)", Position); }
	void AppendInputText(const FString& Text) { NativeCall<void, const FString&>(this, "UConsole.AppendInputText(FString&)", Text); }
	void SetInputLineFromAutoComplete() { NativeCall<void>(this, "UConsole.SetInputLineFromAutoComplete()"); }
	void GetPosInTextLine(UCanvas* Canvas, UFont* Font, const FString& Line, float MousePosX, float& PosInLine, int& PosInString) { NativeCall<void, UCanvas*, UFont*, const FString&, float, float&, int&>(this, "UConsole.GetPosInTextLine(UCanvas*,UFont*,FString&,float,float&,int&)", Canvas, Font, Line, MousePosX, PosInLine, PosInString); }
	void FlushPlayerInput() { NativeCall<void>(this, "UConsole.FlushPlayerInput()"); }
	void StartTyping(const FString& Text) { NativeCall<void, const FString&>(this, "UConsole.StartTyping(FString&)", Text); }
	void InvalidateAutocomplete() { NativeCall<void>(this, "UConsole.InvalidateAutocomplete()"); }
	void CapturedMouseMove(FViewport* InViewport, int X, int Y) { NativeCall<void, FViewport*, int, int>(this, "UConsole.CapturedMouseMove(FViewport*,int,int)", InViewport, X, Y); }
	void PostRender_Console_Typing(UCanvas* Canvas) { NativeCall<void, UCanvas*>(this, "UConsole.PostRender_Console_Typing(UCanvas*)", Canvas); }
	float GetPosTextLineEnd(UCanvas* Canvas, UFont* Font, const FString& Line) { return NativeCall<float, UCanvas*, UFont*, const FString&>(this, "UConsole.GetPosTextLineEnd(UCanvas*,UFont*,FString&)", Canvas, Font, Line); }
};
