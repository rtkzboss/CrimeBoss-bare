#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "ShoutScanData.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EIGS_LeanSide.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_MantleType.h"
#include "IGS_AimGameCharacterChangedEventDelegate.h"
#include "IGS_LeanChangedEventDelegate.h"
#include "IGS_MantleTypeChangedEventDelegate.h"
#include "IGS_PlayerWorldTracingComponent.generated.h"

class AActor;
class AIGS_GameCharacterFramework;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerWorldTracingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_AimGameCharacterChangedEvent OnAimGameCharacterChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_LeanChangedEvent OnLeanChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_MantleTypeChangedEvent OnMantleTypeChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TrackingDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistanceToLean;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LeanSphereCheckRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LeanSideCheckOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LeanUpCheckOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CapsuleZSizeAdd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CapsuleCheckZOffsetUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MantleDownSweepOffsetMult;
    
    UPROPERTY()
    FShoutScanData m_ShoutScanData;
    
public:
    UIGS_PlayerWorldTracingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsAimingAtFriendly(bool inNeedsAlive) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAimingAtEnemyBounds() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAimingAtEnemy(bool inNeedsAlive) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAimCharacterAlive() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_MantleType GetCurrentMantleType() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentMantleLocation() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_LeanSide GetCurrentLeanSide() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAimPoint() const;
    
    UFUNCTION(BlueprintPure)
    EIGS_TeamSideEnum GetAimCharacterTeamside() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETeamAttitude::Type> GetAimCharacterAttitude() const;
    
    UFUNCTION(BlueprintPure)
    AIGS_GameCharacterFramework* GetAimCharacter() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAimActor() const;
    
    UFUNCTION(BlueprintPure)
    bool CanMantle() const;
    
    UFUNCTION(BlueprintPure)
    bool CanLean() const;
    
};

