#pragma once
#include "CoreMinimal.h"
#include "META_DetectiveID.h"
#include "EIGS_CopsVariationType.h"
#include "IGS_AIBaseDetectiveTierData.h"
#include "IGS_AILoadout.h"
#include "IGS_AIThrowableWeaponDef.h"
#include "IGS_AIUnitCharacterData.h"
#include "IGS_DetectiveSpecificData.h"
#include "Templates/SubclassOf.h"
#include "IGS_AIDetectiveDef.generated.h"

USTRUCT()
struct BF_FRAMEWORKGAME_API FIGS_AIDetectiveDef {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FText Name;

    UPROPERTY(EditAnywhere)
    TSubclassOf<UMETA_DetectiveID> MetaID;

    UPROPERTY(EditAnywhere)
    FIGS_DetectiveSpecificData Stats;

    UPROPERTY(EditAnywhere)
    FIGS_AIBaseDetectiveTierData SpecStats;

    UPROPERTY(EditAnywhere)
    FIGS_AIUnitCharacterData Character;

    UPROPERTY(EditAnywhere)
    FIGS_AILoadout Loadout;

    UPROPERTY(EditAnywhere)
    TArray<FIGS_AIThrowableWeaponDef> ThrowablePool;

    UPROPERTY()
    EIGS_CopsVariationType Variation;

    FIGS_AIDetectiveDef();
};
