#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "IGS_PlayerInfoWidget.generated.h"

class AIGS_IntelligentGameCharacter;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerInfoWidget : public UWidgetComponent {
    GENERATED_BODY()
public:
    UIGS_PlayerInfoWidget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnWidgetInitialized();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewName(const FText& InName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewHeisterNumber(int32 inNumber);
    
    UFUNCTION(BlueprintImplementableEvent)
    int32 GetHeisterNumber();
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText PlayerName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 HeisterNumber;
    
    UPROPERTY()
    FText DebugEditorName;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    AIGS_IntelligentGameCharacter* CharacterOwner;
    
};

