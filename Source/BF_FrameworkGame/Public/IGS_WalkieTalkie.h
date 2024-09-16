#pragma once
#include "CoreMinimal.h"
#include "IGS_CommonItemData.h"
#include "IGS_GlobalInventoryObject.h"
#include "IGS_PickupActorBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_WalkieTalkie.generated.h"

class UAkAudioEvent;
class UIGS_InteractiveComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_WalkieTalkie : public AIGS_PickupActorBase {
    GENERATED_BODY()
public:
    AIGS_WalkieTalkie(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnWalkiePicked();

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_InteractiveComponent* InteractiveComponent;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_GlobalInventoryObject> WalkieClassToAdd;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* WalkieTalkieCheckInSound;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* WalkieTalkiePickupSound;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText PickupDialogID;

protected:
    UPROPERTY(EditDefaultsOnly)
    FIGS_CommonItemData CommonData;

};
