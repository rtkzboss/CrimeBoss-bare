#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "IGS_DebugSubsystemBlueprint.generated.h"

class AActor;
class UIGS_DebugTogglesWidget;
class UPhysicalMaterial;
class UUserWidget;

UCLASS(Abstract, Blueprintable)
class BF_DEBUG_API UIGS_DebugSubsystemBlueprint : public UObject {
    GENERATED_BODY()
public:
    UIGS_DebugSubsystemBlueprint();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SpawnUnits(EIGS_TeamSideEnum inTeamSide, EIGS_UnitSpecialization inUnitSpec, int32 inCount, FTransform InTransform);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnFearNumbers(float inFear, FVector inActorLocation, bool inIsDuty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnDamageNumbers(float inDamage, UPhysicalMaterial* inPhysicalMaterialHit, FVector inActorLocation);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetSquandToAI(AActor* inAI, AActor* inSquad);
    
    UFUNCTION(BlueprintImplementableEvent, meta=(WorldContext=inWCO))
    AActor* CreateSquad(UObject* inWCO, EIGS_TeamSideEnum inTeamSide);
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UIGS_DebugTogglesWidget> DebugMenuClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> SWATClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> HeisterClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UUserWidget> DamageNumbersWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UUserWidget> FearNumbersWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> AmmoClassLarge;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> AmmoClassSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TeamSideEnum SpawnTeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpawnMinChokePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpawnMaxChokePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseCustomMission;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_DebugTogglesWidget* DebugMenu;
    
};

