#pragma once
#include "CoreMinimal.h"
#include "IGS_AIModifiableDataDef.h"
#include "IGS_AIModifiableFloatDataDef.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIModifiableFloatDataDef : public FIGS_AIModifiableDataDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Overload;

    UPROPERTY(VisibleAnywhere)
    float Value;

    FIGS_AIModifiableFloatDataDef();
};
