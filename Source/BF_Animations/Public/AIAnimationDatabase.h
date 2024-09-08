#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DeathAnimations.h"
#include "AIAnimationDatabase.generated.h"

UCLASS()
class BF_ANIMATIONS_API UAIAnimationDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDeathAnimations DeathAnimations;
    
    UAIAnimationDatabase();

};

