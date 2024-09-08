#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_OnTileCompSuccessDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_InteractionTileComponent.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_InteractionSubTileActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_InteractionTileComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnTileCompSuccess OnTileSuccessEvent;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_OnTileCompSuccess OnTileActivatedEvent;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    AIGS_InteractionSubTileActor* SubTileChildActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AIGS_InteractionSubTileActor> SubTileActorClass;
    
    UIGS_InteractionTileComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION()
    void OnSubTileSuccess(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSubTileActorSpawned();
    
    UFUNCTION()
    void OnSubTileActivate(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintCallable)
    void DestroyTileActor();
    
};

