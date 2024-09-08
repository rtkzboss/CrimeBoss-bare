#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DrawerData.generated.h"

USTRUCT(BlueprintType)
struct PATHFOLLOW_API FDrawerData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDrawIfNotSelected;
    
    UPROPERTY(EditAnywhere)
    bool bDrawIfSelected;
    
    UPROPERTY(EditAnywhere)
    FColor PathColor;
    
    UPROPERTY(EditAnywhere)
    float Thickness;
    
    FDrawerData();
};

