#pragma once
#include "CoreMinimal.h"
#include "Units/RigUnit.h"
#include "PowerIKBodyInertia.h"
#include "PowerIKBoneBendDirection.h"
#include "PowerIKBoneLimit.h"
#include "PowerIKCenterOfGravity.h"
#include "PowerIKCore.h"
#include "PowerIKEffector.h"
#include "PowerIKExcludedBone.h"
#include "RigUnit_PowerIK.generated.h"

USTRUCT()
struct FRigUnit_PowerIK : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName CharacterRoot;
    
    UPROPERTY()
    float RootRotationMultiplier;
    
    UPROPERTY()
    TArray<FPowerIKEffector> Effectors;
    
    UPROPERTY()
    TArray<FPowerIKBoneBendDirection> BendDirections;
    
    UPROPERTY()
    TArray<FPowerIKExcludedBone> ExcludedBones;
    
    UPROPERTY()
    TArray<FPowerIKBoneLimit> JointLimits;
    
    UPROPERTY()
    FPowerIKCenterOfGravity CenterOfGravityConstraint;
    
    UPROPERTY()
    FPowerIKBodyInertia Inertia;
    
    UPROPERTY()
    int32 MaxSquashIterations;
    
    UPROPERTY()
    int32 MaxStretchIterations;
    
    UPROPERTY()
    int32 MaxFinalIterations;
    
    UPROPERTY()
    bool AllowBoneTranslation;
    
    UPROPERTY()
    float SolverAlpha;
    
    UPROPERTY(Transient)
    FPowerIKCore Core;
    
    POWERIKRUNTIME_API FRigUnit_PowerIK();
};

