#pragma once
#include "CoreMinimal.h"
#include "IGS_PoolableInterface.h"
#include "IGS_CommonItemData.h"
#include "EIGS_AmmoBoxItem.h"
#include "IGS_PickupActorBase.h"
#include "IGS_AmmoBoxBase.generated.h"

class UAkAudioEvent;
class UIGS_InteractiveComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_AmmoBoxBase : public AIGS_PickupActorBase, public IIGS_PoolableInterface {
    GENERATED_BODY()
public:
    AIGS_AmmoBoxBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBox(EIGS_AmmoBoxItem inBoxID);
    
protected:
    UFUNCTION()
    void OnRep_BoxIDChanged();
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UAkAudioEvent* PickupSoundAkEvent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_InteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_AmmoBoxItem InitialBoxID;
    
    UPROPERTY(ReplicatedUsing=OnRep_BoxIDChanged)
    EIGS_AmmoBoxItem mR_BoxID;
    
    UPROPERTY(EditDefaultsOnly)
    FIGS_CommonItemData CommonData;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

