#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadGuardians.h"
#include "IGS_SquadGuard.generated.h"

class UIGS_GuardControlRoomComponent;

UCLASS(Abstract)
class BF_AI_API AIGS_SquadGuard : public AIGS_SquadGuardians {
    GENERATED_BODY()
public:
    AIGS_SquadGuard(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UIGS_GuardControlRoomComponent* GetGuardControlRoomComponent() const;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UIGS_GuardControlRoomComponent* GuardControlRoomComponent;
    
};

