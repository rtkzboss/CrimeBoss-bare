#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ConstructionSystemSavePlayerInfo.generated.h"

USTRUCT()
struct CONSTRUCTIONSYSTEMRUNTIME_API FConstructionSystemSavePlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bRestorePlayerInfo;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FRotator ControlRotation;
    
    FConstructionSystemSavePlayerInfo();
};

