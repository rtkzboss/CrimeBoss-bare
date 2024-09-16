#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_ClientTravel.generated.h"

class UObject;

UCLASS()
class BF_LOADING_API UIGS_ClientTravel : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_ClientTravel();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_ClientTravel* ClientTravel(UObject* inWCO, FName inLevelName);

};
