#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_ProgressGadgetSubtype.h"
#include "IGS_OnGadgetOverheatedEventDelegate.h"
#include "IGS_SuspicionActorBase.h"
#include "IGS_ProgressGadgetBase.generated.h"

class AIGS_GameCharacterFramework;
class ANavigationData;

UCLASS(Abstract, Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_ProgressGadgetBase : public AIGS_SuspicionActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bManualDisruptLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DisruptLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ProgressGadgetSubtype GadgetSubtype;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, EditAnywhere)
    FIGS_OnGadgetOverheatedEvent OnGadgetOverheatedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanByDisrubtedByAI;
    
public:
    AIGS_ProgressGadgetBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void WaitForNavmeshAndValidate(ANavigationData* inNavData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCanBeDisruptedByAI(bool InValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDisruptedByAI(AIGS_GameCharacterFramework* inInstigator);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool IsDisrupted();
    
    UFUNCTION(BlueprintPure)
    FVector GetDisruptLocation() const;
    
};

