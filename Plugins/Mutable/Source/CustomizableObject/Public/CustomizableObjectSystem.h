#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PendingReleaseSkeletalMeshInfo.h"
#include "CustomizableObjectSystem.generated.h"

class UCustomizableInstanceLODManagementBase;
class UCustomizableObjectImageProviderArray;
class UCustomizableObjectSystem;
class UTexture2D;

UCLASS(BlueprintType)
class CUSTOMIZABLEOBJECT_API UCustomizableObjectSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FPendingReleaseSkeletalMeshInfo> PendingReleaseSkeletalMesh;
    
public:
    UPROPERTY()
    UCustomizableObjectImageProviderArray* PreviewExternalImageProvider;
    
private:
    UPROPERTY()
    TArray<UTexture2D*> ProtectedCachedTextures;
    
    UPROPERTY(Transient)
    UCustomizableInstanceLODManagementBase* DefaultInstanceLODManagement;
    
    UPROPERTY(Transient)
    UCustomizableInstanceLODManagementBase* CurrentInstanceLODManagement;
    
public:
    UCustomizableObjectSystem();

    UFUNCTION(BlueprintCallable)
    void SetReleaseMutableTexturesImmediately(bool bReleaseTextures);
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalInstances() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTextureMemoryUsed() const;
    
    UFUNCTION(BlueprintPure)
    FString GetPluginVersion() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumPendingInstances() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumInstances() const;
    
    UFUNCTION(BlueprintPure)
    static UCustomizableObjectSystem* GetInstance();
    
    UFUNCTION(BlueprintPure)
    int32 GetAverageBuildTime() const;
    
    UFUNCTION(BlueprintPure)
    bool AreEnginePatchesPresent() const;
    
};

