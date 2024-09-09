#pragma once
#include "CoreMinimal.h"
#include "IGS_WaypointVisitable.h"
#include "IGS_CoverPointActor.generated.h"

class UCoverPoint;
class UIGS_AICommand;
class UIGS_CoverPointComponent;
class UIGS_CoverPointComponentsManager;

UCLASS(Abstract)
class BF_AI_API AIGS_CoverPointActor : public AIGS_WaypointVisitable {
    GENERATED_BODY()
public:
    AIGS_CoverPointActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UCoverPoint* GetCoverPoint() const;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_CoverPointComponent* CoverPointComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UIGS_CoverPointComponentsManager* CoverPointComponentsManager;
    
protected:
    UPROPERTY(VisibleInstanceOnly)
    TWeakObjectPtr<UIGS_AICommand> m_CurrentCommand;
    
};

