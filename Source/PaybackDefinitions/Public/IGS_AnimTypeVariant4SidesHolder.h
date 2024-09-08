#pragma once
#include "CoreMinimal.h"
#include "EIGS_AIMontageType.h"
#include "IGS_AnimTypeVariant4SidesHolder.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_AnimTypeVariant4SidesHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_AIMontageType MontageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 FrontMontageVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 BackMontageVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 LeftMontageVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 RightMontageVariant;
    
    FIGS_AnimTypeVariant4SidesHolder();
};

