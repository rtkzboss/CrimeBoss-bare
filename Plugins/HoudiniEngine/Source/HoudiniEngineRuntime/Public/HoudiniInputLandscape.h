#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniInputActor.h"
#include "HoudiniInputLandscape.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputLandscape : public UHoudiniInputActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform CachedInputLandscapeTraqnsform;
    
    UPROPERTY()
    int32 CachedNumLandscapeComponents;
    
    UHoudiniInputLandscape();

};

