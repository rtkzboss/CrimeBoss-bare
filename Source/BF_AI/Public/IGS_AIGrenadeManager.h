#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_AIGrenadeUserMemory.h"
#include "IGS_AIThrowInformation.h"
#include "IGS_ThrowableLiveObjectsHolder.h"
#include "IGS_AIGrenadeManager.generated.h"

class AActor;
class UIGS_AIGrenadeManager;
class UIGS_ThrowableInventoryObject;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_AIGrenadeManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TMap<TSoftClassPtr<UIGS_ThrowableInventoryObject>, FIGS_ThrowableLiveObjectsHolder> ThrowableObjects;
    
    UPROPERTY(EditDefaultsOnly)
    float TickInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float Cooldown;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval CombatRange;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxNavigationRayCastsInOneTick;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxConsideredThrowersInOneTick;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxSimTimeEach;
    
    UPROPERTY(EditDefaultsOnly)
    float SimFrequency;
    
    UPROPERTY(EditDefaultsOnly)
    float ProjectileRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float BestDotProductResult;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxAllowedFriendlyFires;
    
    UPROPERTY(EditDefaultsOnly)
    float GrenadeExplosionRange;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<UIGS_ThrowableInventoryObject>> LethalThrowables;
    
    UPROPERTY(EditDefaultsOnly)
    bool UseOnlyDirectThrow;
    
    UPROPERTY(EditDefaultsOnly)
    float ThrowerToTargetLerp;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval AlternativeTargetDistanceFromTargets;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval ThrowStyleThresholds;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval UpArcValues;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval DownArcValues;
    
    UPROPERTY(EditDefaultsOnly)
    float LongestAnimTime;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform UpThrowOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform DownThrowOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag UpThrowTag;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag DownThrowTag;
    
private:
    UPROPERTY()
    TMap<uint32, FIGS_AIGrenadeUserMemory> m_AvailableCharacters;
    
    UPROPERTY()
    FIGS_AIGrenadeUserMemory m_SelectedCharacter;
    
    UPROPERTY()
    FIGS_AIThrowInformation m_SelectedThrow;
    
    UPROPERTY()
    TArray<TSoftClassPtr<UIGS_ThrowableInventoryObject>> m_ThrowablesOnCooldown;
    
    UPROPERTY()
    TArray<TSoftClassPtr<UIGS_ThrowableInventoryObject>> m_DetectiveThrowablesOnCooldown;
    
public:
    UIGS_AIGrenadeManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void RemoveThrowableCooldown(const TSoftClassPtr<UIGS_ThrowableInventoryObject> inObject, const EIGS_UnitSpecialization inSpecialization, const AActor* inInstigator);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_AIGrenadeManager* Instance(const UObject* inWorldContextObject);
    
};

