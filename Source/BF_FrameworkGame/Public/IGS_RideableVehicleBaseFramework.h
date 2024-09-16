#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "IGS_RideableVehicleBaseFramework.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API AIGS_RideableVehicleBaseFramework : public APawn {
    GENERATED_BODY()
public:
    AIGS_RideableVehicleBaseFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    int32 GetSeatIndexForPawn(AIGS_GameCharacterFramework* inCharacter) const;

    UFUNCTION(BlueprintPure)
    int32 GetLocalSeatIndex() const;

};
