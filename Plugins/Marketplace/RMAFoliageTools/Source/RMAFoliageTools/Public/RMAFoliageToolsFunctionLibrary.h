#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RMAFoliageToolsFunctionLibrary.generated.h"

class AInstancedFoliageActor;

UCLASS(BlueprintType)
class RMAFOLIAGETOOLS_API URMAFoliageToolsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URMAFoliageToolsFunctionLibrary();

    UFUNCTION(BlueprintPure)
    static FName GetVersion();
    
    UFUNCTION(BlueprintPure)
    static AInstancedFoliageActor* GetInstancedFoliageActor();
    
};

