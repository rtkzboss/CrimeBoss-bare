#pragma once
#include "CoreMinimal.h"
#include "IGS_LevelSettings.h"
#include "IGS_GameLevelScriptActor.h"
#include "IGS_ObjectiveScenarioBase.h"
#include "IGS_ScriptManagerBase.h"
#include "GameplayTagContainer.h"
#include "IGS_GeneratorVariantData.h"
#include "IGS_LevelBuilderRepProperties.h"
#include "Templates/SubclassOf.h"
#include "IGS_LevelBuilder_LevelScriptActor.generated.h"

class UIGS_RandomStreamHolder;

UCLASS()
class BF_LEVELGENERATOR_API AIGS_LevelBuilder_LevelScriptActor : public AIGS_GameLevelScriptActor {
    GENERATED_BODY()
public:
    AIGS_LevelBuilder_LevelScriptActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RunDefaultVariant(UIGS_RandomStreamHolder* RandomStreamHolder, FIGS_GeneratorVariantData GeneratorVariantData);

private:
    UFUNCTION()
    void OnRep_Seed();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPrepareData(UIGS_RandomStreamHolder* RandomStreamHolder);

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FIGS_LevelSettings LevelSettings;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AIGS_ObjectiveScenarioBase> ObjectiveScenarioTemplate;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AIGS_ScriptManagerBase> ScriptManagerTemplate;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag DefaultMissionTag;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag DefaultScenarioTag;

protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString OptionsString;

private:
    UPROPERTY(EditAnywhere)
    int32 DefaultSeed;

    UPROPERTY(Transient, VisibleAnywhere, ReplicatedUsing=OnRep_Seed)
    FIGS_LevelBuilderRepProperties mR_RepProperties;

    UPROPERTY()
    UIGS_RandomStreamHolder* m_RandomStreamHolder;

public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
