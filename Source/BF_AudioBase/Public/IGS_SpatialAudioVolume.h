#pragma once
#include "CoreMinimal.h"
#include "AkSpatialAudioVolume.h"
#include "EIGS_AkEnvironmentSpace.h"
#include "IGS_SpatialAudioVolume.generated.h"

class AActor;

UCLASS()
class BF_AUDIOBASE_API AIGS_SpatialAudioVolume : public AAkSpatialAudioVolume {
    GENERATED_BODY()
public:
    AIGS_SpatialAudioVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnOverlapEnd(AActor* inOverlappedActor, AActor* inOtherActor);

    UFUNCTION()
    void OnOverlapBegin(AActor* inOverlappedActor, AActor* inOtherActor);

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_AkEnvironmentSpace AkEnviroSpace;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CopyTransmissionLossToSurfaces;

};
