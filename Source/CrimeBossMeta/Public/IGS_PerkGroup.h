#pragma once
#include "CoreMinimal.h"
#include "IGS_PerkGroup.generated.h"

class UMETA_Perk;

USTRUCT(BlueprintType)
struct FIGS_PerkGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, UMETA_Perk*> Perks;

    CRIMEBOSSMETA_API FIGS_PerkGroup();
};
