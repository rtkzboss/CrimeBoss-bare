#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "RoomNavigationQueryFilter.generated.h"

UCLASS(Abstract)
class BF_FRAMEWORKGAME_API URoomNavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    URoomNavigationQueryFilter();

    UPROPERTY(EditAnywhere)
    int32 AllowedRoomSecurity;

protected:
    UPROPERTY(EditAnywhere)
    float CostMultiplier;

    UPROPERTY(EditAnywhere)
    bool IsActive;

    UPROPERTY()
    int32 AllowedRoomSecurityBitMask;

    UPROPERTY()
    int32 AllowedTierBitMask;

    UPROPERTY()
    int32 AllowedBasicTypeBitMask;

};
