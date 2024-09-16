#pragma once
#include "CoreMinimal.h"
#include "META_DetectiveID.h"
#include "Templates/SubclassOf.h"
#include "CommonDetectiveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FCommonDetectiveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMETA_DetectiveID> DetectiveID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlive;

    UPROPERTY(BlueprintReadOnly)
    bool bWasSpawned;

    FCommonDetectiveData();
};
