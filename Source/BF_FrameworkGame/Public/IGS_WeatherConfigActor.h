#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_VisualStyleConfig.h"
#include "IGS_WeatherConfig.h"
#include "IGS_WeatherConfigActor.generated.h"

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_WeatherConfigActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FIGS_WeatherConfig WeatherConfig;
    
    UPROPERTY(EditAnywhere)
    FIGS_VisualStyleConfig VisualStyleConfig;
    
public:
    AIGS_WeatherConfigActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateWeatherSystem() const;
    
};

