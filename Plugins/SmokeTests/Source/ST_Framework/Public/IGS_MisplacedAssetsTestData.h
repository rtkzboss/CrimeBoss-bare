#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EExclusionPresetType.h"
#include "EInclusionPresetType.h"
#include "IGS_MisplacedAssetsTestData.generated.h"

class UWorld;

UCLASS()
class ST_FRAMEWORK_API UIGS_MisplacedAssetsTestData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UWorld> Level;
    
    UPROPERTY(EditAnywhere)
    int32 Seed;
    
    UPROPERTY(EditAnywhere)
    FString OptionString;
    
    UPROPERTY(EditAnywhere)
    EExclusionPresetType ExclusionPresetType;
    
    UPROPERTY(EditAnywhere)
    EInclusionPresetType InclusionPresetType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ExcludedCollections;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> IncludedCollections;
    
    UIGS_MisplacedAssetsTestData();

};

