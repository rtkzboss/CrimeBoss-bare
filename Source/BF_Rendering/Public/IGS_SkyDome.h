#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_SkyDome.generated.h"

UCLASS(Abstract, Config=Inherit)
class BF_RENDERING_API AIGS_SkyDome : public AActor {
    GENERATED_BODY()
public:
    AIGS_SkyDome(const FObjectInitializer& ObjectInitializer);

};

