#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_MenuWidgetManager.generated.h"

class UIGS_MenuScreenWidget;
class UIGS_MenuWidgetManager;
class UObject;

UCLASS(BlueprintType)
class BF_FRAMEWORKGAME_API UIGS_MenuWidgetManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_MenuWidgetManager();

    UFUNCTION()
    void UnregisterWidget(UIGS_MenuScreenWidget* InWidget);
    
    UFUNCTION()
    void RegisterWidget(UIGS_MenuScreenWidget* InWidget);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext=inWorldContextObject))
    static UIGS_MenuWidgetManager* Instance(const UObject* inWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    UIGS_MenuScreenWidget* GetWidgetByTag(FGameplayTag inTag);
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UIGS_MenuScreenWidget*> MenuWidgets;
    
    UPROPERTY()
    bool bAlreadyReset;
    
};

