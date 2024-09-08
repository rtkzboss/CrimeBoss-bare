#pragma once
#include "CoreMinimal.h"
#include "IGS_SquadFramework.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_AINotif.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_SquadBase.generated.h"

class AIGS_GameCharacterFramework;
class UBehaviorTree;
class UBehaviorTreeComponent;
class UBlackboardComponent;

UCLASS(Abstract, Config=Inherit)
class BF_AI_API AIGS_SquadBase : public AIGS_SquadFramework {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBehaviorTreeComponent* BehaviorTreeComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBlackboardComponent* BlackboardComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EIGS_TeamSideEnum TeamSide;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_GameCharacterFramework*> Characters;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FColor DebugColor;
    
public:
    AIGS_SquadBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Notify(EIGS_AINotif Type, AIGS_GameCharacterFramework* caller, AIGS_GameCharacterFramework* Target, FVector Pos, FVector dir) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSquadMeanLocation() const;
    
    UFUNCTION(BlueprintPure)
    AIGS_GameCharacterFramework* GetRandomMember() const;
    
    UFUNCTION(BlueprintPure)
    AIGS_GameCharacterFramework* GetNearestMember(FVector Pos, TArray<AIGS_GameCharacterFramework*> excludeCharacters) const;
    
    UFUNCTION(BlueprintPure)
    AIGS_GameCharacterFramework* GetNearestAliveMember(FVector Pos, TArray<AIGS_GameCharacterFramework*> excludeCharacters) const;
    
    UFUNCTION(BlueprintPure)
    AIGS_GameCharacterFramework* GetCenterMember() const;
    
};

