#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "IGS_OnTileSuccess.h"
#include "IGS_InteractionTileBase.generated.h"

class AIGS_InteractionSubTileActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_InteractionTileBase : public UChildActorComponent {
    GENERATED_BODY()
public:
    UIGS_InteractionTileBase(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintAssignable)
    FIGS_OnTileSuccess OnTileSuccessEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnTileSuccess OnTileActivatedEvent;

protected:
    UPROPERTY()
    AIGS_InteractionSubTileActor* m_SubTileActor;

};
