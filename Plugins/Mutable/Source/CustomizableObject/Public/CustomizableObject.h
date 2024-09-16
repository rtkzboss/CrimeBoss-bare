#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomizableObjectIdPair.h"
#include "CustomizableObjectMeshToMeshVertData.h"
#include "ECustomizableObjectRelevancy.h"
#include "EMutableParameterType.h"
#include "MorphTargetInfo.h"
#include "MorphTargetVertexData.h"
#include "MutableModelImageProperties.h"
#include "MutableModelParameterProperties.h"
#include "ParameterTags.h"
#include "ParameterUIData.h"
#include "CustomizableObject.generated.h"

class UClothSharedConfigCommon;
class UClothingAssetCommon;
class UCustomizableObjectInstance;
class UMaterialInterface;
class UMutableMaskOutCache;
class UPhysicsAsset;
class USkeletalMesh;
class UStaticMesh;

UCLASS(BlueprintType)
class CUSTOMIZABLEOBJECT_API UCustomizableObject : public UObject {
    GENERATED_BODY()
public:
    UCustomizableObject();

    UFUNCTION(BlueprintCallable)
    void UnloadMaskOutCache();

    UFUNCTION(BlueprintCallable)
    void LoadMaskOutCache();

    UFUNCTION(BlueprintPure)
    FParameterUIData GetStateUIMetadataFromIndex(int32 StateIndex) const;

    UFUNCTION(BlueprintPure)
    FParameterUIData GetStateUIMetadata(const FString& StateName) const;

    UFUNCTION(BlueprintPure)
    FString GetStateParameterName(const FString& StateName, int32 ParameterIndex) const;

    UFUNCTION(BlueprintPure)
    int32 GetStateParameterCount(const FString& StateName) const;

    UFUNCTION(BlueprintPure)
    FString GetStateName(int32 StateIndex) const;

    UFUNCTION(BlueprintPure)
    int32 GetStateCount() const;

    UFUNCTION(BlueprintPure)
    FParameterUIData GetParameterUIMetadataFromIndex(int32 ParamIndex) const;

    UFUNCTION(BlueprintPure)
    FParameterUIData GetParameterUIMetadata(const FString& ParamName) const;

    UFUNCTION(BlueprintPure)
    EMutableParameterType GetParameterTypeByName(const FString& Name) const;

    UFUNCTION(BlueprintPure)
    EMutableParameterType GetParameterType(int32 ParamIndex) const;

    UFUNCTION(BlueprintPure)
    FString GetParameterName(int32 ParamIndex) const;

    UFUNCTION(BlueprintPure)
    int32 GetParameterDescriptionCount(const FString& ParamName) const;

    UFUNCTION(BlueprintPure)
    int32 GetParameterCount() const;

    UFUNCTION(BlueprintPure)
    int32 GetIntParameterNumOptions(int32 ParamIndex) const;

    UFUNCTION(BlueprintPure)
    FString GetIntParameterAvailableOption(int32 ParamIndex, int32 K) const;

    UFUNCTION(BlueprintPure)
    int32 FindParameter(const FString& Name) const;

    UFUNCTION(BlueprintCallable)
    UCustomizableObjectInstance* CreateInstance();

    UPROPERTY(EditAnywhere)
    USkeletalMesh* ReferenceSkeletalMesh;

    UPROPERTY()
    UStaticMesh* ReferenceStaticMesh;

    UPROPERTY(EditAnywhere)
    ECustomizableObjectRelevancy Relevancy;

    UPROPERTY(EditAnywhere)
    bool bDisableTextureLayoutManagement;

    UPROPERTY(VisibleAnywhere)
    TArray<TSoftObjectPtr<UMaterialInterface>> ReferencedMaterials;

    UPROPERTY(VisibleAnywhere)
    TArray<FMutableModelImageProperties> ImageProperties;

    UPROPERTY()
    TMap<FString, FCustomizableObjectIdPair> GroupNodeMap;

    UPROPERTY()
    TArray<FMorphTargetInfo> ContributingMorphTargetsInfo;

    UPROPERTY()
    TArray<FMorphTargetVertexData> MorphTargetReconstructionData;

    UPROPERTY()
    TMap<FName, UClothSharedConfigCommon*> ClothSharedConfigs;

    UPROPERTY()
    TArray<UClothingAssetCommon*> ContributingClothingAssets;

    UPROPERTY()
    TArray<FCustomizableObjectMeshToMeshVertData> ClothMeshToMeshVertData;

private:
    UPROPERTY(Transient)
    TArray<FMutableModelParameterProperties> ParameterProperties;

public:
    UPROPERTY()
    TMap<FString, FParameterUIData> ParameterUIDataMap;

    UPROPERTY()
    TMap<FString, FParameterUIData> StateUIDataMap;

    UPROPERTY()
    TMap<FString, TSoftObjectPtr<UPhysicsAsset>> PhysicsAssetsMap;

    UPROPERTY()
    TSoftObjectPtr<UMutableMaskOutCache> MaskOutCache;

    UPROPERTY()
    bool bIsChildObject;

    UPROPERTY()
    TArray<FString> CustomizableObjectClassTags;

    UPROPERTY()
    TArray<FString> PopulationClassTags;

    UPROPERTY()
    TMap<FString, FParameterTags> CustomizableObjectParametersTags;

private:
    UPROPERTY(Transient)
    UMutableMaskOutCache* MaskOutCache_HardRef;

};
