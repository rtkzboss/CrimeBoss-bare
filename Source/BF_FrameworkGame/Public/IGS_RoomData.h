#pragma once
#include "CoreMinimal.h"
#include "IGS_RoomData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_RoomData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float Size;
    
    UPROPERTY(VisibleAnywhere)
    int32 MaxSwats;
    
    FIGS_RoomData();
};

