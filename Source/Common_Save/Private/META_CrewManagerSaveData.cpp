#include "META_CrewManagerSaveData.h"

FMETA_CrewManagerSaveData::FMETA_CrewManagerSaveData() {
    (*this).GenericCrewHeisters = {};
    (*this).UniqueCrewHeisters = {};
    (*this).GenericHeistersOnJob = {};
    (*this).UniqueHeistersOnJob = {};
    (*this).RemovedHeisters = {};
    (*this).RecoveryInfoOfHeistersInjures = {};
    (*this).HeistersMoodResetCounter = {};
    (*this).CounterOfDeathPreventingUsage = {};
    (*this).RevengePool = {};
    (*this).UnlockedCharacters = {};
    (*this).RemainAmountOfCompletedMissionsBeforeUnlock = 0;
    (*this).RemainAmountOfDaysForHealingCharacter = {};
}
