#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "EIGS_FacialEmotionIdles.h"
#include "EIGS_FacialEmotionStates.h"
#include "IGS_FaceExpressionInfo.h"
#include "IGS_HeadAnimInstance.generated.h"

class UIGS_PlayerAnimInstance;

UCLASS(NonTransient)
class BF_ANIMATIONS_API UIGS_HeadAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UIGS_HeadAnimInstance();

    UFUNCTION(BlueprintImplementableEvent)
    void OnDeathAnimationEnded_Event();
    
    UFUNCTION(BlueprintPure)
    bool IsPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBot() const;
    
    UFUNCTION(BlueprintCallable)
    UIGS_PlayerAnimInstance* GetOwningPlayerAnimInstance();
    
    UFUNCTION(BlueprintPure)
    int32 GetLOD_Index() const;
    
    UFUNCTION(BlueprintPure)
    void FindEyesLookAt(const FVector& inFromLocation, FVector2D& OutEyesOffset) const;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D DeathPoseLookOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LookAtEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLookAtAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLookAtDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AdditiveCurves;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator ViewRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AimAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterState CharacterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_FaceExpressionInfo ExpressionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_FacialEmotionStates FacialAnimationStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_FacialEmotionIdles FacialAnimationIdles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FacialExpressionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsInSequencer;
    
    UPROPERTY(BlueprintReadOnly)
    bool ReduceWork;
    
    UPROPERTY(BlueprintReadOnly)
    bool CopyPoseDisabled;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LODLevel;
    
    UPROPERTY(BlueprintReadOnly)
    bool LOD1Plus;
    
    UPROPERTY(BlueprintReadOnly)
    bool LOD2Plus;
    
    UPROPERTY(BlueprintReadOnly)
    bool LOD3Plus;
    
};

