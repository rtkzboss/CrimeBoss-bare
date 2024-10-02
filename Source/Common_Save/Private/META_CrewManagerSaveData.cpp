#include "META_CrewManagerSaveData.h"

FMETA_CrewManagerSaveData::FMETA_CrewManagerSaveData() {
    (*this).GenericCrewHeisters = TArray<FMETA_GenericCharacterSave>{};
    (*this).UniqueCrewHeisters = TArray<FMETA_HeisterSaveData>{};
    (*this).GenericHeistersOnJob = TArray<FMETA_GenericCharacterSave>{};
    (*this).UniqueHeistersOnJob = TArray<FMETA_HeisterSaveData>{};
    (*this).RemovedHeisters = TArray<FMETA_RemovedCharacter>{};
    (*this).ExcludedHeisters = FGameplayTagContainer();
    (*this).RecoveryInfoOfHeistersInjures = TMap<FMETA_CharacterID, float>{};
    (*this).HeistersMoodResetCounter = TMap<FMETA_CharacterID, int32>{};
    (*this).CounterOfDeathPreventingUsage = TMap<FMETA_CharacterID, int32>{};
    (*this).RevengePool = TSet<EIGS_CharacterID>{};
    (*this).UnlockedCharacters = TSet<EIGS_CharacterID>{};
    (*this).RemainAmountOfCompletedMissionsBeforeUnlock = 0;
    (*this).RemainAmountOfDaysForHealingCharacter = TMap<FMETA_CharacterID, int32>{};
}
