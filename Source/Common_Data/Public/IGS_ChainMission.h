#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EIGS_ChainDifficulty.h"
#include "EIGS_ChainType.h"
#include "EIGS_MetaCutsceneNodeAction.h"
#include "IGS_ChainContractID.h"
#include "IGS_ChainCrewID.h"
#include "IGS_ChainMissionStep.h"
#include "Templates/SubclassOf.h"
#include "IGS_ChainMission.generated.h"

class UBinkMediaPlayer;
class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ChainMission : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_ChainContractID> ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ChainType Type;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ChainDifficulty Difficulty;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> MenuImage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag UnlockCriteriaTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag EntitlementTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag ContractSelectedVOType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText IntroCutscene;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBinkMediaPlayer* IntroMovie;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText FailCutsceneOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBinkMediaPlayer* FailMovieOverride;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText OutroCutscene;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_MetaCutsceneNodeAction OutroCutsceneChoiceForce;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBinkMediaPlayer* OutroMovie;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_ChainCrewID> CrewID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_ChainMissionStep> ChainStep;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGameplayTag> Star1Rewards;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGameplayTag> Star2Rewards;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGameplayTag> Star3Rewards;

    FIGS_ChainMission();
};
