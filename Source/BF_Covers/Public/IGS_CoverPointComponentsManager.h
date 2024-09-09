#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_CoverPointComponentsManager.generated.h"

class ANavigationData;
class UIGS_CoverPointComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_COVERS_API UIGS_CoverPointComponentsManager : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_CoverPointComponentsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCoverPointComponents(const TArray<UIGS_CoverPointComponent*>& inComponents);
    
    UFUNCTION()
    void OnNavigationBuildFinished(ANavigationData* inNavData);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCovers();
    
    UFUNCTION(BlueprintCallable)
    void ActivateCovers();
    
protected:
    UPROPERTY(EditAnywhere)
    bool AutomaticStart;
    
    UPROPERTY(EditAnywhere)
    bool ShouldCheckMoving;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    TArray<UIGS_CoverPointComponent*> CoverPointComponents;
    
};

