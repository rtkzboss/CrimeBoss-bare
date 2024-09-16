#pragma once
#include "CoreMinimal.h"
#include "IGS_LevelActorsContainer.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FIGS_LevelActorsContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<UObject*> Objects;

    CRIMEBOSSMETA_API FIGS_LevelActorsContainer();
};
