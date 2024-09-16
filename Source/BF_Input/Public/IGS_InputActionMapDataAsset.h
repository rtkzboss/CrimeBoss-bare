#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_InputActionEntry.h"
#include "IGS_InputActionMapDataAsset.generated.h"

UCLASS()
class BF_INPUT_API UIGS_InputActionMapDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_InputActionMapDataAsset();

    UPROPERTY(EditDefaultsOnly)
    TArray<FIGS_InputActionEntry> InputActions;

};
