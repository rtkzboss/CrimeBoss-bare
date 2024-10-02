#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "IGS_DeathAnimationsSet.h"
#include "IGS_DeathSpecialAnimations.h"
#include "IGS_MeleeDeathAnimationsSet.h"
#include "PlayerDeathAnimationDatabase.generated.h"

class UPhysicalMaterial;

UCLASS()
class BF_ANIMATIONS_API UPlayerDeathAnimationDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPlayerDeathAnimationDatabase();

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet FrontInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet RightInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet BackInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet LeftInfo;

    UPROPERTY(EditAnywhere)
    FVector2D BodyPlayRateRange;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchFrontInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchRightInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchBackInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchLeftInfo;

    UPROPERTY(EditAnywhere)
    FVector2D CrouchBodyPlayRateRange;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet FrontHeadInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet RightHeadInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet BackHeadInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet LeftHeadInfo;

    UPROPERTY(EditAnywhere)
    FVector2D HeadPlayRateRange;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeadFrontInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeadRightInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeadBackInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeadLeftInfo;

    UPROPERTY(EditAnywhere)
    FVector2D CrouchHeadPlayRateRange;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet RunFrontInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet RunRightInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet RunBackInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet RunLeftInfo;

    UPROPERTY(EditAnywhere)
    FVector2D RunPlayRateRange;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet ExplosionInfo;

    UPROPERTY(EditAnywhere)
    FVector2D ExplosionPlayRateRange;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet StandHeavyFrontInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet StandHeavyRightInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet StandHeavyBackInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet StandHeavyLeftInfo;

    UPROPERTY(EditAnywhere)
    FVector2D StandHeavyPlayRateRange;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeavyFrontInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeavyRightInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeavyBackInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet CrouchHeavyLeftInfo;

    UPROPERTY(EditAnywhere)
    FVector2D CrouchHeavyPlayRateRange;

    UPROPERTY(EditAnywhere)
    FIGS_MeleeDeathAnimationsSet BluntFrontInfo;

    UPROPERTY(EditAnywhere)
    FIGS_MeleeDeathAnimationsSet BluntRightInfo;

    UPROPERTY(EditAnywhere)
    FIGS_MeleeDeathAnimationsSet BluntBackInfo;

    UPROPERTY(EditAnywhere)
    FIGS_MeleeDeathAnimationsSet BluntLeftInfo;

    UPROPERTY(EditAnywhere)
    FVector2D BluntPlayRateRange;

    UPROPERTY(EditAnywhere)
    FIGS_MeleeDeathAnimationsSet CutFrontInfo;

    UPROPERTY(EditAnywhere)
    FIGS_MeleeDeathAnimationsSet CutRightInfo;

    UPROPERTY(EditAnywhere)
    FIGS_MeleeDeathAnimationsSet CutBackInfo;

    UPROPERTY(EditAnywhere)
    FIGS_MeleeDeathAnimationsSet CutLeftInfo;

    UPROPERTY(EditAnywhere)
    FVector2D CutPlayRateRange;

    UPROPERTY(EditAnywhere)
    FIGS_MeleeDeathAnimationsSet SpecialBoxerFrontInfo;

    UPROPERTY(EditAnywhere)
    FIGS_MeleeDeathAnimationsSet SpecialBoxerRightInfo;

    UPROPERTY(EditAnywhere)
    FIGS_MeleeDeathAnimationsSet SpecialBoxerBackInfo;

    UPROPERTY(EditAnywhere)
    FIGS_MeleeDeathAnimationsSet SpecialBoxerLeftInfo;

    UPROPERTY(EditAnywhere)
    FVector2D SpecialBoxerPlayRateRange;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet StabFrontInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet StabRightInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet StabBackInfo;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet StabLeftInfo;

    UPROPERTY(EditAnywhere)
    FVector2D StabPlayRateRange;

    UPROPERTY(EditAnywhere)
    FIGS_DeathAnimationsSet DownstateInfo;

    UPROPERTY(EditAnywhere)
    FVector2D DownstatePlayRateRange;

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

};
