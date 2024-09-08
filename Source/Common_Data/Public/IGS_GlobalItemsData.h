#pragma once
#include "CoreMinimal.h"
#include "IGS_CommonItemData.h"
#include "IGS_GlobalItemsData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_GlobalItemsData : public FIGS_CommonItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> HUDIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText HUDIconText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxCount;
    
    FIGS_GlobalItemsData();
};

