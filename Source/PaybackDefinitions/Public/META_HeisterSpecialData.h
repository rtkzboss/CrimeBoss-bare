#pragma once
#include "CoreMinimal.h"
#include "EMETA_ItemQuality.h"
#include "META_HeisterSpecialData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_HeisterSpecialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Surname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality HeisterQuality;
    
    FMETA_HeisterSpecialData();
};

