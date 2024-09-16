#include "IGS_MainHUD.h"
#include "IGS_HUDKantanDatasourceHolder.h"

AIGS_MainHUD::AIGS_MainHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UIGS_HUDKantanDatasourceHolder>(TEXT("KantanDatasourceHolder"));
    (*this).KantanDatasourceHolder = gen;
}

void AIGS_MainHUD::ToggleGASDebugSimple() {
}

void AIGS_MainHUD::ToggleGASDebugFull() {
}




void AIGS_MainHUD::SetMostPrioHintType(const EIGS_MostPrioHintType inMostPrioHintType) {
}




