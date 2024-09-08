#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_AICommand.h"
#include "IGS_AICommandThrowThrowable.generated.h"

class UIGS_ThrowableInventoryObject;

UCLASS()
class BF_AI_API UIGS_AICommandThrowThrowable : public UIGS_AICommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UIGS_ThrowableInventoryObject> Throwable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThrowableCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float GlobalCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsScripted;
    
    UIGS_AICommandThrowThrowable();

};

