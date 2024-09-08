#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryObjectUniversalData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_InventoryObjectUniversalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseDefaultValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UniversalBool_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UniversalBool_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UniversalBool_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniversalInt_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniversalInt_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniversalInt_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniversalInt_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UniversalInt_5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UniversalFloat_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UniversalFloat_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText UniversalText_1;
    
    FIGS_InventoryObjectUniversalData();
};

