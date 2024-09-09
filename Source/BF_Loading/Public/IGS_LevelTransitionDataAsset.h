#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_LevelTransitionDataAsset.generated.h"

class UAkStateValue;

UCLASS()
class BF_LOADING_API UIGS_LevelTransitionDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_LevelTransitionDataAsset();

    UPROPERTY(EditDefaultsOnly)
    float DelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* Starter_MainMenu;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* MainMenu_MetaMultiplayer;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* MetaMultiplayer_MainMenu;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* MetaMultiplayer_Mission;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* Mission_MetaMultiplayer;
    
};

