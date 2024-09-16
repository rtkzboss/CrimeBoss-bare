#include "IGS_AICharactersDevSettings.h"

UIGS_AICharactersDevSettings::UIGS_AICharactersDevSettings() {
    (*this).SwatDataTable = FSoftObjectPath();
    (*this).GangsterDataTable = FSoftObjectPath();
    (*this).HeistersBackupDataTable = FSoftObjectPath();
    (*this).CopDataTable = FSoftObjectPath();
    (*this).GuardDataTable = FSoftObjectPath();
    (*this).PlayerBotDataTable = FSoftObjectPath(TEXT("/Game/00_Main/Core/AI/Characters/PlayerBot/Settings/DT_PlayerBotDatabase.DT_PlayerBotDatabase"), TEXT(""));
    (*this).SniperDataTable = FSoftObjectPath();
    (*this).ShielderDataTable = FSoftObjectPath();
    (*this).HeavyDataTable = FSoftObjectPath();
    (*this).DetectiveDataTable = FSoftObjectPath();
}

