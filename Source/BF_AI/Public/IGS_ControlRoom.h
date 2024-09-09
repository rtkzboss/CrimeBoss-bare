#pragma once
#include "CoreMinimal.h"
#include "IGS_ControlRoomBase.h"
#include "IGS_ControlRoom.generated.h"

class AIGS_SquadGuard;
class UIGS_AIDirector;
class UIGS_GuardControlRoomComponent;
class UIGS_SuspicionManager;

UCLASS()
class BF_AI_API AIGS_ControlRoom : public AIGS_ControlRoomBase {
    GENERATED_BODY()
public:
    AIGS_ControlRoom(const FObjectInitializer& ObjectInitializer);

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SquadID;
    
    UPROPERTY(EditInstanceOnly)
    bool DEBUG_DisableRadio;
    
    UPROPERTY(EditInstanceOnly)
    bool DEBUG_DisableAlarmButtonReaction;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AIGS_SquadGuard> GuardSquad;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UIGS_GuardControlRoomComponent> GuardSquadControlRoomComponent;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UIGS_AIDirector> AIDirector;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UIGS_SuspicionManager> SuspicionManager;
    
};

