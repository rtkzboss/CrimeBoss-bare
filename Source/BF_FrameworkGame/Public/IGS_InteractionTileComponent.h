#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_InteractionSubTileActor.h"
#include "IGS_OnTileCompSuccess.h"
#include "Templates/SubclassOf.h"
#include "IGS_InteractionTileComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_InteractionTileComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UIGS_InteractionTileComponent(const FObjectInitializer& ObjectInitializer);

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

    UPROPERTY(BlueprintAssignable)
    FIGS_OnTileCompSuccess OnTileSuccessEvent;

    UPROPERTY(BlueprintAssignable)
    FIGS_OnTileCompSuccess OnTileActivatedEvent;

    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    AIGS_InteractionSubTileActor* SubTileChildActor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AIGS_InteractionSubTileActor> SubTileActorClass;

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
