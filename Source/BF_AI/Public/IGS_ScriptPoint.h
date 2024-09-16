#pragma once
#include "CoreMinimal.h"
#include "EIGS_ScriptPointExecuteOn.h"
#include "IGS_WaypointVisitable.h"
#include "IGS_ScriptPoint.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class AIGS_WaypointBase;
class AIGS_WaypointFramework;

UCLASS(Abstract)
class BF_AI_API AIGS_ScriptPoint : public AIGS_WaypointVisitable {
    GENERATED_BODY()
public:
    AIGS_ScriptPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryActivateScriptPoint(AIGS_GameCharacterFramework* inActivator);

    UFUNCTION(BlueprintNativeEvent)
    void OnVisit(AIGS_GameCharacterFramework* inActivator);

    UFUNCTION(BlueprintNativeEvent)
    void OnLeave(AIGS_GameCharacterFramework* inActivator, bool inIsAbort);

    UFUNCTION(BlueprintNativeEvent)
    void OnArrive(AIGS_GameCharacterFramework* inActivator);

    UFUNCTION(BlueprintNativeEvent)
    void OnApproach(AIGS_GameCharacterFramework* inActivator);

    UFUNCTION(BlueprintNativeEvent)
    bool IsRedirectPointBlueprint();

    UFUNCTION(BlueprintNativeEvent)
    bool IsLockedBlueprint() const;

    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;

    UFUNCTION(BlueprintCallable)
    AIGS_WaypointBase* GetNextPoint();

    UFUNCTION(BlueprintNativeEvent)
    TArray<AActor*> GetExtraArrowActors();

    UFUNCTION(BlueprintCallable)
    void Finish(AIGS_GameCharacterFramework* inActivator);

    UFUNCTION(BlueprintNativeEvent)
    void Execute(AIGS_GameCharacterFramework* inActivator);

    UFUNCTION(BlueprintNativeEvent)
    bool CanBeActivatedBy(AIGS_GameCharacterFramework* inActivator);

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Enabled;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHasDirection;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIGS_ScriptPointExecuteOn ExecuteOn;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float DirectionLookAtPosDistance;

    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditInstanceOnly)
    bool CanEverBeEnabled;

    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    AIGS_WaypointFramework* OptionalNextPoint;

    UPROPERTY(VisibleAnywhere)
    AIGS_WaypointBase* OptionalNextPointCasted;

protected:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    TArray<AIGS_GameCharacterFramework*> VisitingCharacters;

};
