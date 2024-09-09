#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ConstructionSystemSaveConstructedItem.h"
#include "ConstructionSystemSavePlayerInfo.h"
#include "ConstructionSystemSaveGame.generated.h"

UCLASS()
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UConstructionSystemSaveGame();

    UPROPERTY(VisibleAnywhere)
    FString SaveSlotName;
    
    UPROPERTY(VisibleAnywhere)
    uint32 UserIndex;
    
    UPROPERTY(VisibleAnywhere)
    FConstructionSystemSavePlayerInfo PlayerInfo;
    
    UPROPERTY()
    TArray<FConstructionSystemSaveConstructedItem> ConstructedItems;
    
};

