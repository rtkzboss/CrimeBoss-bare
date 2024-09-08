#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_FireVolume.generated.h"

class AIGS_FireVolume;
class UBoxComponent;
class UCurveFloat;
class UNiagaraComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_FireVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<AIGS_FireVolume*> NeighborsFireVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeatRegenPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxHeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Heat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* HeatToFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Immortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowRegen;
    
private:
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* Volume;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* FireNiagaraComponent;
    
public:
    AIGS_FireVolume(const FObjectInitializer& ObjectInitializer);

};

