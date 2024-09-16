#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EMETA_RespectLvl.h"
#include "META_MissionID.h"
#include "IGS_ContractID.h"
#include "Templates/SubclassOf.h"
#include "IGS_Contract.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_Contract : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_ContractID> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Price;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EMETA_RespectLvl, float> ContractPriceMultiplierByRespect;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag UnlockCriteriaTag;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag EntitlementTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UMETA_MissionID>> Missions;

    FIGS_Contract();
};
