#pragma once
#include "CoreMinimal.h"
#include "EMETA_Heat.h"
#include "META_DetectiveChancesToAppear.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_DetectiveChancesToAppear {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BaseChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionIsOnTileWithDetective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MissionIsOnNeighbourTileWithDetective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DetectiveIsOnAnyTileOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EMETA_Heat, int32> DependenceOnHeat;
    
    FMETA_DetectiveChancesToAppear();
};

