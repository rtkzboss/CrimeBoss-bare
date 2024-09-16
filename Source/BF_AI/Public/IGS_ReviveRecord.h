#pragma once
#include "CoreMinimal.h"
#include "IGS_ReviveRecord.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AICommandBeingRevived;
class UIGS_AICommandRevive;

USTRUCT()
struct BF_AI_API FIGS_ReviveRecord {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TWeakObjectPtr<AIGS_GameCharacterFramework> InjuredCharacter;

    UPROPERTY(VisibleAnywhere)
    UIGS_AICommandBeingRevived* BeingRevivedCommand;

    UPROPERTY(VisibleAnywhere)
    TWeakObjectPtr<AIGS_GameCharacterFramework> RevivingCharacter;

    UPROPERTY(VisibleAnywhere)
    UIGS_AICommandRevive* RevivingCommand;

    FIGS_ReviveRecord();
};
