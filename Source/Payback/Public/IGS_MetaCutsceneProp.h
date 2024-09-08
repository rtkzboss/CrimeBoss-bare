#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "IGS_MetaCutsceneProp.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct PAYBACK_API FIGS_MetaCutsceneProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AActor> Actor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform Transform;
    
    FIGS_MetaCutsceneProp();
};

