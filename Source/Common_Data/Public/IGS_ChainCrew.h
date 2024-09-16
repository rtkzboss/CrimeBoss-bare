#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMETA_ItemQuality.h"
#include "IGS_ChainCharacter.h"
#include "IGS_ChainCrewID.h"
#include "Templates/SubclassOf.h"
#include "IGS_ChainCrew.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ChainCrew : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_ChainCrewID> ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_ChainCharacter> Always;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIGS_ChainCharacter> UniquePool;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniqueAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GenericAmount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMETA_ItemQuality GenericQuality;

    FIGS_ChainCrew();
};
