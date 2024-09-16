#include "IGS_WeatherConfigActor.h"
#include "Components/SceneComponent.h"

AIGS_WeatherConfigActor::AIGS_WeatherConfigActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    (*this).RootComponent = gen;
}

void AIGS_WeatherConfigActor::UpdateWeatherSystem() const {
}

