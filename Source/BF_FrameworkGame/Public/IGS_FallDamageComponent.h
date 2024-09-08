#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_FallDamageComponent.generated.h"

class UCurveFloat;
class UIGS_DamageTypeFallDamage;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_FallDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAddMaxStepHeightToFellHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InstaDeathDamage;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float StartedFallingZ;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsFalling;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bNextFallIsIgnored;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bFallDamagedEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* FallDamageCurve;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSubclassOf<UIGS_DamageTypeFallDamage> FallDamageType;
    
public:
    UIGS_FallDamageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFallDamageEnabled(bool inEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsNextFallDamageIgnored() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFallDamageEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void IgnoreNextFall();
    
};

