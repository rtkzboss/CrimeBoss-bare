#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterLeaningDirectionEnum.h"
#include "EIGS_HealthState.h"
#include "IGS_HitInfo.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EIGS_CharacterHealthAnimState.h"
#include "EIGS_LocomotionType.h"
#include "EIGS_SpecialDeathNotifyState.h"
#include "IGS_CharacterAnimInstanceProxy.h"
#include "IGS_FootIKAnimInstance.h"
#include "IGS_CharacterAnimInstance.generated.h"

class AActor;
class AIGS_IntelligentGameCharacter;
class UIGS_HeadAnimInstance;
class UIGS_UPlayerAnimationComponent;
class UPrimitiveComponent;

UCLASS(NonTransient)
class BF_ANIMATIONS_API UIGS_CharacterAnimInstance : public UIGS_FootIKAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UseBlueprintDeathImplementation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator ViewRotation;
    
    UPROPERTY(BlueprintReadOnly)
    bool DeathAnimationEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MeshRootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AimAtBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AimDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator DesiredWorldRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AimAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LookAtEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterLeaningDirectionEnum LeaningDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_SpecialDeathNotifyState SpecialDeathNotifyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Jump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Crouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsMoving;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float SlopeNormalized;
    
    UPROPERTY(BlueprintReadOnly)
    EIGS_CharacterHealthAnimState CharacterAnimHealthState;
    
    UPROPERTY(BlueprintReadOnly)
    float LeftHandIKAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float RightHandIKAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ReferencePose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_LocomotionType LocomotionType;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LODLevel;
    
    UPROPERTY(BlueprintReadOnly)
    bool LOD1Plus;
    
    UPROPERTY(BlueprintReadOnly)
    bool LOD2Plus;
    
    UPROPERTY(BlueprintReadOnly)
    bool LOD3Plus;
    
    UPROPERTY(BlueprintReadOnly)
    bool ReduceWork;
    
    UPROPERTY(BlueprintReadWrite)
    float PauseAnimsDelayThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_HealthState HealthState;
    
    UPROPERTY(BlueprintReadOnly)
    float PreDeathVelocity;
    
protected:
    UPROPERTY(Transient)
    FIGS_CharacterAnimInstanceProxy CharacterAnimInstanceProxy;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<UIGS_HeadAnimInstance> OptionalHeadAnimInstance;
    
public:
    UIGS_CharacterAnimInstance();

    UFUNCTION(BlueprintImplementableEvent)
    void OnDeathAnimationEnded_Event();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeath(AIGS_IntelligentGameCharacter* inCharacter, UIGS_UPlayerAnimationComponent* InAnimationComponent, const FIGS_HitInfo& inHitInfo);
    
    UFUNCTION()
    void OnComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCharacterFell(float inFallHeight);
    
public:
    UFUNCTION(BlueprintPure)
    UIGS_HeadAnimInstance* GetHeadAnimInstance() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void EnterRadialDamageRagdollState(const FIGS_HitInfo& inHitInfo, float inImpulse, bool inIsVelocityChange);
    
};

