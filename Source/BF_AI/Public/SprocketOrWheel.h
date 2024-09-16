#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SkinnedMeshComponent.h"
#include "SprocketOrWheel.generated.h"

USTRUCT(BlueprintType)
struct FSprocketOrWheel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName BoneName;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EAxis::Type> SpinAxis;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SpeedMultiplier;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TEnumAsByte<EBoneSpaces::Type> BoneSpace;

    BF_AI_API FSprocketOrWheel();
};
