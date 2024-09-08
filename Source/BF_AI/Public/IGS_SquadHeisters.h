#pragma once
#include "CoreMinimal.h"
#include "IGS_HeisterSquadBotInfo.h"
#include "IGS_SquadBase.h"
#include "IGS_SquadHeisters.generated.h"

class AIGS_RoomBase;
class UIGS_SquadHeistersEventWatchComponent;

UCLASS(Abstract)
class BF_AI_API AIGS_SquadHeisters : public AIGS_SquadBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AIGS_RoomBase* LastAreaOfOperationsRoom;
    
    UPROPERTY()
    float NextSpreadUpdateTime;
    
    UPROPERTY()
    TArray<FIGS_HeisterSquadBotInfo> BotsInfo;
    
    UPROPERTY()
    TArray<AIGS_RoomBase*> EmptyRoomArray;
    
    UPROPERTY(Instanced)
    UIGS_SquadHeistersEventWatchComponent* SquadHeistersEventWatchComponent;
    
    UPROPERTY()
    TArray<AIGS_RoomBase*> m_PossibleAreaOfOperations;
    
    UPROPERTY()
    TArray<AIGS_RoomBase*> m_AreaOfOperations;
    
public:
    AIGS_SquadHeisters(const FObjectInitializer& ObjectInitializer);

};

