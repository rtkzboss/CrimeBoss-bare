#pragma once
#include "CoreMinimal.h"
#include "IGS_PopupManagerBaseComponent.h"
#include "META_PopupManagerComponent.generated.h"

class UIGS_TutorialsManager;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_PopupManagerComponent : public UIGS_PopupManagerBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    UIGS_TutorialsManager* TutorialsManager;
    
public:
    UMETA_PopupManagerComponent(const FObjectInitializer& ObjectInitializer);

};

