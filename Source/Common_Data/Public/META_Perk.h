#pragma once
#include "CoreMinimal.h"
#include "IGS_PerksTableRow.h"
#include "META_BaseObject.h"
#include "META_Perk.generated.h"

UCLASS()
class COMMON_DATA_API UMETA_Perk : public UMETA_BaseObject {
    GENERATED_BODY()
public:
    UMETA_Perk();

    UFUNCTION(BlueprintPure)
    int32 GetPerkLevel();

    UFUNCTION(BlueprintPure)
    FIGS_PerksTableRow GetPerkData() const;

};
