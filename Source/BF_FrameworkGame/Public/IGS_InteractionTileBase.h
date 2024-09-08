#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "IGS_OnTileSuccessDelegate.h"
#include "IGS_InteractionTileBase.generated.h"

class AIGS_InteractionSubTileActor;

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_InteractionTileBase : public UChildActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnTileSuccess OnTileSuccessEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnTileSuccess OnTileActivatedEvent;
    
protected:
    UPROPERTY()
    AIGS_InteractionSubTileActor* m_SubTileActor;
    
public:
    UIGS_InteractionTileBase(const FObjectInitializer& ObjectInitializer);

};

