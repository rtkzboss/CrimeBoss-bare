#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_DialogueGroupCharacterHolder.h"
#include "EIGS_DialogueBlacklistOption.h"
#include "IGS_DialogueLevelName.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_DialogueLevelName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag LevelTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> LevelNames;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_DialogueGroupCharacterHolder> LevelCharacters;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_DialogueBlacklistOption BlacklistOption;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> BlacklistLevelNames;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool BlacklistAlwaysEnabled;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool BlacklistDefaultLevelsPreload;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseDefaultLevelsPreload;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseDefaultCharactersPreload;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_DialogueGroupCharacterHolder DefaultPlanner;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_DialogueGroupCharacterHolder SecondPlanner;

    FIGS_DialogueLevelName();
};
