#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_SquadFramework.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Abstract, NotPlaceable, Config=Inherit)
class BF_FRAMEWORKBASE_API AIGS_SquadFramework : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 SquadID;
    
private:
    UPROPERTY(Transient)
    TArray<AIGS_GameCharacterFramework*> EMPTY_FOR_COMPILE_ONLY;
    
public:
    AIGS_SquadFramework(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTeamSide(const EIGS_TeamSideEnum inTeamSide);
    
    UFUNCTION(BlueprintPure)
    EIGS_TeamSideEnum GetTeamSide() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AIGS_GameCharacterFramework*> GetSquadMembers() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSquadID() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMemberCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAliveMemberCount() const;
    
};

