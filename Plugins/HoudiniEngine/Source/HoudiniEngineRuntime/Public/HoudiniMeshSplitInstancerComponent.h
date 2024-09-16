#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HoudiniMeshSplitInstancerComponent.generated.h"

class UMaterialInterface;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniMeshSplitInstancerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UHoudiniMeshSplitInstancerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UPROPERTY(Instanced, VisibleInstanceOnly)
    TArray<UStaticMeshComponent*> Instances;

    UPROPERTY(VisibleInstanceOnly)
    TArray<UMaterialInterface*> OverrideMaterials;

    UPROPERTY(VisibleAnywhere)
    UStaticMesh* InstancedMesh;

};
