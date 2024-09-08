#pragma once
#include "CoreMinimal.h"
#include "IGS_MetaTransferDataBase.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_MetaTransferDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsFilled;
    
    FIGS_MetaTransferDataBase();
};

