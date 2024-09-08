#pragma once
#include "CoreMinimal.h"
#include "EMETA_Gang.h"
#include "META_BaseNotification.h"
#include "Templates/SubclassOf.h"
#include "META_DetectiveNotification.generated.h"

class UMETA_DetectiveID;
class UMapTile;

UCLASS()
class CRIMEBOSSMETA_API UMETA_DetectiveNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSubclassOf<UMETA_DetectiveID> m_Detective;
    
    UPROPERTY()
    UMapTile* m_Tile;
    
public:
    UMETA_DetectiveNotification();

    UFUNCTION(BlueprintCallable)
    void SetData(TSubclassOf<UMETA_DetectiveID> inDetective, EMETA_Gang inGang, UMapTile* inTile);
    
    UFUNCTION(BlueprintPure)
    UMapTile* GetTile() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UMETA_DetectiveID> GetDetective() const;
    
};

