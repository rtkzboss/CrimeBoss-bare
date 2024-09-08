#pragma once
#include "CoreMinimal.h"
#include "IGS_PS5Entitlement.generated.h"

USTRUCT()
struct FIGS_PS5Entitlement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString US_OfferId;
    
    UPROPERTY(EditAnywhere)
    FString US_StoreId;
    
    UPROPERTY(EditAnywhere)
    FString EU_OfferId;
    
    UPROPERTY(EditAnywhere)
    FString EU_StoreId;
    
    UPROPERTY(EditAnywhere)
    FString JP_OfferId;
    
    UPROPERTY(EditAnywhere)
    FString JP_StoreId;
    
    UPROPERTY(EditAnywhere)
    FString ASIA_OfferId;
    
    UPROPERTY(EditAnywhere)
    FString ASIA_StoreId;
    
    COMMON_UTILS_API FIGS_PS5Entitlement();
};

