#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_AINotif.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "IGS_SubSquad.h"
#include "IGS_BTTask_SquadSearch.generated.h"

class AIGS_GameCharacterFramework;

UCLASS()
class BF_AI_API UIGS_BTTask_SquadSearch : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_SquadSearch();

    UFUNCTION()
    void OnNotifyReceived(EIGS_AINotif inType, AIGS_GameCharacterFramework* inInstigator, AIGS_GameCharacterFramework* inTarget, FVector InPos, FVector inDir);
    
protected:
    UPROPERTY(VisibleAnywhere)
    FIGS_SubSquad SubSquadRight;
    
    UPROPERTY(VisibleAnywhere)
    FIGS_SubSquad SubSquadLeft;
    
    UPROPERTY(EditAnywhere)
    bool bDrawDebug;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(VisibleAnywhere)
    bool bMovingToPlayer;
    
};

