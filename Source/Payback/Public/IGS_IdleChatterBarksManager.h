#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_IdleChatterBarksManager.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_PlayIdleChatterAsyncAction;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UIGS_IdleChatterBarksManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UIGS_PlayIdleChatterAsyncAction*> m_ActivePlayRequests;
    
    UIGS_IdleChatterBarksManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Succeed(UIGS_PlayIdleChatterAsyncAction* inPlayIdleChatterAsyncAction);
    
    UFUNCTION(BlueprintImplementableEvent)
    void PlayIdleChatter(const UIGS_PlayIdleChatterAsyncAction* inPlayIdleChatterAsyncAction, const TArray<AIGS_GameCharacterFramework*>& inCharacters);
    
    UFUNCTION(BlueprintCallable)
    void Canceled(UIGS_PlayIdleChatterAsyncAction* inPlayIdleChatterAsyncAction);
    
};

