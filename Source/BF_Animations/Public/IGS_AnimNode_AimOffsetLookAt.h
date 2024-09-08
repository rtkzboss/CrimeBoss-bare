#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNodeBase.h"
#include "IGS_AnimNode_AimOffsetLookAt.generated.h"

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_AnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LODThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SourceSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PivotSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SocketAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    FIGS_AnimNode_AimOffsetLookAt();
};

