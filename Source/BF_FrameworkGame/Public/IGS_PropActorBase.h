#pragma once
#include "CoreMinimal.h"
#include "IGS_HasObjectStatusInterface.h"
#include "IGS_HitInfo.h"
#include "GameFramework/Actor.h"
#include "IGS_PropActorBase.generated.h"

class UIGS_ObjectStatus;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_PropActorBase : public AActor, public IIGS_HasObjectStatusInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_ObjectStatus* ObjectStatus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultNetUpdateFrequency;
    
public:
    AIGS_PropActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void OnDeath(float CurrentHealth, float CurrentShield, float HealthChange, float ShieldChange, const FIGS_HitInfo& HitInfo);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDamaged(float CurrentHealth, float CurrentShield, float HealthChange, float ShieldChange, const FIGS_HitInfo& HitInfo);
    

    // Fix for true pure virtual functions not being implemented
};

