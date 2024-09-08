#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_HeisterLoadout.h"
#include "META_PerkData.h"
#include "IGS_CharacterPanelDataStruct.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_CharacterPanelDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 Health;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Revives;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MissionCut;
    
    UPROPERTY(BlueprintReadWrite)
    float XP;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FGameplayTag> PerkTags;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FMETA_PerkData> Perks;
    
    UPROPERTY(BlueprintReadWrite)
    FMETA_HeisterLoadout Loadout;
    
    FIGS_CharacterPanelDataStruct();
};

