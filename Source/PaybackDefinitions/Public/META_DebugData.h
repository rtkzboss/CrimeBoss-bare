#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "META_Interval.h"
#include "META_DebugData.generated.h"

UCLASS(BlueprintType)
class PAYBACKDEFINITIONS_API UMETA_DebugData : public UDataAsset {
    GENERATED_BODY()
public:
    UMETA_DebugData();

    UFUNCTION(BlueprintPure)
    FMETA_Interval GetHeistersAlwaysSurvive() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceBeMiaAfterSuccess() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceBeMiaAfterFail() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceBeKiaAfterSuccess() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChanceBeKiaAfterFail() const;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    FMETA_Interval HeistersAlwaysSurvive;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceBeKIAAfterSuccess;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceBeMIAAfterSuccess;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceBeKIAAfterFail;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ChanceBeMIAAfterFail;
    
};

