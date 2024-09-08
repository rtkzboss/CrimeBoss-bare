#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_TeamSideEnum.h"
#include "EMETA_CharacterState.h"
#include "EMETA_RespectLvl.h"
#include "CommonHeisterLoadout.h"
#include "MissionStats.h"
#include "CommonHeisterData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FCommonHeisterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag TagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniqGenericId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GenericVariantID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsMaxLeveled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HeisterNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ProgressionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUniqueNetIdRepl UniquePlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCommonHeisterLoadout Loadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Experience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Injuries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_CharacterState CharacterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsBot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomLoadout;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bComesFromMeta;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FMissionStats MissionStats;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_TeamSideEnum KilledByTeamSide;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_GangsterVariationType KilledByGangsterVariation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EMETA_RespectLvl PlayerRespect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MutableVariationIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MissionCutPercentWithModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText CachedPlayerName;
    
    FCommonHeisterData();
};

