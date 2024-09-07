#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EExclusionPresetType.h"
#include "EInclusionPresetType.h"
#include "IGS_MisplacedAssetsTestData.generated.h"

class UWorld;

UCLASS(Blueprintable)
class ST_FRAMEWORK_API UIGS_MisplacedAssetsTestData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OptionString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExclusionPresetType ExclusionPresetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInclusionPresetType InclusionPresetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExcludedCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IncludedCollections;
    
    UIGS_MisplacedAssetsTestData();

};

