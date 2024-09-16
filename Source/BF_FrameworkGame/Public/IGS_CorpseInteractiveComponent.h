#pragma once
#include "CoreMinimal.h"
#include "IGS_CarryableInventoryObject.h"
#include "IGS_InteractiveComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_CorpseInteractiveComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_CorpseInteractiveComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UIGS_CorpseInteractiveComponent(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_CarryableInventoryObject> BodyBagCarryable;

};
