#pragma once
#include "CoreMinimal.h"
#include "IGS_LoadingInProgressInterface.h"
#include "GameFramework/Actor.h"
#include "AssetsPreloader.generated.h"

class UIGS_VoiceoverSubsystemDataAsset;

UCLASS()
class PAYBACK_API AAssetsPreloader : public AActor, public IIGS_LoadingInProgressInterface {
    GENERATED_BODY()
public:
    AAssetsPreloader(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldPreload;

protected:
    UPROPERTY(Transient)
    UIGS_VoiceoverSubsystemDataAsset* VODatabase;


    // Fix for true pure virtual functions not being implemented
};
