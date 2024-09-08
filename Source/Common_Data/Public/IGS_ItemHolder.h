#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemType.h"
#include "IGS_ItemHolder.generated.h"

USTRUCT()
struct COMMON_DATA_API FIGS_ItemHolder {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 ItemId;
    
    UPROPERTY(VisibleAnywhere)
    EIGS_ItemType ItemType;
    
    FIGS_ItemHolder();
};

