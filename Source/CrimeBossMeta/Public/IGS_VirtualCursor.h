#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "IGS_VirtualCursor.generated.h"

class IVirtualCursorTarget;
class UVirtualCursorTarget;
class UIGS_GameScreenHandler;
class UStaticMeshComponent;

UCLASS()
class CRIMEBOSSMETA_API AIGS_VirtualCursor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag SupportedScreenGameplayTag;
    
private:
    UPROPERTY(Instanced)
    UStaticMeshComponent* m_ColliderComponent;
    
public:
    AIGS_VirtualCursor(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintPure)
    bool IsSupportedScreenOpen(UIGS_GameScreenHandler* inGameScreenHandler) const;
    
    UFUNCTION(BlueprintCallable)
    TScriptInterface<IVirtualCursorTarget> GetClosestTargetInDirection(FVector InDirection, const TArray<AActor*>& inActors);
    
    UFUNCTION(BlueprintCallable)
    TScriptInterface<IVirtualCursorTarget> GetClosestOverlappedTarget();
    
};

