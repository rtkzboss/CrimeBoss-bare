#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_ImpactTypeObject.h"
#include "Templates/SubclassOf.h"
#include "IGS_ImpactManagerPreload.generated.h"

class UIGS_ImpactManagerSettings;

UCLASS()
class BF_IMPACTS_API UIGS_ImpactManagerPreload : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_ImpactManagerPreload();

protected:
    UPROPERTY()
    TArray<TSubclassOf<UIGS_ImpactTypeObject>> LoadedIDs;

    UPROPERTY()
    UIGS_ImpactManagerSettings* ImpactManagerSettings;

};
