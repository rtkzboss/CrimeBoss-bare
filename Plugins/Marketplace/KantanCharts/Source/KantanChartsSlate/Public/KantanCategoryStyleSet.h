#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KantanCategoryStyle.h"
#include "KantanCategoryStyleSet.generated.h"

UCLASS()
class KANTANCHARTSSLATE_API UKantanCategoryStyleSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FKantanCategoryStyle> Styles;
    
    UKantanCategoryStyleSet();

};

