#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_ImpactTypeObject.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EIGS_ImpactTable.h"
#include "EIGS_ImpactType.h"
#include "IGS_ImpactHitParameter.h"
#include "IGS_ImpactParameters.h"
#include "Templates/SubclassOf.h"
#include "IGS_ImpactFunctionLibrary.generated.h"

class AActor;
class UObject;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class BF_IMPACTS_API UIGS_ImpactFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_ImpactFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext=inWCO))
    static void CreateImpactDecal(const UObject* inWCO, FHitResult inHitResult, EPhysicalSurface inSurfaceType, TSubclassOf<UIGS_ImpactTypeObject> inImpactID, FGameplayTag inGameplayTag);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext=inWCO))
    static void CreateImpact(const UObject* inWCO, EIGS_ImpactTable inImpactTable, EPhysicalSurface inPhysicalSurface, EIGS_ImpactType inImpactType, const FIGS_ImpactParameters& inParameters);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext=inWCO))
    static void CreateHitImpact(const UObject* inWCO, const AActor* InstigatorActor, const UPrimitiveComponent* InstigatorComponent, const UPrimitiveComponent* TargetComponent, const FHitResult& Hit, const FIGS_ImpactHitParameter& Param);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext=inWCO))
    static void CreateAllImpacts(const UObject* inWCO, EIGS_ImpactTable inImpactTable, EPhysicalSurface inPhysicalSurface, const FIGS_ImpactParameters& inParameters);

};
