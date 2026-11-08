#pragma once


struct FLinkedZoneSpawnVolumeEntry
{
	ANPCZoneSpawnVolume* LinkedZoneSpawnVolume;
	TArray<AActor*, TSizedDefaultAllocator<32> > ZoneSpawnVolumeFloors;
	TArray<AActor*, TSizedDefaultAllocator<32> > ZoneSpawnVolumeIgnoreCeilings;
	TArray<FName, TSizedDefaultAllocator<32> > ZoneSpawnVolumeIgnoreCeilingTags;
	TArray<FName, TSizedDefaultAllocator<32> > ZoneSpawnVolumeFloorTags;
	float EntryWeight;
};