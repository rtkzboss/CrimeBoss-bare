#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_SquadClassDefinition.h"
#include "IGS_SquadClassesHolder.generated.h"

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_SquadClassesHolder : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_SquadClassesHolder();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EIGS_TeamSideEnum, FIGS_SquadClassDefinition> SquadClasses;

};
