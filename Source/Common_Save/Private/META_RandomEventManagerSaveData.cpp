#include "META_RandomEventManagerSaveData.h"
#include "Templates/SubclassOf.h"

FMETA_RandomEventManagerSaveData::FMETA_RandomEventManagerSaveData() {
    (*this).RandEventCategoriesInfo = TMap<EMETA_RandEventCategory, FMETA_RandEventCategoryInfo>{};
    (*this).CurrentPartnersRandEvents = TMap<EMETA_Partner, FGameplayTag>{};
    (*this).ReadyForActivationEvents = TMap<EMETA_Partner, FGameplayTag>{};
    (*this).EventsSpecificCooldown = TMap<FGameplayTag, int32>{};
    (*this).SelectedGangForEvent = TMap<FGameplayTag, EMETA_Gang>{};
    (*this).EventRewards = TMap<FGameplayTag, FMETA_RandEventRewardRuntimeDataStorage>{};
    (*this).CrewEventMissions = TMap<FGameplayTag, TSubclassOf<UMETA_MissionID>>{};
    (*this).CalculatedCostForGenericEvents = TMap<FGameplayTag, int32>{};
    (*this).CrewEventMissionsPrices = TMap<TSubclassOf<UMETA_MissionID>, FGameplayTag>{};
    (*this).CrewEventsAndTheirGraphs = TMap<FGameplayTag, TSoftObjectPtr<UMETA_BaseStoryGraphManager>>{};
    (*this).HeistersStateChangesHistory = TMap<FMETA_CharacterID, FMETA_HeisterStateChangeHistory>{};
    (*this).MissingHeistersEventsData = TMap<FMETA_CharacterID, FMETA_MissingHeisterEventData>{};
    (*this).CooldownCounterForFuneralOfGenericHeisters = 0;
    (*this).UnfulfilledEvents = TMap<FGameplayTag, bool>{};
}
