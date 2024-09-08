#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "META_PlanningBoardItemConnectionData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FMETA_PlanningBoardItemConnectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag ToItemGameplayTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FromSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> FromConnectionStaticMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ToSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> ToConnectionStaticMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ThreadColor;
    
    FMETA_PlanningBoardItemConnectionData();
};

