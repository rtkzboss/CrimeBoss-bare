#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_FreeWeekendDelegate.h"
#include "IGS_CheckFreeWeeekendNodeBase.generated.h"

class UObject;

UCLASS()
class COMMON_UTILS_API UIGS_CheckFreeWeeekendNodeBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UIGS_CheckFreeWeeekendNodeBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_CheckFreeWeeekendNodeBase* CheckFreeWeekendNodeBase(UObject* inWorldContextObject);

    UPROPERTY(BlueprintAssignable)
    FIGS_FreeWeekendDelegate FreeWeekendActive;

    UPROPERTY(BlueprintAssignable)
    FIGS_FreeWeekendDelegate FreeWeekendNonActive;

    UPROPERTY(BlueprintAssignable)
    FIGS_FreeWeekendDelegate FreeWeekendCheckFailed;

};
