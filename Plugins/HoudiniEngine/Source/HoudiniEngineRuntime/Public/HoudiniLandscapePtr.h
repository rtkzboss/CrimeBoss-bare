#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHoudiniLandscapeOutputBakeType.h"
#include "HoudiniLandscapePtr.generated.h"

class ALandscapeProxy;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniLandscapePtr : public UObject {
    GENERATED_BODY()
public:
    UHoudiniLandscapePtr();

    UPROPERTY()
    TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr;
    
    UPROPERTY()
    EHoudiniLandscapeOutputBakeType BakeType;
    
    UPROPERTY()
    FName EditLayerName;
    
};

