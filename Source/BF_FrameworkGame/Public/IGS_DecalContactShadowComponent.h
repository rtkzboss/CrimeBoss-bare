#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_DecalContactShadowsSettings.h"
#include "IGS_DecalContactShadowComponent.generated.h"

class UDecalComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_DecalContactShadowComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UDecalComponent* LeftLegShadowDecalComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UDecalComponent* RightLegShadowDecalComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShadowHardness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseCustomSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_DecalContactShadowsSettings MaleSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_DecalContactShadowsSettings FemaleSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_DecalContactShadowsSettings FemaleHeelsSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_DecalContactShadowsSettings CustomSettings;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    UMaterialInterface* ShadowDecalMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* LeftLegDecalMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* RightLegDecalMaterial;
    
public:
    UIGS_DecalContactShadowComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateShadowRotation();
    
    UFUNCTION(BlueprintCallable)
    void SetShadowVisible(bool inVisible);
    
    UFUNCTION(BlueprintCallable)
    void InitShadowParameters(float InRadius, float inWidthScale);
    
protected:
    UFUNCTION()
    void InitDefaultDecalSettings();
    
public:
    UFUNCTION()
    void InitComponent();
    
    UFUNCTION(BlueprintCallable)
    void InitAttachment(float inOffset);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraFadeMaterialParameter(bool Enabled);
    
};

