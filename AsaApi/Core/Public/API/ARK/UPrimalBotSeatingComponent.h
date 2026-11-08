#pragma once
#include "BulkForward.h"
#include "GameplayForward.h"
#include "UActorComponent.h"

struct UPrimalBotSeatingComponent : UActorComponent
{
public:
	UPrimalBotSeatingComponent() = delete;
	~UPrimalBotSeatingComponent() = delete;
	UPrimalBotSeatingComponent(const UPrimalBotSeatingComponent&) = delete;
	UPrimalBotSeatingComponent& operator=(const UPrimalBotSeatingComponent&) = delete;
	static UClass* StaticClass() { return AsaApi::ResolveClass("UPrimalBotSeatingComponent"); }
	static UClass* GetPrivateStaticClass() { return AsaApi::ResolveClass("UPrimalBotSeatingComponent"); }



	void InitilizeSeatingComponent() { NativeCall<void>(this, "UPrimalBotSeatingComponent.InitilizeSeatingComponent()"); }
	void ClearAllSeats() { NativeCall<void>(this, "UPrimalBotSeatingComponent.ClearAllSeats()"); }
	bool HasAvailableSeat() { return NativeCall<bool>(this, "UPrimalBotSeatingComponent.HasAvailableSeat()"); }
	void InitializeComponent() { NativeCall<void>(this, "UPrimalBotSeatingComponent.InitializeComponent()"); }
	int GetNumTakenSeats() { return NativeCall<int>(this, "UPrimalBotSeatingComponent.GetNumTakenSeats()"); }
	bool IsSeatingSpotFree(int SeatNumber) { return NativeCall<bool, int>(this, "UPrimalBotSeatingComponent.IsSeatingSpotFree(int)", SeatNumber); }

	BitFieldValue<bool, unsigned char> bIsInitialized() { return { this, "UPrimalBotSeatingComponent.bIsInitialized"}; }

	TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>& SeatedBotField() { return *GetNativePointerField<TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>*>(this, "UPrimalBotSeatingComponent.SeatedBot"); }
	TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>& ClaimerField() { return *GetNativePointerField<TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>*>(this, "UPrimalBotSeatingComponent.Claimer"); }
	TArray<TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& BotsPerSeatField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "UPrimalBotSeatingComponent.BotsPerSeat"); }
	TArray<TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >& ClaimerPerSeatField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>, TSizedDefaultAllocator<32> >*>(this, "UPrimalBotSeatingComponent.ClaimerPerSeat"); }
	TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr> GetSeatedBot(int SeatNumber) { using AsaReturnType = TWeakObjectPtr < APrimalBotCharacter , FWeakObjectPtr >; alignas(AsaReturnType) unsigned char AsaReturnBytes[sizeof(AsaReturnType)]; auto* AsaReturnPointer = reinterpret_cast<AsaReturnType*>(AsaReturnBytes); auto* AsaReturnedPointer = NativeCall<AsaReturnType*, AsaReturnType*, int>(this, "UPrimalBotSeatingComponent.GetSeatedBot(int)", AsaReturnPointer, SeatNumber); if (AsaReturnedPointer != AsaReturnPointer) throw std::runtime_error("Unexpected native result buffer"); std::unique_ptr<AsaReturnType, void(*)(AsaReturnType*)> AsaReturnOwner(std::launder(AsaReturnPointer), [](AsaReturnType* value) { value->~AsaReturnType(); }); return MoveTemp(*AsaReturnOwner); }
	bool HasAvailableSeatForBot(TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr> ForBot) { return NativeCall<bool, TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>>(this, "UPrimalBotSeatingComponent.HasAvailableSeatForBot(TWeakObjectPtr<APrimalBotCharacter,FWeakObjectPtr>)", ForBot); }
	void ClearBotFromSeats(TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr> Bot) { NativeCall<void, TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>>(this, "UPrimalBotSeatingComponent.ClearBotFromSeats(TWeakObjectPtr<APrimalBotCharacter,FWeakObjectPtr>)", Bot); }
	void AddBotToSeat(TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr> Bot, int SeatNumber) { NativeCall<void, TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>, int>(this, "UPrimalBotSeatingComponent.AddBotToSeat(TWeakObjectPtr<APrimalBotCharacter,FWeakObjectPtr>,int)", Bot, SeatNumber); }
	bool IsSeatingSpotFreeForBot(TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr> ForBot, int SeatNumber) { return NativeCall<bool, TWeakObjectPtr<APrimalBotCharacter, FWeakObjectPtr>, int>(this, "UPrimalBotSeatingComponent.IsSeatingSpotFreeForBot(TWeakObjectPtr<APrimalBotCharacter,FWeakObjectPtr>,int)", ForBot, SeatNumber); }
};
