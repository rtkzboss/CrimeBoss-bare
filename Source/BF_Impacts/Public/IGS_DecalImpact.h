#pragma once
#include "CoreMinimal.h"
#include "IGS_ImpactBase.h"
#include "IGS_DecalImpact.generated.h"

class UDecalComponent;
class USceneComponent;

UCLASS(Config=Inherit)
class BF_IMPACTS_API AIGS_DecalImpact : public AIGS_ImpactBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    USceneComponent* RootDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient)
    UDecalComponent* Decal;
    
public:
    AIGS_DecalImpact(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RemoveAfterTime();
    
};

