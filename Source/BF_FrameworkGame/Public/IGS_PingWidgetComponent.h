#pragma once
#include "CoreMinimal.h"
#include "IGS_WorldSpaceWidgetBase.h"
#include "IGS_PingWidgetComponent.generated.h"

class UIGS_PingableComponent;

UCLASS(ClassGroup=Custom, Config=Inherit, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PingWidgetComponent : public UIGS_WorldSpaceWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UIGS_PingableComponent* m_PingableComponent;
    
public:
    UIGS_PingWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

