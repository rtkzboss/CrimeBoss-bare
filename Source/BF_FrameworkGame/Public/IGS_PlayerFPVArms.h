#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerFPVArmsFramework.h"
#include "IGS_WieldAnyItemInterface.h"
#include "IGS_PlayerFPVArms.generated.h"

class AActor;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_PlayerFPVArms : public AIGS_PlayerFPVArmsFramework, public IIGS_WieldAnyItemInterface {
    GENERATED_BODY()
public:
    AIGS_PlayerFPVArms(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void SetArmsTickEnabled(bool Enabled);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMoveArmsInCode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRotateArmsPitchInCode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bKeepArmsAtFeet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ArmsGrabLadderRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    AActor* LeftHandAttachedActor;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    AActor* RightHandAttachedActor;
    

    // Fix for true pure virtual functions not being implemented
};

