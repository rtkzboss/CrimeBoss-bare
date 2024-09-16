#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_WeaponDynamicScopeHandler.generated.h"

class AActor;
class AIGS_WeaponBase;
class UIGS_WeaponModsHandler;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WeaponDynamicScopeHandler : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_WeaponDynamicScopeHandler(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnWeaponDestroyed(AActor* inDestroyed);

public:
    UFUNCTION(BlueprintNativeEvent)
    void OnAimChanged(bool inAim);

protected:
    UFUNCTION()
    void DisableAimPostprocess() const;

    UPROPERTY(VisibleAnywhere)
    TWeakObjectPtr<AIGS_WeaponBase> OwningWeapon;

    UPROPERTY(Export, VisibleAnywhere)
    TWeakObjectPtr<UStaticMeshComponent> DynamicScopeMesh;

    UPROPERTY(Export, VisibleAnywhere)
    TWeakObjectPtr<UStaticMeshComponent> SightMesh;

    UPROPERTY(Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_WeaponModsHandler> WeaponModsHandler;

    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    UMaterialInterface* ScopePostprocessMaterial;

    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    UMaterialInterface* ScopePostprocessVerticalMaterial;

    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    UMaterialInterface* SniperScopePostprocessMaterial;

    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    UMaterialInterface* SniperScopePostprocessVerticalMaterial;

    UPROPERTY()
    UMaterialInstanceDynamic* DynamicScopePostprocessMaterial;

    UPROPERTY()
    UMaterialInstanceDynamic* DynamicScopePostprocessVerticalMaterial;

    UPROPERTY()
    UMaterialInstanceDynamic* DynamicSniperScopePostprocessMaterial;

    UPROPERTY()
    UMaterialInstanceDynamic* DynamicSniperScopePostprocessVerticalMaterial;

};
