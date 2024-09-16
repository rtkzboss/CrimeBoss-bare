#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PFPathBase.generated.h"

class UPFPathComponent;

UCLASS()
class PATHFOLLOW_API APFPathBase : public AActor {
    GENERATED_BODY()
public:
    APFPathBase(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UPFPathComponent* PathToFollow;

};
