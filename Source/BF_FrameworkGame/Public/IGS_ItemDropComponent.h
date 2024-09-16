#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectFramework.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "IGS_ItemDropped.h"
#include "IGS_OnDeathItemsDropped.h"
#include "IGS_PickupActorBase.h"
#include "IGS_PickupActorInventoryItem.h"
#include "Templates/SubclassOf.h"
#include "IGS_ItemDropComponent.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_CharacterWieldablesHolderComponent;
class UIGS_PickupClassesData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ItemDropComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ItemDropComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DropItem(TSubclassOf<UIGS_InventoryObjectFramework> inClass) const;

    UFUNCTION(Client, Reliable)
    void Client_DropBags() const;

    UFUNCTION(BlueprintCallable)
    void AddItemToDropUponTie(TSubclassOf<UIGS_InventoryObjectFramework> inClass);

    UFUNCTION(BlueprintCallable)
    void AddItemToDropUponDeath(TSubclassOf<UIGS_InventoryObjectFramework> inClass);

    UFUNCTION(BlueprintCallable)
    static void AddItemToDropForCharacter(AIGS_GameCharacterFramework* inCharacter, TSubclassOf<UIGS_InventoryObjectFramework> inClass, FIGS_ItemDropped inDelegateHandle);

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> ItemsUponDeath;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> ItemsUponTie;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AIGS_PickupActorBase> WalkieTalkieClass;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AIGS_PickupActorInventoryItem> PickupActorTemplate;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool SpawnWalkieTalkie;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDropUponZipAndDeath;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnDeathItemsDropped OnDeathItemsDroppedEvent;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FIGS_ItemDropped OnItemDropped;

protected:
    UPROPERTY(VisibleAnywhere)
    UIGS_PickupClassesData* PickupClasses;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool GenerateAmmoBox;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AIGS_GameCharacterFramework* CharacterOwner;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_CharacterWieldablesHolderComponent* CharacterWieldablesHolderComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform ItemSpawnPointTransform;

};
