#pragma once
#include "CoreMinimal.h"
#include "EIGS_PressurePhase.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_WaveManagerWidget.generated.h"

class UIGS_WaveManager;

UCLASS(EditInlineNew)
class BF_GUI_API UIGS_WaveManagerWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_WaveManagerWidget();

protected:
    UFUNCTION(BlueprintNativeEvent)
    void PhaseChanged(EIGS_PressurePhase inPressurePhase);

    UFUNCTION(BlueprintNativeEvent)
    void EnemyCountChanged();

    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TWeakObjectPtr<UIGS_WaveManager> WaveManager;

};
