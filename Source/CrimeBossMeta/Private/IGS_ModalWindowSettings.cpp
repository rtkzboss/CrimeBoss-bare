#include "IGS_ModalWindowSettings.h"
#include "IGS_ModalScreen.h"

UIGS_ModalWindowSettings::UIGS_ModalWindowSettings() {
    static ConstructorHelpers::FClassFinder<UIGS_ModalScreen> gen0(TEXT("/Game/00_Main/UI/Common/ModalWindows/UMG_BasicModalWindow.UMG_BasicModalWindow_C"));
    (*this).DefaultBasicModalScreenClass = gen0.Class;
    static ConstructorHelpers::FClassFinder<UIGS_ModalScreen> gen1(TEXT("/Game/00_Main/UI/Common/ModalWindows/UMG_AdvancedModalWindow.UMG_AdvancedModalWindow_C"));
    (*this).DefaultAdvancedModalScreenClass = gen1.Class;
}


