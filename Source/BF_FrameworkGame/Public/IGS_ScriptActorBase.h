#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_ScriptActorBase.generated.h"

class AIGS_ScriptManagerBase;
class UIGS_RandomStreamHolder;

UCLASS()
class BF_FRAMEWORKGAME_API AIGS_ScriptActorBase : public AActor {
    GENERATED_BODY()
public:
    AIGS_ScriptActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Setup(int32 InSeed);

    UFUNCTION(Reliable, Server)
    void Server_SetupInternal();

protected:
    UFUNCTION(BlueprintPure)
    FRandomStream RandomStreamGetter() const;

public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetup(int32 InSeed);

protected:
    UFUNCTION(BlueprintPure)
    UIGS_RandomStreamHolder* GetRandomStreamHolder();

    UFUNCTION(BlueprintPure)
    void GetRandomStream(FRandomStream& outRandomStream);

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ScriptActorTag;

protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Seed;

    UPROPERTY()
    FRandomStream RandomStream_DEPRECATED;

private:
    UPROPERTY()
    AIGS_ScriptManagerBase* m_ScriptManager;

};
