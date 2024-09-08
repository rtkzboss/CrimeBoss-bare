#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_DeathAnimationsSet.h"
#include "IGS_DeathSpecialAnimations.h"
#include "PlayerDeathAnimationDatabase.generated.h"

class UPhysicalMaterial;

UCLASS()
class BF_ANIMATIONS_API UPlayerDeathAnimationDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet FrontInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet RightInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet BackInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet LeftInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchFrontInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchRightInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchBackInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchLeftInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet FrontHeadInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet RightHeadInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet BackHeadInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet LeftHeadInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeadFrontInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeadRightInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeadBackInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeadLeftInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet RunFrontInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet RunRightInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet RunBackInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet RunLeftInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet ExplosionInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet StandHeavyFrontInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet StandHeavyRightInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet StandHeavyBackInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet StandHeavyLeftInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeavyFrontInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeavyRightInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeavyBackInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeavyLeftInfo;
    
    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet DownstateInfo;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* HeadPhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<FIGS_DeathSpecialAnimations> DeathSpecialtAnimationInfo;
    
    UPROPERTY(EditAnywhere)
    float RunVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float SleepBodyInstanceVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float ThresholdIncrement;
    
    UPROPERTY(EditAnywhere)
    float ThresholdIncrementLimit;
    
    UPROPERTY(EditAnywhere)
    float WakeTimeRB;
    
    UPROPERTY(EditAnywhere)
    float SleepTimeRB;
    
    UPROPERTY(EditAnywhere)
    float FinishingImpulseStrength;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> NotifyBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> NotifyBonesToSleep;
    
    UPROPERTY(EditAnywhere)
    FName ConstrainProfileName;
    
    UPROPERTY(EditAnywhere)
    FName ZiptieConstrainProfileName;
    
    UPROPERTY(EditAnywhere)
    float VehicleVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float RagdollVelocityLimit;
    
    UPROPERTY(EditAnywhere)
    float DoorCollisionPushVelocity;
    
    UPROPERTY(EditAnywhere)
    float EventInterval;
    
    UPROPERTY(EditAnywhere)
    int32 MaxEventCalls;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SoundNotifyBones;
    
    UPlayerDeathAnimationDatabase();

};

