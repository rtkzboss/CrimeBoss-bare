#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GeneratedMaterial.h"
#include "GeneratedMesh.h"
#include "GeneratedTexture.h"
#include "ParameterDecorations.h"
#include "CustomizableInstancePrivateData.generated.h"

class UMaterialInterface;
class UPhysicsAsset;
class UTexture2D;

UCLASS()
class UCustomizableInstancePrivateData : public UObject {
    GENERATED_BODY()
public:
    UCustomizableInstancePrivateData();

    UPROPERTY(Transient)
    TArray<FGeneratedMaterial> GeneratedMaterials;

    UPROPERTY(Transient)
    TArray<FGeneratedMesh> GeneratedMeshes;

    UPROPERTY(Transient)
    TArray<FGeneratedTexture> GeneratedTextures;

    UPROPERTY(Transient)
    TArray<FParameterDecorations> ParameterDecorations;

    UPROPERTY(Transient)
    TMap<FString, TWeakObjectPtr<UTexture2D>> TextureReuseCache;

private:
    UPROPERTY(Transient)
    TArray<UMaterialInterface*> ReferencedMaterials;

    UPROPERTY(Transient)
    TArray<UPhysicsAsset*> PhysicsAssetsToMerge;

};
