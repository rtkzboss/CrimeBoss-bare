#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectFramework.h"
#include "Components/ActorComponent.h"
#include "EIGS_TeamSideEnum.h"
#include "Templates/SubclassOf.h"
#include "GameMetaTransferComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UGameMetaTransferComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGameMetaTransferComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegisterKill(EIGS_TeamSideEnum teamType);

    UFUNCTION(BlueprintCallable)
    void RegisterInventoryLoot(TSubclassOf<UIGS_InventoryObjectFramework> inLootItem);

    UFUNCTION(BlueprintCallable)
    void RegisterCarryableLoot(TSubclassOf<UIGS_InventoryObjectFramework> inCarryableItem);

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 TotalLootSpawned;

protected:
    UPROPERTY()
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> CollectedInventoryLoot;

    UPROPERTY()
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> CollectedCarryables;

};
