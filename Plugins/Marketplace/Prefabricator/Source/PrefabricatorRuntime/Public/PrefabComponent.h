#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PrefabComponent.generated.h"

class UPrefabricatorAssetInterface;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PREFABRICATORRUNTIME_API UPrefabComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPrefabComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UPrefabricatorAssetInterface> PrefabAssetInterface;

};
