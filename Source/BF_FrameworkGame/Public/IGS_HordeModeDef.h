#pragma once
#include "CoreMinimal.h"
#include "IGS_HordeModeSideDef.h"
#include "IGS_HordeModeDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_HordeModeDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_HordeModeSideDef Dragon;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_HordeModeSideDef Hielo;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_HordeModeSideDef Khan;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_HordeModeSideDef Cagnali;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIGS_HordeModeSideDef Friendlies;

    FIGS_HordeModeDef();
};
