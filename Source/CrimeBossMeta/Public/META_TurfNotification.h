#pragma once
#include "CoreMinimal.h"
#include "EMETA_Gang.h"
#include "META_BaseNotification.h"
#include "META_TurfNotification.generated.h"

class UMapTile;

UCLASS()
class CRIMEBOSSMETA_API UMETA_TurfNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
    UMETA_TurfNotification();

    UFUNCTION(BlueprintCallable)
    void SetData(UMapTile* inTile, const EMETA_Gang inGang);

    UFUNCTION(BlueprintPure)
    UMapTile* GetTile() const;

private:
    UPROPERTY()
    UMapTile* m_Tile;

};
