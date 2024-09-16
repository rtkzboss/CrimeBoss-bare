#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_VariablesScope.h"
#include "META_VariableScopeDefinition.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_VariableScopeDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_VariablesScope VariablesScope;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Variable;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag variableTag;

    FMETA_VariableScopeDefinition();
};
