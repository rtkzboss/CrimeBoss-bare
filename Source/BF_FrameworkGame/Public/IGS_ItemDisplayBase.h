#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_PickupSpawn.h"
#include "IGS_ItemDisplayBase.generated.h"

class UChildActorComponent;
class UIGS_BreakableWindowComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_ItemDisplayBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_ItemDisplayBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLoot();

    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateLoot();

    UPROPERTY(BlueprintReadOnly, Instanced)
    USceneComponent* RootObject;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UStaticMeshComponent* ItemDisplay;

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UIGS_BreakableWindowComponent* BreakableWindow;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_PickupSpawn> DefaultLoot;

    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UChildActorComponent*> ItemPickups;

};
