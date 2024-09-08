#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableBase.h"
#include "IGS_ThrowableData.h"
#include "IGS_ThrowableBase.generated.h"

class UIGS_SkinHandlerBase;
class UIGS_ThrowableInventoryObject;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_ThrowableBase : public AIGS_WieldableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<UIGS_ThrowableInventoryObject> ThrowableInventoryObject;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FIGS_ThrowableData ThrowableData;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_SkinHandlerBase* SkinHandler;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UClass* LoadedProjectileClass;
    
public:
    AIGS_ThrowableBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnThrowStart(bool inLow);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnThrowFinish(bool inLow);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnThrowCancel(bool inLow);
    
    UFUNCTION()
    void OnDebugSettingsChanged();
    
};

