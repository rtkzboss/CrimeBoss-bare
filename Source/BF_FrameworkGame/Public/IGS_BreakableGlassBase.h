#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EGlassShape.h"
#include "EIGS_GlassRegularPreset.h"
#include "IGS_BreakableGlassBase.generated.h"

class USceneComponent;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_BreakableGlassBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_GlassRegularPreset GlassPanelPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleUniform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScaleZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EGlassShape> GlassType;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool bCanEverAffectNavigation;
    
    AIGS_BreakableGlassBase(const FObjectInitializer& ObjectInitializer);

};

