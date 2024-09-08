#pragma once
#include "CoreMinimal.h"
#include "META_HeisterStatisticData.h"
#include "META_CrewStatistic.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_CrewStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HiredGenericHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LostGenericHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HiredUniqueHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PromotedToVeteran;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PromotedToElite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LostUniqueHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DeserterUniqueHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DeserterHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ArrestedHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissingUniqueHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissingHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMETA_HeisterStatisticData> HeistersStatisticData;
    
    FMETA_CrewStatistic();
};

