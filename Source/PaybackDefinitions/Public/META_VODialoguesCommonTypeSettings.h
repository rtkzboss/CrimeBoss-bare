#pragma once
#include "CoreMinimal.h"
#include "META_VODialoguesCommonTypeSettings.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_VODialoguesCommonTypeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Chance;
    
    FMETA_VODialoguesCommonTypeSettings();
};

