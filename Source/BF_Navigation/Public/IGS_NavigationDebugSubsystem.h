#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_NavigationDebugSubsystem.generated.h"

class ANavigationData;

UCLASS()
class BF_NAVIGATION_API UIGS_NavigationDebugSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_NavigationDebugSubsystem();

    UFUNCTION()
    void OnNavUpdated(ANavigationData* inNavData);
    
    UFUNCTION()
    void NavigationFinished(ANavigationData* inNavigation);
    
    UPROPERTY()
    ANavigationData* HumanNavmesh;
    
};

