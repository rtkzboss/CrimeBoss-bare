#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PrefabSeedLinkerComponent.generated.h"

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class PREFABRICATORRUNTIME_API UPrefabSeedLinkerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPrefabSeedLinkerComponent(const FObjectInitializer& ObjectInitializer);

};

