#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_RoomData.h"
#include "IGS_RoomPolysGeneratedDelegateDelegate.h"
#include "IGS_RoomPointManager.generated.h"

class AIGS_HumanNavMesh;
class AIGS_RoomBase;
class ARoomNavmesh;
class UIGS_RoomPointManager;
class UObject;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_RoomPointManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_RoomPointManager();

    UFUNCTION(BlueprintCallable)
    void RefreshBadRooms(const bool inHighlight);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_RoomPointManager* Instance(const UObject* inWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void InitializeRooms();
    
    UFUNCTION(BlueprintCallable)
    TArray<AIGS_RoomBase*> GetRoomsWithGameplayTag(FGameplayTag inTag);
    
    UFUNCTION(BlueprintPure)
    ARoomNavmesh* GetRoomNavData();
    
    UFUNCTION(BlueprintPure)
    AIGS_HumanNavMesh* GetHumanNavData();
    
    UFUNCTION(BlueprintPure)
    TArray<AIGS_RoomBase*> GetAllRoomsInBox(FVector inOrigin, FVector InBoxExtent) const;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    TArray<AIGS_RoomBase*> Rooms;
    
    UPROPERTY(BlueprintAssignable)
    FIGS_RoomPolysGeneratedDelegate OnRoomPolysGeneratedEvent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bRoomPolysGathered;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    TArray<FIGS_RoomData> RoomsData;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

