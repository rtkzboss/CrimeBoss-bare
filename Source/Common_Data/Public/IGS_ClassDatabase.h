#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_ClassTableRow.h"
#include "Templates/SubclassOf.h"
#include "IGS_ClassDatabase.generated.h"

class UIGS_GameplayEffect_Class;
class UObject;

UCLASS(BlueprintType)
class COMMON_DATA_API UIGS_ClassDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_ClassDatabase();

    UFUNCTION(BlueprintPure)
    int32 GetIndex(const TSubclassOf<UIGS_GameplayEffect_Class>& inClass) const;
    
    UFUNCTION(BlueprintPure)
    FIGS_ClassTableRow GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static FIGS_ClassTableRow GetClassData(const UObject* inWCO, const TSubclassOf<UIGS_GameplayEffect_Class>& inClass, bool& outSucceeded);
    
};

