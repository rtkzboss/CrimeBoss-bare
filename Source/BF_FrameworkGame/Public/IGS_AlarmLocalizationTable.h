#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_AlarmReason.h"
#include "IGS_AlarmLocalizationTable.generated.h"

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_AlarmLocalizationTable : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_AlarmLocalizationTable();

    UPROPERTY(EditDefaultsOnly)
    TMap<EIGS_AlarmReason, FText> Entry;

};
