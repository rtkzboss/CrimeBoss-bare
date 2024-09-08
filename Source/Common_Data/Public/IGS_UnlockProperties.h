#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_UnlockProperties.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FIGS_UnlockProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsUnlockable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RequiredValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowIfNotOwned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> UnlockCoverImage;
    
    COMMON_DATA_API FIGS_UnlockProperties();
};

