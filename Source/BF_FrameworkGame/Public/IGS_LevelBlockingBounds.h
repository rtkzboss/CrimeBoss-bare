#pragma once
#include "CoreMinimal.h"
#include "IGS_BoxSphere.h"
#include "IGS_LevelBlockingBounds.generated.h"

class UIGS_CustomBoxComponent;
class UIGS_LevelBlockingBoundsSettings;
class UIGS_NavModifierComponent;
class UPostProcessComponent;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_LevelBlockingBounds : public AIGS_BoxSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_BlockerSize)
    float BlockerSize;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_CustomBoxComponent* BlockerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UIGS_NavModifierComponent* NavModifierComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    UIGS_LevelBlockingBoundsSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText OutOfBoundTextOverride;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool DontRegisterToNavigation;
    
public:
    AIGS_LevelBlockingBounds(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetBlockerSize(float inBlockerSize);
    
    UFUNCTION()
    void RefreshPostProcessSettings();
    
protected:
    UFUNCTION()
    void OnRep_BlockerSize();
    
};

