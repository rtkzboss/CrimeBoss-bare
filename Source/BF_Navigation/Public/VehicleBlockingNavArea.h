#pragma once
#include "CoreMinimal.h"
#include "NavAreas/NavArea_Null.h"
#include "VehicleBlockingNavArea.generated.h"

UCLASS(Config=Inherit)
class BF_NAVIGATION_API UVehicleBlockingNavArea : public UNavArea_Null {
    GENERATED_BODY()
public:
    UVehicleBlockingNavArea();

};

