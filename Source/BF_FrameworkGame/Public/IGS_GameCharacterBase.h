#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "IGS_GameCharacterFramework.h"
#include "Rollbackable.h"
#include "GameplayTagContainer.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_ImpactTypeObject.h"
#include "IGS_HasDisabledPropCollisionChangedSignature.h"
#include "IGS_HitEffectHandlerInterface.h"
#include "IGS_SettingsID.h"
#include "Templates/SubclassOf.h"
#include "IGS_GameCharacterBase.generated.h"

class AIGS_AISpawnPoint;
class AIGS_WaypointFramework;
class UAkAudioEvent;
class UAkComponent;
class UAnimMontage;
class UIGS_DangerAreaComponent;
class UIGS_DynamicMaterialHandlerComponent;
class UIGS_IdleAvoidanceComponent;
class UIGS_ItemDropComponent;
class UIGS_RollbackComponent;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_GameCharacterBase : public AIGS_GameCharacterFramework, public IAISightTargetInterface, public IRollbackable, public IIGS_HitEffectHandlerInterface {
    GENERATED_BODY()
public:
    AIGS_GameCharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(NetMulticast, Reliable)
    void RM_StopAnimation(UAnimMontage* Montage);

    UFUNCTION(NetMulticast, Reliable)
    void RM_PlayAnimation(UAnimMontage* Montage, FName SectionName, float PlayRate, float StartPosition);

    UFUNCTION(BlueprintCallable)
    void ResetAICollisionSettings();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnedByAI(AIGS_AISpawnPoint* inSpawnPoint);

protected:
    UFUNCTION()
    void OnRep_IsInTransition() const;

    UFUNCTION()
    void OnRep_DisabledPropCollision();

public:
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_IsInTransitionChanged(bool inIsInTransition);

    UFUNCTION(BlueprintPure)
    AIGS_WaypointFramework* GetSpawnGoToWaypoint() const;

    UFUNCTION(BlueprintCallable)
    void DisableAIPropCollision();

    UPROPERTY(BlueprintAssignable)
    FIGS_HasDisabledPropCollisionChangedSignature OnHasDisabledPropCollisionChanged;

    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    AIGS_AISpawnPoint* SpawnedOnPoint;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_DynamicMaterialHandlerComponent* DynamicMaterialHandlerComponent;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGameplayTagContainer DefendTags;

    UPROPERTY(VisibleAnywhere)
    TSubclassOf<UIGS_SettingsID> SettingsOverride;

    UPROPERTY(VisibleAnywhere)
    bool SpawnedFromMonsterCloset;

protected:
    UPROPERTY(ReplicatedUsing=OnRep_IsInTransition)
    bool R_IsInTransition;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_TeamSideEnum TeamSide;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_UnitSpecialization UnitSpecialization;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CharacterWieldable3PVModelScaleMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CharacterWieldableFPVModelScaleMultiplier;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_ImpactTypeObject> KillConfirmedParticleID;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_RollbackComponent* RollbackComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UAkComponent* AkAudioComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_DangerAreaComponent* DangerAreaComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_ItemDropComponent* ItemDropComponent;

    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_IdleAvoidanceComponent* IdleAvoidanceComponent;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InjuryOffenceDuration;

    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_DisabledPropCollision)
    bool bHasDisabledPropCollision;

    UPROPERTY(VisibleDefaultsOnly)
    bool bRegisterOnBeginPlay;

    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* CrouchAkAudioEvent;

    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* UncrouchAkAudioEvent;

    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* SlideAkAudioEvent;

    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* SlideStopAkAudioEvent;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};
