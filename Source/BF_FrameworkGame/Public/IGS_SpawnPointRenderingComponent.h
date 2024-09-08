#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "IGS_SpawnPointRenderingComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SpawnPointRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UIGS_SpawnPointRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

