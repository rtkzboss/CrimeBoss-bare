#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_CursorComponent.generated.h"

class UIGS_CursorWidget;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_INPUT_API UIGS_CursorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_CursorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseVirtualCursor();
    
    UFUNCTION(BlueprintCallable)
    void UseNativeCursor();
    
    UFUNCTION(BlueprintPure)
    bool IsHovering() const;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleInstanceOnly)
    UIGS_CursorWidget* VirtualSoftwareCursorWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleInstanceOnly)
    UIGS_CursorWidget* NativeSoftwareCursorWidget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUsingVirtualCursor;
    
};

