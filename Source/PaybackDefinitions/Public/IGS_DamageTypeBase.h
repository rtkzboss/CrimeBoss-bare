#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "AttributeSet.h"
#include "GameplayEffect.h"
#include "EIGS_DamageStrengthType.h"
#include "EIGS_DamageType.h"
#include "Templates/SubclassOf.h"
#include "IGS_DamageTypeBase.generated.h"

UCLASS()
class PAYBACKDEFINITIONS_API UIGS_DamageTypeBase : public UDamageType {
    GENERATED_BODY()
public:
    UIGS_DamageTypeBase();

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_DamageType DamageType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeisterReceiveDamageMult;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AmbientReceiveDamageMult;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShouldConsiderBodyParts;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShouldBeAffectedByDamageLimiter;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIgnoresPawns;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bInstantRagdoll;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_DamageStrengthType StrengthType;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistanceFalloff;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAppliesGameplayEffect;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GameplayEffectDuration;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGameplayEffect> GameplayEffectToApply;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayAttribute AttributeToCaptureForDurationMultiply;

};
