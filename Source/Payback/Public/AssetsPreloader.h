#pragma once
#include "CoreMinimal.h"
#include "IGS_LoadingInProgressInterface.h"
#include "GameFramework/Actor.h"
#include "AssetsPreloader.generated.h"

class UIGS_VoiceoverSubsystemDataAsset;

UCLASS(Config=Inherit)
class PAYBACK_API AAssetsPreloader : public AActor, public IIGS_LoadingInProgressInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldPreload;
    
protected:
    UPROPERTY(Transient)
    UIGS_VoiceoverSubsystemDataAsset* VODatabase;
    
public:
    AAssetsPreloader(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

