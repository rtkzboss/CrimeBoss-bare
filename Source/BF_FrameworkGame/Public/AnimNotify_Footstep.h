#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/EngineTypes.h"
#include "EIGS_FootstepType.h"
#include "AnimNotify_Footstep.generated.h"

UCLASS(CollapseCategories)
class BF_FRAMEWORKGAME_API UAnimNotify_Footstep : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BoneOrSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_FootstepType FootstepType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TraceLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ApplyOwnerScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DrawDebug;
    
    UAnimNotify_Footstep();

};

