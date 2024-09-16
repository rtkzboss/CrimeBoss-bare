#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_DownStateHandlerComponentFramework.generated.h"

class APawn;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_DownStateHandlerComponentFramework : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_DownStateHandlerComponentFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Revive(APawn* healer);

    UFUNCTION(BlueprintPure)
    float GetReviveTime(APawn* healer);

    UFUNCTION(BlueprintPure)
    float GetDownStateLengthInSeconds() const;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Replicated)
    bool UseDownState;

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
