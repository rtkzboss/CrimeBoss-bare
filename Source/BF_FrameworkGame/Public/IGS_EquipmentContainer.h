#pragma once
#include "CoreMinimal.h"
#include "IGS_EquipmentInventoryObject.h"
#include "GameFramework/Actor.h"
#include "IGS_OnEquipmentPickedUp.h"
#include "Templates/SubclassOf.h"
#include "IGS_EquipmentContainer.generated.h"

class UIGS_PickupInteractiveComponent;
class UStaticMeshComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_EquipmentContainer : public AActor {
    GENERATED_BODY()
public:
    AIGS_EquipmentContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void SetupInteraction();

    UFUNCTION()
    void OnRep_bContainerEnabled();

    UFUNCTION(BlueprintImplementableEvent)
    void OnContainerEnabled();

    UFUNCTION(BlueprintImplementableEvent)
    void OnContainerDisabled();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitMesh();

    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_PickupInteractiveComponent* PickupInteraction;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* EquipmentMesh;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_bContainerEnabled)
    bool mR_bContainerEnabled;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_EquipmentInventoryObject> EquipmentToDrop;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRechargable;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeUntilRecharge;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnEquipmentPickedUp OnPickedUpEvent;

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
