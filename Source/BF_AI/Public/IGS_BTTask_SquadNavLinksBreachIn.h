#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "IGS_BTTask_SquadNavLinksBreachIn.generated.h"

class AIGS_GameCharacterFramework;

UCLASS()
class BF_AI_API UIGS_BTTask_SquadNavLinksBreachIn : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_SquadNavLinksBreachIn();

protected:
    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> BreachingMembers;

    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> AllreadyBreachedMembers;

    UPROPERTY()
    TArray<AIGS_GameCharacterFramework*> WaitingForBreachMembers;

};
