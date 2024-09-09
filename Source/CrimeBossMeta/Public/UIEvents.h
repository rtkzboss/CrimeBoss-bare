#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UIEvents.generated.h"

class UMETA_Character;

UCLASS()
class CRIMEBOSSMETA_API UUIEvents : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UUIEvents();

private:
    UPROPERTY()
    TArray<UMETA_Character*> m_HiredHeisters;
    
    virtual TStatId GetStatId() const override { return {}; }
};

