#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_EnvironmentVolumeType.h"
#include "IGS_EnvironmentVolumeManager.generated.h"

class AActor;
class AIGS_EnvironmentVolume;
class APostProcessVolume;
class UActorComponent;
class UBoxComponent;
class UIGS_EnvironmentBoxComponent;
class UIGS_FlashlightSettingsDataAsset;
class UObject;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_EnvironmentVolumeManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_EnvironmentVolumeManager();

    UFUNCTION(BlueprintCallable)
    void SetFlashlightSettingsDataAsset(UIGS_FlashlightSettingsDataAsset* inFlashlightSettingsDataAsset);

protected:
    UFUNCTION()
    void OnPostProcessVolumeEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

    UFUNCTION()
    void OnPostProcessVolumeBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

public:
    UFUNCTION()
    void OnInteriorVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

    UFUNCTION()
    void OnInteriorVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
    UFUNCTION()
    void OnEnvironmentVolumeEndOverlap(UActorComponent* inOverlappedComponent, EIGS_EnvironmentVolumeType EnvironmentType, AActor* inOtherActor) const;

    UFUNCTION()
    void OnEnvironmentVolumeBeginOverlap(UActorComponent* inOverlappedComponent, EIGS_EnvironmentVolumeType EnvironmentType, AActor* inOtherActor) const;

public:
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_EnvironmentVolumeManager* Instance(const UObject* inWorldContextObject);

private:
    UPROPERTY(Instanced)
    TArray<UIGS_EnvironmentBoxComponent*> m_EnvironmentBoxComponents;

    UPROPERTY()
    TMap<UBoxComponent*, TWeakObjectPtr<APostProcessVolume>> m_PostProcessVolumes;

    UPROPERTY()
    TArray<AIGS_EnvironmentVolume*> m_EnvironmentVolumes;

};
