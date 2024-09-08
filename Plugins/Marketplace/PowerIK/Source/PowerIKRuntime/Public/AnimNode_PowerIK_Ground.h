#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "PowerIKBodyInertia.h"
#include "PowerIKBoneBendDirection.h"
#include "PowerIKBoneLimit.h"
#include "PowerIKExcludedBone.h"
#include "PowerIKGroundCollision.h"
#include "PowerIKGroundFoot.h"
#include "PowerIKGroundSlope.h"
#include "AnimNode_PowerIK_Ground.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FAnimNode_PowerIK_Ground : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName CharacterRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPowerIKBodyInertia BodyInertia;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FPowerIKGroundFoot> Feet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FeetDeltaSmoothSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float RootRotationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FPowerIKGroundCollision GroundCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPowerIKGroundSlope GroundSlope;
    
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
    
    FAnimNode_PowerIK_Ground();
};

