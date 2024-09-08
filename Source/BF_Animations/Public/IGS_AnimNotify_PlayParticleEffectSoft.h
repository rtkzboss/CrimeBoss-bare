#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "IGS_AnimNotify_PlayParticleEffectSoft.generated.h"

class UParticleSystem;

UCLASS(CollapseCategories)
class BF_ANIMATIONS_API UIGS_AnimNotify_PlayParticleEffectSoft : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UParticleSystem> PSTemplate;
    
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
    
    UIGS_AnimNotify_PlayParticleEffectSoft();

};

