#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Scene.h"
#include "IGS_GlobalPostProcessesDataAsset.generated.h"

UCLASS(BlueprintType)
class BF_RENDERING_API UIGS_GlobalPostProcessesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    FString PasswordQuery;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FWeightedBlendable> VisualStylePostProcesses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FWeightedBlendable> VisorPostProcesses;
    
    UIGS_GlobalPostProcessesDataAsset();

};

