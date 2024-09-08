#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_SentryEnemyHolder.h"
#include "IGS_SentryMemoryComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_SentryMemoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FIGS_SentryEnemyHolder> Enemies;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TWeakObjectPtr<AActor> m_CurrentTarget;
    
public:
    UIGS_SentryMemoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCurrentTarget(AActor* inNewTarget);
    
    UFUNCTION(BlueprintPure)
    AActor* GetCurrentTarget() const;
    
};

