#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_LevelGeneratorSubsystem.generated.h"

class ANavigationData;
class UIGS_LevelGeneratorSubsystem;
class UObject;

UCLASS(BlueprintType)
class BF_LEVELGENERATOR_API UIGS_LevelGeneratorSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_LevelGeneratorSubsystem();

    UFUNCTION(BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_LevelGeneratorSubsystem* Instance(const UObject* inWorldContextObject);
    
private:
    UFUNCTION()
    void InitializeRooms_Server(ANavigationData* inNavData);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetDefaultSeed() const;
    
    UPROPERTY()
    bool bIsBuildingFinished;
    
    virtual TStatId GetStatId() const override { return {}; }
};

