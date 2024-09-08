#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PropGroupCode.generated.h"

class UActorComponent;

UCLASS()
class BF_PROPS_API APropGroupCode : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    TArray<UActorComponent*> PropCanSpawnList;
    
    UPROPERTY(Instanced)
    TArray<UActorComponent*> PropToSpawnList;
    
    UPROPERTY(Instanced)
    TArray<UActorComponent*> PropBlockedList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> BlockedTags;
    
    UPROPERTY(Instanced)
    TMap<FName, UActorComponent*> ComponentMap;
    
public:
    APropGroupCode(const FObjectInitializer& ObjectInitializer);

};

