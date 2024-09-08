#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Materials/MaterialLayersFunctions.h"
#include "ESkinnedDecalAdditionalData.h"
#include "SkinnedDecalSampler.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class USkeletalMeshComponent;
class USkinnedDecalInstance;
class USkinnedDecalSampler;
class UTextureRenderTarget2D;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class SKINNEDDECALCOMPONENT_API USkinnedDecalSampler : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FVector> DecalLocations;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<int32> EmptyIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMaterialParameterAssociation> Association;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESkinnedDecalAdditionalData> AdditionalData;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UMaterialInstanceDynamic*> Materials;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LastDecalIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDecalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TranslucentBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* TranslucentBlendMaterial;
    
    UPROPERTY()
    TMap<USkinnedDecalInstance*, int32> InstanceMap;
    
    UPROPERTY()
    UMaterialInstanceDynamic* TranslucentBlendMaterialDynamic;
    
    UPROPERTY(Instanced)
    TArray<USkeletalMeshComponent*> RenderMeshes;
    
    UPROPERTY()
    UTextureRenderTarget2D* DataTarget;
    
    USkinnedDecalSampler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void UpdateInstance(USkinnedDecalInstance* Instance);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllDecals();
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnDecal(FVector Location, const FQuat Rotation, FName BoneName, float Size, int32 SubUV, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetupMaterials();
    
    UFUNCTION(BlueprintCallable)
    void SetupComponentMaterials(USkeletalMeshComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshComponent(USkeletalMeshComponent* MeshComponent, bool Child);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDecal(const int32 Index);
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetDataTarget();
    
    UFUNCTION(BlueprintCallable)
    void CloneDecals(USkinnedDecalSampler* Source);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllDecals();
    
    UFUNCTION(BlueprintCallable)
    void AutoSetup();
    
};

