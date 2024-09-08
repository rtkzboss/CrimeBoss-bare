#pragma once
#include "CoreMinimal.h"
#include "IGS_AITransitionObjectBase.h"
#include "UObject/NoExportTypes.h"
#include "IGS_MonsterCloset.generated.h"

class AIGS_AIEnemyGroupSpawner;
class AIGS_ScriptPoint;
class UBoxComponent;

UCLASS(Config=Inherit)
class BF_AI_API AIGS_MonsterCloset : public AIGS_AITransitionObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<AIGS_AIEnemyGroupSpawner*> AIEnemyGroupSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<AIGS_ScriptPoint*> CharacterRemovers;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* helpersBox;
    
protected:
    UPROPERTY(EditAnywhere)
    float MaxDistanceToPlayableArea;
    
    UPROPERTY(VisibleAnywhere)
    float DistanceToPlayableArea;
    
    UPROPERTY(VisibleAnywhere)
    FVector ApproxPlayableAreaEntry;
    
    UPROPERTY(EditAnywhere)
    bool CheckValidityInRuntime;
    
public:
    AIGS_MonsterCloset(const FObjectInitializer& ObjectInitializer);

};

