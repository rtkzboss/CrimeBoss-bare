#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavEdgeProviderInterface.h"
#include "NavigationSystem.h"
#include "IGS_NavigationSystem.generated.h"

class AIGS_NavHintVolume;
class UObject;

UCLASS(NonTransient)
class BF_AI_API UIGS_NavigationSystem : public UNavigationSystemV1, public INavEdgeProviderInterface {
    GENERATED_BODY()
public:
    UIGS_NavigationSystem();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static void UnPauseNavigationAutoUpdate(const UObject* WorldContextObject);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static void PauseNavigationAutoUpdate(const UObject* WorldContextObject);

    UFUNCTION(BlueprintPure, meta=(WorldContext=WorldContextObject))
    static bool IsNavigationAutoUpdatePaused(const UObject* WorldContextObject);

    UPROPERTY(Transient)
    TSet<AIGS_NavHintVolume*> m_NavHints;


    // Fix for true pure virtual functions not being implemented
};
