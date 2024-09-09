#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EMETA_ConditionExprOperator.h"
#include "EMETA_HeisterActionScope.h"
#include "EMETA_HeistersSourceEvent.h"
#include "META_BaseAction.h"
#include "META_HeisterAction.generated.h"

class UMETA_BaseHeisterCondition;

UCLASS(Abstract, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_HeisterAction : public UMETA_BaseAction {
    GENERATED_BODY()
public:
    UMETA_HeisterAction();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_HeistersSourceEvent HeistersSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_HeisterActionScope ActionScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AmountOfHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ConditionExprOperator ConditionOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxAmountOfSortedHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IncludeBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IncludeDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UMETA_BaseHeisterCondition*> SortingConditions;
    
};

