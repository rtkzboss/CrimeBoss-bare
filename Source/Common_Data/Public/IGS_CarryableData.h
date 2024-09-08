#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_LootSize.h"
#include "IGS_WieldableBaseData.h"
#include "IGS_CarryableData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_CarryableData : public FIGS_WieldableBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseZoomMagnification;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsLoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_LootSize LootSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag LootCategoryTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> ClassToDrop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag PlacementType;
    
    FIGS_CarryableData();
};

