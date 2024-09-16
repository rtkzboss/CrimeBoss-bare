#pragma once
#include "CoreMinimal.h"
#include "IGS_AITransitionObjectBase.h"
#include "UObject/NoExportTypes.h"
#include "NavLinkLeftSignature.h"
#include "NavLinkReachedSignature.h"
#include "IGS_NavLinkBase.generated.h"

class AIGS_GameCharacterFramework;
class UBoxComponent;
class UIGS_NavLinkComponentFramework;

UCLASS(Abstract)
class BF_AI_API AIGS_NavLinkBase : public AIGS_AITransitionObjectBase {
    GENERATED_BODY()
public:
    AIGS_NavLinkBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnNavlinkTransitionStarted(const UIGS_NavLinkComponentFramework* NavLinkComponent, const AIGS_GameCharacterFramework* Pawn, bool IsRight);

    UFUNCTION()
    void OnNavlinkComponentReached(const UIGS_NavLinkComponentFramework* NavLinkComponent, const AIGS_GameCharacterFramework* Pawn, bool IsRight);

    UFUNCTION()
    void OnNavlinkComponentLeft(const UIGS_NavLinkComponentFramework* NavLinkComponent, const AIGS_GameCharacterFramework* Pawn);

public:
    UPROPERTY(BlueprintAssignable)
    FNavLinkReachedSignature OnNavlinkReached;

    UPROPERTY(BlueprintAssignable)
    FNavLinkReachedSignature OnTransitionStarted;

    UPROPERTY(BlueprintAssignable)
    FNavLinkLeftSignature OnNavlinkLeft;

protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UBoxComponent* helpersBox;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Left;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Right;

};
