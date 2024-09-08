#pragma once
#include "CoreMinimal.h"
#include "IGS_PoolableInterface.h"
#include "EIGS_ItemPropertyFlags.h"
#include "EIGS_ModType.h"
#include "IGS_InventoryObjectUniversalData.h"
#include "GameplayTagContainer.h"
#include "IGS_ModMeshInterface.h"
#include "IGS_PickupActorBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponPickupActor.generated.h"

class UIGS_ModInventoryObject;
class UIGS_OutlineComponent;
class UIGS_PickupInteractiveComponent;
class UIGS_PingableComponent;
class UIGS_WeaponSkinData;
class UIGS_WieldableInventoryObjectBase;
class UMETA_WeaponInventoryObject;
class USkeletalMesh;
class USkeletalMeshComponentBudgeted;
class UStaticMeshComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_WeaponPickupActor : public AIGS_PickupActorBase, public IIGS_ModMeshInterface, public IIGS_PoolableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleDefaultsOnly)
    UIGS_PickupInteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleDefaultsOnly)
    UIGS_OutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleDefaultsOnly)
    UIGS_PingableComponent* PingableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponClass)
    TSubclassOf<UMETA_WeaponInventoryObject> R_WeaponClassToAdd;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_UniversalData)
    FIGS_InventoryObjectUniversalData R_UniversalData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText PrefixText;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FText WeaponName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSubclassOf<UIGS_WieldableInventoryObjectBase> WeaponPlatformID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<TSubclassOf<UIGS_ModInventoryObject>> WeaponMods;
    
    UPROPERTY(ReplicatedUsing=OnRep_WeaponSkin)
    TSoftObjectPtr<UIGS_WeaponSkinData> WeaponSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag WeaponSkinTag;
    
    UPROPERTY(BlueprintReadWrite)
    bool UseTortilla;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<USkeletalMesh> DefaultMesh;
    
    UPROPERTY()
    UIGS_WeaponSkinData* LoadedWeaponSkin;
    
    UPROPERTY()
    UIGS_WeaponSkinData* LoadedWeaponSpecificSkin;
    
    UPROPERTY()
    USkeletalMesh* LoadedWeaponMesh;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USkeletalMeshComponentBudgeted* WeaponPickupSkelMeshComp;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* SightModMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* VisibilityModMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* BarrelModMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* GripModMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* MagazineModMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* StockModMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    TArray<UStaticMeshComponent*> WeaponModsArray;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    TArray<EIGS_ModType> ActiveModTypes;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    TArray<EIGS_ModType> LoadedMods;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_IsVisible)
    bool mR_IsVisible;
    
public:
    AIGS_WeaponPickupActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Setup(const TSubclassOf<UMETA_WeaponInventoryObject>& inItemClass, const TSoftObjectPtr<UIGS_WeaponSkinData> inSkin);
    
protected:
    UFUNCTION()
    void OnRep_WeaponSkin();
    
    UFUNCTION()
    void OnRep_WeaponClass();
    
    UFUNCTION()
    void OnRep_UniversalData();
    
    UFUNCTION()
    void OnRep_IsVisible();
    
public:
    UFUNCTION(BlueprintCallable)
    bool DoesItemHaveProperty(EIGS_ItemPropertyFlags inItemFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyUniversalData(FIGS_InventoryObjectUniversalData inUniversalData);
    

    // Fix for true pure virtual functions not being implemented
};

