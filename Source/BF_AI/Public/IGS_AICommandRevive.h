#pragma once
#include "CoreMinimal.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandRevive.generated.h"

class AIGS_GameCharacterFramework;

UCLASS()
class BF_AI_API UIGS_AICommandRevive : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UIGS_AICommandRevive();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AIGS_GameCharacterFramework* CharacterToRevive;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsReviving;

};
