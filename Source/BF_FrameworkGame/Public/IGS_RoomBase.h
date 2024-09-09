#pragma once
#include "CoreMinimal.h"
#include "IGS_RoomFramework.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "GameplayTagContainer.h"
#include "EIGS_RoomSecurityType.h"
#include "EIGS_RoomType.h"
#include "EIGS_SecurityTier.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_NeighborData.h"
#include "IGS_RoomBase.generated.h"

class AActor;
class AIGS_DynamicWallBase;
class AIGS_RoomBase;
class UIGS_SafePointComponent;
class UIGS_SearchPointComponent;
class UIGS_ThreatPointComponent;
class UPrimitiveComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_RoomBase : public AIGS_RoomFramework, public INavRelevantInterface {
    GENERATED_BODY()
public:
    AIGS_RoomBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void PlayerTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void PlayerTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void InitializeRoom();
    
    UFUNCTION(BlueprintCallable)
    void GiveAllRoomVertices(TArray<FVector>& outVertices);
    
    UFUNCTION(BlueprintCallable)
    void GetPolys(FVector InLocation, FVector Extent);
    
    UFUNCTION(BlueprintPure)
    TArray<AIGS_RoomBase*> GetDistantRooms(const FVector inStartPos, float inMinDistance, float inMaxDistance, int32 inMinChokePoints, int32 inMaxChokePoints) const;
    
    UFUNCTION(BlueprintCallable)
    void AddEntrance(AActor* inActor);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AIGS_DynamicWallBase*> RoomWalls;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UIGS_SearchPointComponent*> SearchPoints;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UIGS_SafePointComponent*> SafePoints;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    TArray<UIGS_ThreatPointComponent*> ThreatPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGatherNeighborRooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebugPolyHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VariantNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_RoomType RoomType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_RoomSecurityType RoomSecurityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_SecurityTier OuterTier;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EIGS_TeamSideEnum OwnerTeamSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEdgeRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> OwningEntrances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UniqueRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText UniqueRoomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag RoomGameplayTag;
    
    UPROPERTY(BlueprintReadOnly)
    bool bGatheredPolys;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 RoomPolyCount;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FIGS_NeighborData> NeighborData;
    

    // Fix for true pure virtual functions not being implemented
};

