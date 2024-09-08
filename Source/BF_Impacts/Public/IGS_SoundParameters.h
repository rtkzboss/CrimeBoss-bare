#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_FootstepSoundParameters.h"
#include "IGS_HitSoundParameters.h"
#include "IGS_MeleeSoundParameters.h"
#include "IGS_SoundParameters.generated.h"

class UAkComponent;

USTRUCT(BlueprintType)
struct BF_IMPACTS_API FIGS_SoundParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_FootstepSoundParameters FootstepParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_MeleeSoundParameters MeleeParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_HitSoundParameters HitParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TWeakObjectPtr<UAkComponent> CustomAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 PhysicalSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreOptimizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer PoolTags;
    
    FIGS_SoundParameters();
};

