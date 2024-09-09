#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_SquadManager.generated.h"

class AIGS_SquadFramework;
class UIGS_SquadClassesHolder;
class UIGS_SquadManager;
class UObject;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_SquadManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_SquadManager();

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWCO))
    static UIGS_SquadManager* Instance(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    AIGS_SquadFramework* GetSquadFromID(int32 inSquadID);
    
    UFUNCTION(BlueprintCallable)
    AIGS_SquadFramework* AddSquad(EIGS_TeamSideEnum inTeamSide, EIGS_UnitSpecialization inSpecialization);
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_SquadFramework*> Squads;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UIGS_SquadClassesHolder* SquadClassesHolder;
    
};

