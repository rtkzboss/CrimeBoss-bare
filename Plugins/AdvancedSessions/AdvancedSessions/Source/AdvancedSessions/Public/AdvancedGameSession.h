#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AdvancedGameSession.generated.h"

UCLASS()
class AAdvancedGameSession : public AGameSession {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<FUniqueNetIdRepl, FText> BanList;
    
    AAdvancedGameSession(const FObjectInitializer& ObjectInitializer);

};

