#pragma once
#include "CoreMinimal.h"
#include "Engine/Brush.h"
#include "HoudiniBrushInfo.h"
#include "HoudiniInputActor.h"
#include "HoudiniInputBrush.generated.h"

class UModel;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputBrush : public UHoudiniInputActor {
    GENERATED_BODY()
public:
    UHoudiniInputBrush();

protected:
    UPROPERTY()
    TArray<FHoudiniBrushInfo> BrushesInfo;
    
    UPROPERTY(DuplicateTransient, Transient)
    UModel* CombinedModel;
    
    UPROPERTY()
    bool bIgnoreInputObject;
    
    UPROPERTY()
    TEnumAsByte<EBrushType> CachedInputBrushType;
    
};

