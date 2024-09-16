#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "IGS_NavHintVolume.generated.h"

class AIGS_Splitter;

UCLASS()
class BF_AI_API AIGS_NavHintVolume : public AVolume {
    GENERATED_BODY()
public:
    AIGS_NavHintVolume(const FObjectInitializer& ObjectInitializer);

private:
    UPROPERTY(EditAnywhere)
    TArray<AIGS_Splitter*> ExclusiveEntrances;

};
