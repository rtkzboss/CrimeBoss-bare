#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_TeammateHealthInfo.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;
class UIGS_TeammateHealthInfoSingleWidget;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_TeammateHealthInfo : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerCharacter* PlayerPawn;
    
    UPROPERTY(BlueprintReadOnly)
    AIGS_PlayerControllerRoot* PlayerController;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_TeammateHealthInfoSingleWidget* SecondPlayerWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_TeammateHealthInfoSingleWidget* ThirdPlayerWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_TeammateHealthInfoSingleWidget* FourthPlayerWidget;
    
public:
    UIGS_TeammateHealthInfo();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnReposses(AIGS_GameCharacterFramework* inCharacter);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ClearList();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindToPlayerJoinManager();
    
};

