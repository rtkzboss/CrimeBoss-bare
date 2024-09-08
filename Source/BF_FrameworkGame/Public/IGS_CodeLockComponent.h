#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_CodeLockEndPlayEventDelegate.h"
#include "IGS_CodeLockOccupiedChangedDelegate.h"
#include "IGS_CodeLockStateChangedDelegate.h"
#include "IGS_CylinderValueChangedDelegate.h"
#include "IGS_CodeLockComponent.generated.h"

class AActor;
class AIGS_GameCharacterFramework;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CodeLockComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinCylinderValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxCylinderValue;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_Cylinders)
    TArray<int32> R_Cylinders;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_IsLocked)
    bool R_IsLocked;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    bool R_bIsOccupied;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CylinderValueChanged OnCylinderValueChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CodeLockStateChanged OnCodeLockStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CodeLockOccupiedChanged OnCodeLockOccupiedChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_CodeLockEndPlayEvent OnCodeLockEndPlayEvent;
    
private:
    UPROPERTY()
    int32 m_DigitCount;
    
    UPROPERTY()
    AActor* m_OldOwner;
    
public:
    UIGS_CodeLockComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetInstigator(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void SetCylinderValue(int32 InValue, int32 inCylinderIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCode(int32 inCode);
    
    UFUNCTION(Reliable, Server)
    void Server_SetInstigator(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(Reliable, Server)
    void Server_SetCylinderValue(int32 InValue, int32 inCylinderIndex);
    
    UFUNCTION()
    void OnRep_IsLocked(bool inOldLocked);
    
    UFUNCTION()
    void OnRep_Cylinders(TArray<int32> inOldCylinders);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseCylinderValue(int32 inCylinderIndex);
    
    UFUNCTION(BlueprintPure)
    bool GetIsLocked();
    
    UFUNCTION(BlueprintPure)
    int32 GetCode();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseCylinderValue(int32 inCylinderIndex);
    
    UFUNCTION(Client, Reliable)
    void Client_SetCylinderValue(int32 InValue, int32 inCylinderIndex);
    
};

