#include "META_AmbushMissionSave.h"
#include "EIGS_LightingScenarioType.h"
#include "EMETA_JobResult.h"
#include "IGS_InventoryObjectFramework.h"
#include "Templates/SubclassOf.h"

FMETA_AmbushMissionSave::FMETA_AmbushMissionSave() {
    (*this).InstigatorMissionID = nullptr;
    (*this).InstigatorMissionTileID = FGameplayTag();
    (*this).Parameters = TMap<FGameplayTag, int32>{};
    (*this).PreviousFPSMissionData.MissionResult = EMETA_JobResult::Success;
    (*this).PreviousFPSMissionData.Loot = TArray<TSubclassOf<UIGS_InventoryObjectFramework>>{};
    (*this).PreviousFPSMissionData.CollectedLoot = TMap<FGameplayTag, int32>{};
    (*this).PreviousFPSMissionData.MoneyCollected = 0;
    (*this).PreviousFPSMissionData.CivilCasualties = 0;
    (*this).PreviousFPSMissionData.PoliceCasualties = 0;
    (*this).PreviousFPSMissionData.SwatCasualties = 0;
    (*this).PreviousFPSMissionData.GangsterCasualties = 0;
    (*this).PreviousFPSMissionData.EnemiesRemaining = 0;
    (*this).PreviousFPSMissionData.BackupHeistersCasualties = 0;
    (*this).PreviousFPSMissionData.AlarmTriggered = false;
    (*this).PreviousFPSMissionData.WantedStarts = 0;
    (*this).PreviousFPSMissionData.BagsCollected = 0;
    (*this).PreviousFPSMissionData.LightingScenarioType = EIGS_LightingScenarioType::Morning;
}
