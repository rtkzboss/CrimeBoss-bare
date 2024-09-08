#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SkinnedDecalInstance.generated.h"

class USkinnedDecalSampler;

UCLASS(BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class SKINNEDDECALCOMPONENT_API USkinnedDecalInstance : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SubUV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Size;
    
    USkinnedDecalInstance(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateDecal();
    
    UFUNCTION(BlueprintCallable)
    USkinnedDecalSampler* GetSampler();
    
};

