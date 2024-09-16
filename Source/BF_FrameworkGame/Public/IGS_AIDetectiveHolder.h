#pragma once
#include "CoreMinimal.h"
#include "META_DetectiveID.h"
#include "EIGS_CopsVariationType.h"
#include "IGS_AIDetectiveDef.h"
#include "IGS_AIUnitBaseDataDefaults.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIDetectiveHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIDetectiveHolder {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIGS_AIUnitBaseDataDefaults DefaultStats;

    UPROPERTY(EditAnywhere)
    FIGS_AIDetectiveDef Detective1;

    UPROPERTY(EditAnywhere)
    FIGS_AIDetectiveDef Detective2;

    UPROPERTY(EditAnywhere)
    FIGS_AIDetectiveDef Detective3;

    UPROPERTY(EditAnywhere)
    FIGS_AIDetectiveDef Detective4;

    UPROPERTY(EditAnywhere)
    FIGS_AIDetectiveDef Detective5;

    UPROPERTY(EditAnywhere)
    FIGS_AIDetectiveDef Detective6;

    UPROPERTY(EditAnywhere)
    FIGS_AIDetectiveDef Detective7;

    UPROPERTY(EditAnywhere)
    FIGS_AIDetectiveDef Detective8;

    UPROPERTY(EditAnywhere)
    FIGS_AIDetectiveDef Detective9;

    UPROPERTY(EditAnywhere)
    FIGS_AIDetectiveDef Detective10;

private:
    UPROPERTY()
    TMap<TSubclassOf<UMETA_DetectiveID>, FIGS_AIDetectiveDef> m_MetaToDetectiveMap;

    UPROPERTY()
    TMap<EIGS_CopsVariationType, FIGS_AIDetectiveDef> m_VarToDetectiveMap;

public:
    FIGS_AIDetectiveHolder();
};
