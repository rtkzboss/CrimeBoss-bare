#include "IGS_LightingScenariosSubsystem.h"
#include "IGS_WorldSettingsExtension.h"
#include "BF_LevelGeneratorModule.h"
#include "Engine/LevelStreamingDynamic.h"

UIGS_LightingScenariosSubsystem::UIGS_LightingScenariosSubsystem() {
    (*this).bForceMovableSkylight = true;
}

void UIGS_LightingScenariosSubsystem::SetUseLightScenarios(bool inUseLightScenarios) {
	bUseLightScenarios = inUseLightScenarios;
	if (!bUseLightScenarios) return;

	UWorld* World = GetWorld();
	LoadLightingScenario(World->PersistentLevel, UIGS_LevelGeneratorSubsystem::FConnectionPointTransform());
}

/** Must be set before SetUseLightScenarios */
void UIGS_LightingScenariosSubsystem::SetLightingScenario(EIGS_LightingScenarioType inType) {
	LightingScenario = inType;
}

void UIGS_LightingScenariosSubsystem::RepropagateLightingScenarioChangesOnStaticMeshes() {
	ensureMsgf(0, TEXT("unimplemented"));
}

UIGS_LightingScenariosSubsystem* UIGS_LightingScenariosSubsystem::Instance(const UObject* inWorldContextObject) {
	UWorld* World = GEngine->GetWorldFromContextObject(inWorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	return World ? World->GetSubsystem<ThisClass>() : nullptr;
}

bool UIGS_LightingScenariosSubsystem::GetUseLightScenarios() const {
    return bUseLightScenarios;
}

TArray<FIGS_LightingScenarioLevelPair> UIGS_LightingScenariosSubsystem::GetLoadedLightingScenarios() {
	ensureMsgf(0, TEXT("unimplemented"));
    return {};
}

EIGS_LightingScenarioType UIGS_LightingScenariosSubsystem::GetCurrentLightingScenarioType() const {
    return LightingScenario;
}

void UIGS_LightingScenariosSubsystem::DeleteStaticLights() {
	ensureMsgf(0, TEXT("unimplemented"));
}

static TSoftObjectPtr<UWorld> NoScenario;
void UIGS_LightingScenariosSubsystem::LoadLightingScenario(ULevel* Level, UIGS_LevelGeneratorSubsystem::FConnectionPointTransform Transform)
{
	if (!Level || !bUseLightScenarios) return;
	AIGS_WorldSettingsExtension* WS = Cast<AIGS_WorldSettingsExtension>(Level->GetWorldSettings());
	if (!WS) return;

	TSoftObjectPtr<UWorld> const* ScenarioPtr = WS->LightingScenarioWorldSettings.LightingScenarioMapPairs.Find(LightingScenario);
	TSoftObjectPtr<UWorld> const& Scenario =
		ScenarioPtr ? *ScenarioPtr :
		WS->LightingScenarioWorldSettings.bUseDefaultScenario ? WS->LightingScenarioWorldSettings.DefaultLightingScenarioLevel :
		NoScenario;
	if (Scenario.IsNull()) return;

	bool bSuccess;
	ULevelStreamingDynamic* StreamingLevel = ULevelStreamingDynamic::LoadLevelInstanceBySoftObjectPtr(this, Scenario, Transform.Translation, Transform.Rotator(), bSuccess);
	if (!bSuccess)
	{
		UE_LOG(LogBF_LevelGenerator, Error, TEXT("Failed to add lighting scenario level %s"), *Scenario.ToString());
		return;
	}
	UE_LOG(LogBF_LevelGenerator, Verbose, TEXT("Added lighting scenario level %s"), *Scenario.ToString());
}

