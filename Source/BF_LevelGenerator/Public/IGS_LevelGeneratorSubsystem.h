#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_LevelGeneratorSubsystem.generated.h"

class ANavigationData;
class UObject;
struct FIGS_ConnectionPointData;
struct FIGS_VariantDefinition;
class UIGS_BuildConfigurationDataAsset;
class AIGS_LevelBuilder_LevelScriptActor;
class ULevelStreamingDynamic;
struct FRICOLevelGeneratorSubsystem_InstanceData;
struct FIGS_GeneratorVariantData;

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
		FVector Translation = FVector::ZeroVector;
		float Rotation = 0.f;

		FConnectionPointTransform() {}
		FConnectionPointTransform(FVector Translation, float Rotation)
			: Translation(Translation)
			, Rotation(Rotation)
		{}
		static FConnectionPointTransform Between(FIGS_ConnectionPointData const& Src, FIGS_ConnectionPointData const& Dst);
		FRotator Rotator() const;
		void ApplyTo(FIGS_ConnectionPointData& CP) const;
	};
	struct FCachedConfiguration
	{
		TArrayView<FIGS_ConnectionPointData const> ConnectionPoints;
		TArrayView<FIGS_VariantDefinition const> Variants;
		TSoftObjectPtr<UWorld> const& Level;

		FCachedConfiguration(UIGS_BuildConfigurationDataAsset* BCDA);
		FCachedConfiguration(TArrayView<FIGS_ConnectionPointData const> ConnectionPoints, TArrayView<FIGS_VariantDefinition const> Variants, TSoftObjectPtr<UWorld> const& Level)
			: ConnectionPoints(ConnectionPoints)
			, Variants(Variants)
			, Level(Level)
		{
		}
	};

	void SetDefaultSeed(int32 inDefaultSeed) { DefaultSeed = inDefaultSeed; }
	bool LoadLevelAccordingToConfiguration(UIGS_RandomStreamHolder* RSH, FIGS_GeneratorVariantData VariantData, FIGS_ConnectionPointData const& Connection, FName ConnectionName, FName VariantName, FCachedConfiguration Configuration, TArray<FIGS_ConnectionPointData>& OutConnectionPoints);

	AIGS_LevelBuilder_LevelScriptActor* GetMainLevelScriptActor() const;
	ULevel* GetMainLevel() const;

private:
	UPROPERTY()
	int32 DefaultSeed = -1;
};
