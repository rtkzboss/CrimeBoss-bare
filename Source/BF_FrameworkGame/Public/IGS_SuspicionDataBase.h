#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EIGS_ReactionTypeTags.h"
#include "EIGS_AmbientReaction.h"
#include "EIGS_OffenceType.h"
#include "IGS_SuspicionDataBase.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_SuspicionDataBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag OffenceTag;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_OffenceType OffenceType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OffenceNoticedBy;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Strikes;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsHeavy;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_AmbientReaction AmbientReaction;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 AmbientReactionScope;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> AmbientDialogueOverrideIDs;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText BlameText;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText RadioReactionDialogueOverrideID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> ReactionDialogueIDs;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_ReactionTypeTags ReactionType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHasMaxDistance;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxDetectionDistance;

    FIGS_SuspicionDataBase();
};
