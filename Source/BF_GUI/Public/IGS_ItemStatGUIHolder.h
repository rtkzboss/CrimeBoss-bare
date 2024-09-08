#pragma once
#include "CoreMinimal.h"
#include "IGS_ItemStatGUIHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_ItemStatGUIHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText StatValue;
    
    BF_GUI_API FIGS_ItemStatGUIHolder();
};

