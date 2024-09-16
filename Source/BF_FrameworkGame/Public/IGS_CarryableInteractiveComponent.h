#pragma once
#include "CoreMinimal.h"
#include "IGS_CarryableInventoryObject.h"
#include "IGS_InteractiveComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_CarryableInteractiveComponent.generated.h"

class AIGS_PlayerCharacter;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CarryableInteractiveComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UIGS_CarryableInteractiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY()
    AIGS_PlayerCharacter* OwnerPlayer;

    UPROPERTY(Replicated)
    TSubclassOf<UIGS_CarryableInventoryObject> mR_CarryableInventoryObject;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
