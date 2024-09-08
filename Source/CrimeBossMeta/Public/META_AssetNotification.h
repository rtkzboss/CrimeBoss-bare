#pragma once
#include "CoreMinimal.h"
#include "META_BaseNotification.h"
#include "META_AssetNotification.generated.h"

class UMETA_PlotlineAsset;

UCLASS()
class CRIMEBOSSMETA_API UMETA_AssetNotification : public UMETA_BaseNotification {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UMETA_PlotlineAsset* m_Asset;
    
public:
    UMETA_AssetNotification();

    UFUNCTION(BlueprintCallable)
    void SetAsset(UMETA_PlotlineAsset* InAsset);
    
    UFUNCTION(BlueprintPure)
    UMETA_PlotlineAsset* GetAsset() const;
    
};

