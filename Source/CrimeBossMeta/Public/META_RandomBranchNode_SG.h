#pragma once
#include "CoreMinimal.h"
#include "META_BaseNode_SG.h"
#include "META_RandomWayChance.h"
#include "META_RandomBranchNode_SG.generated.h"

UCLASS()
class CRIMEBOSSMETA_API UMETA_RandomBranchNode_SG : public UMETA_BaseNode_SG {
    GENERATED_BODY()
public:
    UMETA_RandomBranchNode_SG();

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FMETA_RandomWayChance> WaysChances;

};
