#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_ScriptManagerBase.generated.h"

class AController;
class AIGS_GameCharacterFramework;
class AIGS_ScriptActorBase;
class UIGS_RandomStreamHolder;

UCLASS(Config=Inherit)
class BF_FRAMEWORKGAME_API AIGS_ScriptManagerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AIGS_ScriptActorBase*> ScriptActors;
    
    UPROPERTY(VisibleAnywhere)
    int32 ScriptSeed;
    
    UPROPERTY()
    FRandomStream RandomStream_DEPRECATED;
    
    UPROPERTY()
    bool bFinished;
    
    UPROPERTY()
    UIGS_RandomStreamHolder* m_RandomStreamHolder;
    
    AIGS_ScriptManagerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetManagerFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool OnWarzonePlayerSwapRequested(AController* inInstigatorController);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnManagerReady(int32 inReplicatedSeed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCharacterRegistered(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintPure)
    TArray<AIGS_ScriptActorBase*> GetScriptsActorsWithTag(FName inTag) const;
    
    UFUNCTION(BlueprintPure)
    UIGS_RandomStreamHolder* GetRandomStreamHolder();
    
    UFUNCTION(BlueprintPure)
    FRandomStream GetRandomStream_TEMP();
    
    UFUNCTION(BlueprintPure)
    void GetRandomStream(FRandomStream& outRandomStream);
    
};

