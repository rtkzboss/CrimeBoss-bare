#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"
#include "IGS_ImpactManagerPreload.generated.h"

class UIGS_ImpactManagerSettings;
class UIGS_ImpactTypeObject;

UCLASS()
class BF_IMPACTS_API UIGS_ImpactManagerPreload : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<TSubclassOf<UIGS_ImpactTypeObject>> LoadedIDs;
    
    UPROPERTY()
    UIGS_ImpactManagerSettings* ImpactManagerSettings;
    
public:
    UIGS_ImpactManagerPreload();

};

