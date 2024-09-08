#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_PropsManager.generated.h"

class UIGS_PropLogicComponentBase;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UIGS_PropsManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<UIGS_PropLogicComponentBase*> PropLogicComponentArray;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bInitialized;
    
    UIGS_PropsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Setup(int32 InSeed);
    
    UFUNCTION(BlueprintPure)
    int32 GetInitialSeed() const;
    
};

