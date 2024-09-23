#include "IGS_LightingScenariosSubsystem.h"

UIGS_LightingScenariosSubsystem::UIGS_LightingScenariosSubsystem() {
    (*this).bForceMovableSkylight = true;
}

void UIGS_LightingScenariosSubsystem::SetUseLightScenarios(bool inUseLightScenarios) {
	bUseLightScenarios = inUseLightScenarios;
	if (!bUseLightScenarios) return;

}

/** Must be set before SetUseLightScenarios */
void UIGS_LightingScenariosSubsystem::SetLightingScenario(EIGS_LightingScenarioType inType) {
	LightingScenario = inType;
}

void UIGS_LightingScenariosSubsystem::RepropagateLightingScenarioChangesOnStaticMeshes() {
	checkf(0, TEXT("unimplemented"));
}

UIGS_LightingScenariosSubsystem* UIGS_LightingScenariosSubsystem::Instance(const UObject* inWorldContextObject) {
	UWorld* World = GEngine->GetWorldFromContextObject(inWorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	return World ? World->GetSubsystem<ThisClass>() : nullptr;
}

bool UIGS_LightingScenariosSubsystem::GetUseLightScenarios() const {
    return bUseLightScenarios;
}

TArray<FIGS_LightingScenarioLevelPair> UIGS_LightingScenariosSubsystem::GetLoadedLightingScenarios() {
    return {};
}

EIGS_LightingScenarioType UIGS_LightingScenariosSubsystem::GetCurrentLightingScenarioType() const {
    return LightingScenario;
}

void UIGS_LightingScenariosSubsystem::DeleteStaticLights() {
}

