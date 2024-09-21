#include "IGS_LevelGeneratorSubsystem.h"
#include "IGS_ConnectionPointData.h"
#include "IGS_GeneratorVariantData.h"

UIGS_LevelGeneratorSubsystem::UIGS_LevelGeneratorSubsystem() {
}

UIGS_LevelGeneratorSubsystem* UIGS_LevelGeneratorSubsystem::Instance(const UObject* inWorldContextObject) {
    return nullptr;
}

void UIGS_LevelGeneratorSubsystem::InitializeRooms_Server(ANavigationData* inNavData) {
}

int32 UIGS_LevelGeneratorSubsystem::GetDefaultSeed() const {
    return DefaultSeed;
}

void UIGS_LevelGeneratorSubsystem::LoadLevelAccordingToConfiguration(UObject* WCO, FIGS_ConnectionPointData Connection, FName ConnectionName, TArrayView<FIGS_ConnectionPointData> ConnectionPoints, FName VariantName, TArrayView<FIGS_VariantData> Variants)
{
}

