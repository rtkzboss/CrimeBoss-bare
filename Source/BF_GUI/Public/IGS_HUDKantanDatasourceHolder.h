#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_HUDKantanDatasourceHolder.generated.h"

class UKantanSimpleCartesianDatasource;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_GUI_API UIGS_HUDKantanDatasourceHolder : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    UKantanSimpleCartesianDatasource* PressureGraphDataSource;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName PressureGraphCatId_Value;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName PressureGraphExpectedId_Value;
    
    UIGS_HUDKantanDatasourceHolder(const FObjectInitializer& ObjectInitializer);

};

