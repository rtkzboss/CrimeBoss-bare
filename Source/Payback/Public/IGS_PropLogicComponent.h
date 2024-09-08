#pragma once
#include "CoreMinimal.h"
#include "IGS_PropLogicComponentBase.h"
#include "PropSpawnerBudgetStruct.h"
#include "IGS_PropLogicComponent.generated.h"

class AActor;
class UIGS_PropActorSpawner;
class UIGS_PropMeshSpawner;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UIGS_PropLogicComponent : public UIGS_PropLogicComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FPropSpawnerBudgetStruct SpawningBudget;
    
    UPROPERTY()
    AActor* m_Parent;
    
    UPROPERTY()
    bool m_IsGenerated;
    
public:
    UIGS_PropLogicComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintPure)
    TArray<UIGS_PropMeshSpawner*> GetPropMeshSpawners() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UIGS_PropActorSpawner*> GetPropActorSpawners() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetIsGenerated() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Generate(int32 inPropsSeed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DespawnActors();
    
};

