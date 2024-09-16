#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_SuspicionOffenceDataTablesAsset.generated.h"

class UDataTable;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_SuspicionOffenceDataTablesAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_SuspicionOffenceDataTablesAsset();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* PlayerOffenceTable;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* NoiseOffenceTable;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* SuspActorsOffenceTable;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* SpecialOffenceTable;

};
