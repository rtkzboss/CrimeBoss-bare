#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "IGS_AnimNotify_PlayNiagaraParticleTortilla.generated.h"

class UNiagaraSystem;

UCLASS(CollapseCategories)
class BF_ANIMATIONS_API UIGS_AnimNotify_PlayNiagaraParticleTortilla : public UAnimNotify {
    GENERATED_BODY()
public:
    UIGS_AnimNotify_PlayNiagaraParticleTortilla();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> NiagaraTemplate;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> NiagaraTemplate3PV;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocationOffset;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RotationOffset;

    UPROPERTY(EditAnywhere)
    FVector Scale;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Attached: 1;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SocketName;

private:
    UPROPERTY(Transient)
    UNiagaraSystem* NiagaraTemplateHard;

    UPROPERTY(Transient)
    UNiagaraSystem* NiagaraTemplate3PVHard;

};
