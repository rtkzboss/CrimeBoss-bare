#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_WeatherTrackedBlendable.generated.h"

class UIGS_PostProcessManagerComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WeatherTrackedBlendable : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UIGS_PostProcessManagerComponent> m_PostProcessManager;
    
public:
    UIGS_WeatherTrackedBlendable(const FObjectInitializer& ObjectInitializer);

};

