#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "GenericTeamAgentInterface.h"
#include "IGS_GameplayTagAssetInterfaceCustom.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_SuspicionActorNoticedSignature.h"
#include "IGS_SuspicionActorOffenceReportedSignature.h"
#include "IGS_SuspicionInterface.h"
#include "IGS_SuspicionActorBase.generated.h"

class AIGS_GameCharacterFramework;
class UBoxComponent;
class UIGS_SuspicionComponent;
class USceneComponent;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_SuspicionActorBase : public AActor, public IGenericTeamAgentInterface, public IAISightTargetInterface, public IIGS_GameplayTagAssetInterfaceCustom, public IIGS_SuspicionInterface {
    GENERATED_BODY()
public:
    AIGS_SuspicionActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTeamID(EIGS_TeamSideEnum inTeamID);

    UFUNCTION(BlueprintCallable)
    void SetSuspicionLifeTimeEnded();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSuspicionActorOffenceReportedEvent(AActor* inReporter);

    UFUNCTION(BlueprintImplementableEvent)
    void OnSuspicionActorNoticedEvent(AActor* inNoticer);

    UFUNCTION(BlueprintPure)
    UIGS_SuspicionComponent* GetSuspicionComponent() const;

    UFUNCTION(BlueprintPure)
    AIGS_GameCharacterFramework* GetOwningCharacter() const;

    UPROPERTY(BlueprintAssignable)
    FIGS_SuspicionActorNoticedSignature OnSuspicionActorNoticed;

    UPROPERTY(BlueprintAssignable)
    FIGS_SuspicionActorOffenceReportedSignature OnSuspicionActorOffenceReported;

protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_SuspicionComponent* SuspicionComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* Root;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USceneComponent* SceneRoot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TeamSideEnum TeamSide;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer ActorGameplayTags;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LifetimeStartTime;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float LifeTime;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float NoticedLifetime;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool Eternal;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsValidForAmbient;


    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);

    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);

    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);

    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);

};
