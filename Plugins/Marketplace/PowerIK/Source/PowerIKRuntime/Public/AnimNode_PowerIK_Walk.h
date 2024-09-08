#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "Engine/EngineTypes.h"
#include "PowerIKBodyInertia.h"
#include "PowerIKBoneBendDirection.h"
#include "PowerIKBoneLimit.h"
#include "PowerIKExcludedBone.h"
#include "PowerIKWalkingLimb.h"
#include "AnimNode_PowerIK_Walk.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FAnimNode_PowerIK_Walk : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName CharacterRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RootRotationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPowerIKBodyInertia BodyInertia;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FPowerIKWalkingLimb> Limbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StepMaxReachDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StepDurationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StepHeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UCurveFloat* StepHeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UCurveFloat* StepSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float TeleportDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool PrintTeleportWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TraceComplex;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FPowerIKBoneBendDirection> BendDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPowerIKExcludedBone> ExcludedBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPowerIKBoneLimit> JointLimits;
    
    UPROPERTY(EditAnywhere)
    int32 MaxSquashIterations;
    
    UPROPERTY(EditAnywhere)
    int32 MaxStretchIterations;
    
    UPROPERTY(EditAnywhere)
    int32 MaxFinalIterations;
    
    UPROPERTY(EditAnywhere)
    bool AllowBoneTranslation;
    
    UPROPERTY(EditAnywhere)
    float SolverAlpha;
    
    UPROPERTY(EditAnywhere)
    float DebugDrawSize;
    
    FAnimNode_PowerIK_Walk();
};

