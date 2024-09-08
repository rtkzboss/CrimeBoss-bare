#pragma once
#include "CoreMinimal.h"
#include "IGS_BadgesPerHeat.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_BadgesPerHeat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Badge1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Badge2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Badge3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Badge4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Badge5;
    
    FIGS_BadgesPerHeat();
};

