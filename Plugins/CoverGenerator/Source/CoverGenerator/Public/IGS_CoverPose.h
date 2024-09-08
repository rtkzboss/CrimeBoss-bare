#pragma once
#include "CoreMinimal.h"
#include "IGS_ListWrapper.h"
#include "IGS_CoverPose.generated.h"

USTRUCT()
struct COVERGENERATOR_API FIGS_CoverPose {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FIGS_ListWrapper> ShootRanges;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FIGS_ListWrapper> LeftSideStepShootRanges;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FIGS_ListWrapper> RightSideStepShootRanges;
    
    FIGS_CoverPose();
};

