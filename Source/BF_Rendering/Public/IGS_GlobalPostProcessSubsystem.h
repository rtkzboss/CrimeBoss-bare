#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "Subsystems/WorldSubsystem.h"
#include "EIGS_PostProcessType.h"
#include "IGS_GlobalPostProcessSubsystem.generated.h"

class UCameraComponent;
class UIGS_GlobalPostProcessesDataAsset;
class UObject;

UCLASS(BlueprintType)
class BF_RENDERING_API UIGS_GlobalPostProcessSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_GlobalPostProcessSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemovePostProcessesFromCamera(UCameraComponent* inCamera, TArray<EIGS_PostProcessType> inPostProcessesTypes);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_GlobalPostProcessSubsystem* Instance(const UObject* inWCO);

    UFUNCTION(BlueprintCallable)
    void ApplyPostProcessesToCamera(UCameraComponent* inCamera, TArray<EIGS_PostProcessType> inPostProcessesTypes);

protected:
    UPROPERTY()
    UIGS_GlobalPostProcessesDataAsset* m_GloballyAppliedPostProcesses;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FWeightedBlendable> m_VisualStylePostProcesses;

    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FWeightedBlendable> m_VisorPostProcesses;

};
