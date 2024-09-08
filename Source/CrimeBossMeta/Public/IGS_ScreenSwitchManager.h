#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EIGS_MetaAdditionalButtonType.h"
#include "IGS_ScreenSwitchManagerBaseComponent.h"
#include "IGS_ScreenSwitchManager.generated.h"

class IMETA_GameModeAdapter;
class UMETA_GameModeAdapter;
class UIGS_ScreenSwitchManager;
class UMETA_UIEventsManagerComponent;
class UObject;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_ScreenSwitchManager : public UIGS_ScreenSwitchManagerBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UMETA_UIEventsManagerComponent* UIComponent;
    
    UPROPERTY()
    TScriptInterface<IMETA_GameModeAdapter> AdapterInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag CurrentTag;
    
    UIGS_ScreenSwitchManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void TriggerAdditionalAction(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfirmButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBackButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonType(EIGS_MetaAdditionalButtonType inType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void RequestSwitchToScreen(UObject* inWCO, FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static UIGS_ScreenSwitchManager* Instance(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void GoBack(UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWCO))
    static void Confirm(UObject* inWCO);
    
};

