#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Volume.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_TerritoryVolume.generated.h"

class AActor;
class AIGS_AIEnemyGroupSpawner;
class AIGS_RoomBase;
class UPrimitiveComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_TerritoryVolume : public AVolume {
    GENERATED_BODY()
public:
    AIGS_TerritoryVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnTerritoryVolumeEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);
    
    UFUNCTION()
    void OnTerritoryVolumeBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCoolDown();
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_TeamSideEnum OwnersTeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CoolDownOnlyForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CoolDownReturnsToNeutral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ApplyRestrictionTagsAutomatically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnoreTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShouldRecomputeOnEmpty;
    
protected:
    UPROPERTY(VisibleAnywhere)
    TArray<TWeakObjectPtr<AIGS_AIEnemyGroupSpawner>> m_GroupSpawners;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TWeakObjectPtr<AIGS_RoomBase>> m_Rooms;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 HeistersCount;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 EnemiesCount;
    
};

