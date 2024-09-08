#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IGS_SubControllerMountableInterface.generated.h"

UINTERFACE(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_SubControllerMountableInterface : public UInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKGAME_API IIGS_SubControllerMountableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnUse(bool inIsHolding);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnUpBtn(bool inIsHolding);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnTurnRate(float inAxis);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnTurnMouse(float inAxis);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnRightBtn(bool inIsHolding);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPing(bool inIsHolding);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMoveRight(float inAxis);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMoveLeft(float inAxis);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMoveForward(float inAxis);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMoveBackward(float inAxis);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMountTertiaryAction(bool inIsHolding);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMountSecondaryAction(bool inIsHolding);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMountQuaternaryAction(bool inIsHolding);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnMountPrimaryAction(bool inIsHolding);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnLookUpRate(float inAxis);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnLookUpMouse(float inAxis);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnLeftBtn(bool inIsHolding);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnDownBtn(bool inIsHolding);
    
};

