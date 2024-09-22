#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_LevelGeneratorSubsystem.generated.h"

class ANavigationData;
class UObject;
struct FIGS_ConnectionPointData;
struct FIGS_VariantDefinition;
class UIGS_BuildConfigurationDataAsset;

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

public:
	struct FConnectionPointTransform
	{
		FVector Translation;
		float Rotation;

		static FConnectionPointTransform Between(FIGS_ConnectionPointData const& Src, FIGS_ConnectionPointData const& Dst);
		FRotator Rotator() const;
		void ApplyTo(FIGS_ConnectionPointData& CP) const;
	};

	void SetDefaultSeed(int32 inDefaultSeed) { DefaultSeed = inDefaultSeed; }
	bool LoadLevelAccordingToConfiguration(FIGS_ConnectionPointData const& Connection, FName ConnectionName, TArrayView<FIGS_ConnectionPointData const> ConnectionPoints, FName VariantName, TArrayView<FIGS_VariantDefinition const> Variants, UIGS_BuildConfigurationDataAsset* BuildConfiguration, TArray<FIGS_ConnectionPointData>& OutConnectionPoints);
private:
	int32 DefaultSeed = -1;
};
