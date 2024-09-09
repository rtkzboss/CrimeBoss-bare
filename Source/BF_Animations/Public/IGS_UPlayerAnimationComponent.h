#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_AimAnimationInfo.h"
#include "IGS_AnimClassInfo.h"
#include "IGS_HitReactionParams.h"
#include "IGS_HolsterAnimationInfo.h"
#include "IGS_UPlayerAnimationComponent.generated.h"

class AIGS_WieldableBase;
class UAnimMontage;
class UDataTable;
class UIGS_BreachingDatabase;
class UIGS_DownStateDatabase;
class UPhysicalAnimationComponent;
class UPlayerDeathAnimationDatabase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_ANIMATIONS_API UIGS_UPlayerAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_UPlayerAnimationComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnWeaponChange() const;
    
public:
    UPROPERTY(EditAnywhere)
    UClass* UnarmedArmsAnimClass;
    
    UPROPERTY(EditAnywhere)
    UClass* UnarmedCharacterClass;
    
    UPROPERTY(EditAnywhere)
    TArray<FIGS_AnimClassInfo> AnimClassInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_HitReactionParams HitReactionSettings;
    
    UPROPERTY(EditAnywhere)
    float CombatTimerAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UnarmedUnholsterTime;
    
    UPROPERTY(EditAnywhere)
    float SkipAnimationHolsterTime;
    
    UPROPERTY(EditAnywhere)
    UDataTable* FirstPersonAnimations;
    
    UPROPERTY(EditAnywhere)
    UDataTable* FirstPersonThrowablesAnimations;
    
    UPROPERTY(EditAnywhere)
    UDataTable* FirstPersonCarryableItemsAnimations;
    
    UPROPERTY(EditAnywhere)
    UDataTable* FirstPersonMeleeDatabase;
    
    UPROPERTY(EditAnywhere)
    UDataTable* ThirdPersonAnimations;
    
    UPROPERTY(EditAnywhere)
    UDataTable* ThirdPersonMeleeAnimDatabase;
    
    UPROPERTY(EditAnywhere)
    UDataTable* ThirdPersonThrowablesDatabase;
    
    UPROPERTY(EditAnywhere)
    UDataTable* ThirdPersonCarryablesDatabase;
    
    UPROPERTY(EditAnywhere)
    UDataTable* PatrolAnimations;
    
    UPROPERTY(EditAnywhere)
    UDataTable* ReactionAnimations;
    
    UPROPERTY(EditAnywhere)
    UDataTable* MeleePushAnimations;
    
    UPROPERTY(EditAnywhere)
    UDataTable* CombatAnimations;
    
    UPROPERTY(EditAnywhere)
    UPlayerDeathAnimationDatabase* PlayerDeathAnimationsData;
    
    UPROPERTY(EditAnywhere)
    UDataTable* AvoidanceAnimationsTable;
    
    UPROPERTY(EditAnywhere)
    UIGS_DownStateDatabase* DownStateDatabase;
    
    UPROPERTY(EditAnywhere)
    UDataTable* SpawnAnimsTable;
    
    UPROPERTY(EditAnywhere)
    UDataTable* CarAnimsTable;
    
    UPROPERTY(EditAnywhere)
    UIGS_BreachingDatabase* BreachingDatabase;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* SmartLink_OpenDoor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* SmartLink_Jump_OverObstacle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AimInSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AimOutSpeed;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPhysicalAnimationComponent* m_Physical_animation;
    
    UPROPERTY()
    FIGS_AimAnimationInfo m_AimAnimationInfo;
    
    UPROPERTY()
    FIGS_HolsterAnimationInfo m_HolsterAnimationInfo;
    
    UPROPERTY()
    bool FirstEquip;
    
    UPROPERTY()
    bool IsUsingSetableAnimClass;
    
    UPROPERTY()
    bool IsUsingTPPSetableAnimClass;
    
    UPROPERTY(EditAnywhere)
    float SlideTransitionEndDuration;
    
protected:
    UPROPERTY(Transient)
    AIGS_WieldableBase* m_WieldableBase;
    
};

