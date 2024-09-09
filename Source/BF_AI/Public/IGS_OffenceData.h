#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EIGS_CivOffenceReactionBehavior.h"
#include "EIGS_OffenceReactionType.h"
#include "IGS_OffenceData.generated.h"

UCLASS(BlueprintType)
class UIGS_OffenceData : public UObject {
    GENERATED_BODY()
public:
    UIGS_OffenceData();

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_OffenceReactionType OffenceReactionType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_CivOffenceReactionBehavior ReactionBehavior;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UObject* OffenceObject;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector OffencePosition;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsReactionForced;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Strikes;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTag BlameTag;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText DialogueID;
    
};

