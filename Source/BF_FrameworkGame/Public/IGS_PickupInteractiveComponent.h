#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectUniversalData.h"
#include "IGS_InteractiveComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_PickupInteractiveComponent.generated.h"

class AController;
class UAkAudioEvent;
class UIGS_InventoryObjectFramework;
class UIGS_ModInventoryObject;
class UIGS_WeaponSkinData;
class UMETA_WeaponInventoryObject;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PickupInteractiveComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bLocallyAlreadyUsed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_InventoryObjectFramework> ItemClassToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_WeaponInventoryObject> ItemWeaponDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UIGS_ModInventoryObject>> ItemModsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UIGS_WeaponSkinData* WeaponSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UIGS_WeaponSkinData* WeaponSpecificSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GlobalItemCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText PrefixText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHandleInteractionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_InventoryObjectUniversalData UniversalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* DefaultPickupAkEvent;
    
public:
    UIGS_PickupInteractiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool UseInternal(AController* InPlayerController);
    
public:
    UFUNCTION(BlueprintCallable)
    void Setup(const TSubclassOf<UIGS_InventoryObjectFramework>& inItemClass, int32 inGlobalItemCount);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool ServerUseInternal(AController* InPlayerController);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ServerCanUseInternal(AController* InPlayerController);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool CanUseInternal(AController* InPlayerController);
    
};

