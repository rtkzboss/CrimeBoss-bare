#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "IGS_InputActionEntry.generated.h"

USTRUCT(BlueprintType)
struct BF_INPUT_API FIGS_InputActionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_InputAction InputAction;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ActionName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsHidden;

    FIGS_InputActionEntry();
};
