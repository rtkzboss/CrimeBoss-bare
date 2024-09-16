#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_AimType.h"
#include "IGS_SniperAimData.generated.h"

class AActor;
class AIGS_SniperPoint;

USTRUCT()
struct FIGS_SniperAimData {
    GENERATED_BODY()
public:
    UPROPERTY()
    EIGS_AimType AimType;

    UPROPERTY()
    AActor* AimActor;

    UPROPERTY()
    FVector AimPoint;

    UPROPERTY()
    AIGS_SniperPoint* SniperPoint;

    BF_AI_API FIGS_SniperAimData();
};
