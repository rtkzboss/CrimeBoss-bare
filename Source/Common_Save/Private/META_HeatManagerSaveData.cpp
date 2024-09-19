#include "META_HeatManagerSaveData.h"
#include "Templates/SubclassOf.h"

FMETA_HeatManagerSaveData::FMETA_HeatManagerSaveData() {
    (*this).DaysLeftForTheHeatRevision = 0;
    (*this).HeatState = EMETA_Heat::VeryLow;
    (*this).HeatValue = 0.000000000e+00f;
    (*this).PoliceInvestigationValue = 0.000000000e+00f;
    (*this).SheriffTargetGang = EMETA_Gang::None;
    (*this).GangsAttacksCounter = TMap<EMETA_Gang, int32>{};
    (*this).DetectivesPool = TArray<TSubclassOf<UMETA_DetectiveID>>{};
    (*this).ActiveDetectives = TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo>{};
    (*this).UsedInvestigationValuesForDetectives = TSet<int32>{};
    (*this).DeadDetectives = TArray<TSubclassOf<UMETA_DetectiveID>>{};
    (*this).InvestigationEffects = TMap<FGameplayTag, int32>{};
    (*this).HeatEffects = TMap<FGameplayTag, int32>{};
}
