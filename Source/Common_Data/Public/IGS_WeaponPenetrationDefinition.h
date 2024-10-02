#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponPenetrationDefinition.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponPenetrationDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Penetrates;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> DamageMultArray;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxPenetrationRange;

    FIGS_WeaponPenetrationDefinition();
};
