#pragma once
#include "CoreMinimal.h"
#include "EIGS_StorePlatform.h"
#include "CommonHeisterData.h"
#include "GameFramework/Actor.h"
#include "EIGS_MenuSlotOccupation.h"
#include "IGS_MenuSlotBase.generated.h"

class AIGS_PlayerStateGame;
class APlayerState;

UCLASS(Abstract)
class CRIMEBOSSMETA_API AIGS_MenuSlotBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_MenuSlotBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePlayerHeisterData(APlayerState* inPlayerState, const FCommonHeisterData& inHeisterData);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void IsConfirmed(bool& NewIsConfirmed);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    EIGS_StorePlatform GetStorePlatform() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void GetPlayerState(AIGS_PlayerStateGame*& PlayerState);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void GetOccupation(EIGS_MenuSlotOccupation& Occupation);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void GetHeisterData(FCommonHeisterData& HeisterData);
    
};

