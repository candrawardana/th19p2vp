#pragma once
#include <Windows.h>

typedef DWORD SeedType;
void InjectSeedStates();
void CopyToOriginalSeeds(SeedType seeds[4]);
void CopyFromOriginalSeeds(SeedType seeds[4]);
void CopyFromCustomSetting(DWORD cfg[3]);
void CopyToCustomSetting(DWORD cfg[3]);
void GenNextSeeds(SeedType seeds[4], SeedType seeds_out[4],int n);
