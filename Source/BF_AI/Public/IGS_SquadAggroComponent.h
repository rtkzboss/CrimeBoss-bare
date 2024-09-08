#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_SquadAggroComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_AI_API UIGS_SquadAggroComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<AActor*, int32> m_TmpMap;
    
    UPROPERTY()
    TArray<AActor*> m_TmpCharacterArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FightSecondsAfterTargetLost;
    
    UPROPERTY()
    float TraceDelay;
    
    UPROPERTY()
    int32 TraceCount;
    
public:
    UIGS_SquadAggroComponent(const FObjectInitializer& ObjectInitializer);

};

