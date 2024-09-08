#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KantanSeriesStyle.h"
#include "KantanSeriesStyleSet.generated.h"

UCLASS()
class KANTANCHARTSSLATE_API UKantanSeriesStyleSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FKantanSeriesStyle> Styles;
    
    UKantanSeriesStyleSet();

};

