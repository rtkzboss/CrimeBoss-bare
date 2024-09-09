#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniInputMeshComponent.h"
#include "HoudiniInputInstancedMeshComponent.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent {
    GENERATED_BODY()
public:
    UHoudiniInputInstancedMeshComponent();

    UPROPERTY()
    TArray<FTransform> InstanceTransforms;
    
};

