#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputSceneComponent.h"
#include "HoudiniInputMeshComponent.generated.h"

class UStaticMesh;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent {
    GENERATED_BODY()
public:
    UHoudiniInputMeshComponent();

    UPROPERTY()
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY()
    TArray<FString> MeshComponentsMaterials;
    
};

