#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EIGS_CharacterID.h"
#include "EIGS_MenuCategory.h"
#include "IGS_BaseMissionObject.h"
#include "Templates/SubclassOf.h"
#include "CommonMissionDataBase.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FCommonMissionDataBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UIGS_BaseMissionObject> ID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag MissionTagID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Map;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer Scenarios;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_MenuCategory MenuCategory;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsHubGeneratorMission;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DistrictVariant;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EIGS_CharacterID ForceCharacter;

    FCommonMissionDataBase();
};
