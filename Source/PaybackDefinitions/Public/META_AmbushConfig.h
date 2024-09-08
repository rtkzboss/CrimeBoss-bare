#pragma once
#include "CoreMinimal.h"
#include "META_GangAmbushConfig.h"
#include "META_PoliceAmbushConfig.h"
#include "META_AmbushConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_AmbushConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_PoliceAmbushConfig PoliceChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMETA_GangAmbushConfig GangsChances;
    
    FMETA_AmbushConfig();
};

