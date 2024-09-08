#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "IGS_OnCharacterSpawnedSignatureDelegate.h"
#include "IGS_BotStart.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_BotStart : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIGS_OnCharacterSpawnedSignature OnCharacterSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Compulsory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BotStartTag;
    
    AIGS_BotStart(const FObjectInitializer& ObjectInitializer);

};

