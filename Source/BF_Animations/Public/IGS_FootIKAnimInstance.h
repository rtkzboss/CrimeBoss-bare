#pragma once
#include "CoreMinimal.h"
#include "IGS_FootstepAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IGS_FIK_Crouching_Properties.h"
#include "IKProperties.h"
#include "IGS_FootIKAnimInstance.generated.h"

UCLASS(NonTransient)
class BF_ANIMATIONS_API UIGS_FootIKAnimInstance : public UIGS_FootstepAnimInstance {
    GENERATED_BODY()
public:
    UIGS_FootIKAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetPoleVectorOffsets(const FName& R_PoleVector_Offset_X, const FName& R_PoleVector_Offset_Y, const FName& R_PoleVector_Offset_Z, const FName& L_PoleVector_Offset_X, const FName& L_PoleVector_Offset_Y, const FName& L_PoleVector_Offset_Z);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableFootPlacement(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    bool GetEnablePlacement();
    
    UPROPERTY(BlueprintReadOnly)
    bool IsInjured;
    
    UPROPERTY(BlueprintReadOnly)
    FVector RighFootPoleVectorOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector LeftFootPoleVectorOffset;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> FootPoseLocations;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> AnklePoseLocations;
    
    UPROPERTY(EditAnywhere)
    TArray<FMatrix> EffectorPoseMatricies;
    
    UPROPERTY(EditAnywhere)
    bool UsePoseEffectorTarget;
    
    UPROPERTY(EditAnywhere)
    int32 LODThreshold;
    
    UPROPERTY(EditAnywhere)
    float IterpolationToZeroSpeed;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<FIKProperties> FIKPropArray;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootReachDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRootBoneOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRootBoneOffsetWhileCrouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRootBoneDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxChestBoneDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxFootBonesDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxChestBoneOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RootBoneSmoothnessFinterp;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FRotator> FootRotations;
    
    UPROPERTY(EditAnywhere)
    FIGS_FIK_Crouching_Properties CrouchingProperties;
    
private:
    UPROPERTY(EditAnywhere)
    float GroundNormalAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    bool EnableStabilization;
    
    UPROPERTY(EditAnywhere)
    float StabilizationTreshold;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    TArray<FVector> IKEffectorFootPositions;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    FVector RightIKEffectorFootPosition;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    FVector LeftIKEffectorFootPosition;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    FRotator RightFootRotation;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    FRotator LeftFootRotation;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    FVector RootOffsetLocation;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    FRotator PelvisRotation;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float RootOffset;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float ChestOffset;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    TArray<FVector> StabilizationPosition;
    
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<float> StabilizationIKAplha;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FName> BoneNames;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVector> BoneScales;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<bool> IsBonesHit;
    
};

