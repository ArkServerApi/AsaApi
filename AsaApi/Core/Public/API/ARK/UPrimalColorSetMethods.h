#pragma once

inline int UPrimalColorSet::GetRandomColorDefinitionIndex(int SetNum, int Level) { return NativeCall<int, int, int>(this, "UPrimalColorSet.GetRandomColorDefinitionIndex(int,int)", SetNum, Level); }
