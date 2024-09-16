#pragma once
#include "CoreMinimal.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_TeamSideAffinitiesHolder.generated.h"

USTRUCT()
struct FIGS_TeamSideAffinitiesHolder {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<EIGS_TeamSideEnum> EnemySides;

    UPROPERTY(EditAnywhere)
    TArray<EIGS_TeamSideEnum> FriendlySides;

    BF_FRAMEWORKBASE_API FIGS_TeamSideAffinitiesHolder();
};
