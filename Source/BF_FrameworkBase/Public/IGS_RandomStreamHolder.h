#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "IGS_RandomStreamHolder.generated.h"

UCLASS(BlueprintType)
class BF_FRAMEWORKBASE_API UIGS_RandomStreamHolder : public UObject {
    GENERATED_BODY()
public:
    UIGS_RandomStreamHolder();

    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FRandomStream RandomStream;
    
};

