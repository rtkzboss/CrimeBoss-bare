#pragma once
#include "CoreMinimal.h"
#include "IGS_AnimClassInfo.generated.h"

class AIGS_WieldableBase;

USTRUCT(BlueprintType)
struct FIGS_AnimClassInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AIGS_WieldableBase> ID;
    
    UPROPERTY(EditAnywhere)
    UClass* ArmsAnimClass;
    
    UPROPERTY(EditAnywhere)
    UClass* CharacterAnimClass;
    
    BF_ANIMATIONS_API FIGS_AnimClassInfo();
};

