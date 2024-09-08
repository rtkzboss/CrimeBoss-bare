#pragma once
#include "CoreMinimal.h"
#include "IGS_SubSquad.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AICommand;

USTRUCT()
struct BF_AI_API FIGS_SubSquad {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    AIGS_GameCharacterFramework* Leader;
    
    UPROPERTY(VisibleAnywhere)
    UIGS_AICommand* LeaderCommand;
    
    UPROPERTY(VisibleAnywhere)
    AIGS_GameCharacterFramework* Backup;
    
    UPROPERTY(VisibleAnywhere)
    UIGS_AICommand* BackUpCommand;
    
    FIGS_SubSquad();
};

