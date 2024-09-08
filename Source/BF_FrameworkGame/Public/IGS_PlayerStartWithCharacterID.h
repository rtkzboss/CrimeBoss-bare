#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "EIGS_CharacterID.h"
#include "IGS_PlayerStartWithCharacterID.generated.h"

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_PlayerStartWithCharacterID : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_CharacterID CharacterID;
    
    AIGS_PlayerStartWithCharacterID(const FObjectInitializer& ObjectInitializer);

};

