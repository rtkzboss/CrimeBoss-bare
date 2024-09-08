#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "BTService_SolveStickyType.generated.h"

UCLASS()
class BF_AI_API UBTService_SolveStickyType : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector StickyTypeKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector OutStickyCharacterKey;
    
    UPROPERTY(EditAnywhere)
    bool AllowStickyMove;
    
    UPROPERTY(EditAnywhere)
    float StickyMoveChance;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval InvalidTimeCommon;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval InvalidTimeOutside;
    
public:
    UBTService_SolveStickyType();

};

