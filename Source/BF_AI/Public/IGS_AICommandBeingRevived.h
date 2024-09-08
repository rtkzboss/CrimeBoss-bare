#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandBeingRevived.generated.h"

class AIGS_GameCharacterFramework;

UCLASS()
class BF_AI_API UIGS_AICommandBeingRevived : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AIGS_GameCharacterFramework* RevivedByCharacter;
    
    UIGS_AICommandBeingRevived();

};

