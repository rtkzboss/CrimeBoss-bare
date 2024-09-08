#pragma once
#include "CoreMinimal.h"
#include "IGS_SnipePointData.h"
#include "IGS_WaypointVisitable.h"
#include "IGS_SniperPoint.generated.h"

class AIGS_AIControllerSniper;
class AIGS_GameCharacterFramework;

UCLASS(Abstract)
class BF_AI_API AIGS_SniperPoint : public AIGS_WaypointVisitable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnipeAngleVertical;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnipeAngleHorizontal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnipeAngleVerticalOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRandomSnipingPoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FIGS_SnipePointData> SnipingBehavior;
    
protected:
    UPROPERTY(VisibleInstanceOnly)
    TWeakObjectPtr<AIGS_GameCharacterFramework> m_Sniper;
    
    UPROPERTY(VisibleInstanceOnly)
    TWeakObjectPtr<AIGS_AIControllerSniper> m_SniperController;
    
public:
    AIGS_SniperPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVisitorManually(AIGS_GameCharacterFramework* inGameCharacter);
    
    UFUNCTION(BlueprintPure)
    AIGS_GameCharacterFramework* GetVisitor() const;
    
};

