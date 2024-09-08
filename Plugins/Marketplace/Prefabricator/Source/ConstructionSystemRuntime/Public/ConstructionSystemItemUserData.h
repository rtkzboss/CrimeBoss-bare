#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "ConstructionSystemItemUserData.generated.h"

UCLASS(EditInlineNew)
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemItemUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 Seed;
    
    UConstructionSystemItemUserData();

};

