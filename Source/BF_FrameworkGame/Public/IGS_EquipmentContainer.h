#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_OnEquipmentPickedUpDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_EquipmentContainer.generated.h"

class UIGS_EquipmentInventoryObject;
class UIGS_PickupInteractiveComponent;
class UStaticMeshComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_EquipmentContainer : public AActor {
    GENERATED_BODY()
public:
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
    
    AIGS_EquipmentContainer(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

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
    
};

