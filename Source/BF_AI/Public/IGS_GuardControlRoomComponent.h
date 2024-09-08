#pragma once
#include "CoreMinimal.h"
#include "IGS_GuardControlRoomComponentBase.h"
#include "IGS_GuardControlRoomComponent.generated.h"

class AIGS_ControlRoom;
class AIGS_SquadBase;
class UEnvQuery;
class UIGS_AIDirector;
class UIGS_SuspicionManager;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_GuardControlRoomComponent : public UIGS_GuardControlRoomComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UEnvQuery* CloseGuardEQS;
    
    UPROPERTY(EditAnywhere)
    UEnvQuery* AnyGuardEQS;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AIGS_SquadBase> OwningSquad;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AIGS_ControlRoom> ConnectedControlRoom;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<UIGS_AIDirector> AIDirector;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UIGS_SuspicionManager> SuspicionManager;
    
public:
    UIGS_GuardControlRoomComponent(const FObjectInitializer& ObjectInitializer);

};

