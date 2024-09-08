#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/MeshComponent.h"
#include "HoudiniStaticMeshComponent.generated.h"

class UHoudiniStaticMesh;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniStaticMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UHoudiniStaticMesh* Mesh;
    
    UPROPERTY()
    FBox LocalBounds;
    
    UPROPERTY(EditAnywhere)
    bool bHoudiniIconVisible;
    
public:
    UHoudiniStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void SetMesh(UHoudiniStaticMesh* InMesh);
    
    UFUNCTION()
    void SetHoudiniIconVisible(bool bInHoudiniIconVisible);
    
    UFUNCTION()
    void NotifyMeshUpdated();
    
    UFUNCTION()
    bool IsHoudiniIconVisible() const;
    
    UFUNCTION()
    UHoudiniStaticMesh* GetMesh();
    
};

