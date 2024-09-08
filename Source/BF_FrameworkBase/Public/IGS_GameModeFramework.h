#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "IGS_GameModeFramework.generated.h"

class APlayerState;
class UObject;

UCLASS(NonTransient)
class BF_FRAMEWORKBASE_API AIGS_GameModeFramework : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<APlayerState*> InactivePlayerArray;
    
    AIGS_GameModeFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlayersImmortal(bool inImmortal);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static bool IsAnyHeisterAlive(UObject* inWCO);
    
};

