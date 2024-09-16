#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "IGS_PoolableInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UIGS_PoolableInterface : public UInterface {
    GENERATED_BODY()
};

class IIGS_PoolableInterface : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintNativeEvent)
    void SetPoolTagContainer(FGameplayTagContainer inTagContainer);

public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Release();

protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnSpawnedEvent();

    UFUNCTION(BlueprintNativeEvent)
    void OnReleasedEvent();

    UFUNCTION(BlueprintNativeEvent)
    bool OnFindEvent(UObject* inCompareItem);

    UFUNCTION(BlueprintNativeEvent)
    void OnActivatedEvent();

    UFUNCTION(BlueprintNativeEvent)
    void OnAcquiredEvent();

    UFUNCTION(BlueprintNativeEvent)
    FGameplayTagContainer GetPoolTagContainer();

public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Activate();

};
