#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_ChainMissionNames.h"
#include "IGS_MetaMissionNames.h"
#include "IGS_QuickplayMissionNames.h"
#include "IGS_MissionNamesDatabase.generated.h"

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UIGS_MissionNamesDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_MissionNamesDatabase();

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_MetaMissionNames MetaMissionNames;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_QuickplayMissionNames QuickplayMissionNames;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_ChainMissionNames ChainMissionNames;

};
