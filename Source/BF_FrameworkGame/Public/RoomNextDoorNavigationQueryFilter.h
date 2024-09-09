#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "RoomNextDoorNavigationQueryFilter.generated.h"

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API URoomNextDoorNavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    URoomNextDoorNavigationQueryFilter();

    UPROPERTY(EditAnywhere)
    int32 AllowedRoomTypes;
    
protected:
    UPROPERTY(EditAnywhere)
    float CostMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool IsActive;
    
    UPROPERTY()
    int32 AllowedRoomTypesBitMask;
    
};

