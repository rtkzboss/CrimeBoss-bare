#include "IGS_ModalWindowSettings.h"

UIGS_ModalWindowSettings::UIGS_ModalWindowSettings() {
    static ConstructorHelpers::FClassFinder<UIGS_ModalScreen> gen(TEXT("/Game/00_Main/UI/Common/ModalWindows/UMG_BasicModalWindow.UMG_BasicModalWindow_C"));
    (*this).DefaultBasicModalScreenClass = gen.Class;
    static ConstructorHelpers::FClassFinder<UIGS_ModalScreen> gen2(TEXT("/Game/00_Main/UI/Common/ModalWindows/UMG_AdvancedModalWindow.UMG_AdvancedModalWindow_C"));
    (*this).DefaultAdvancedModalScreenClass = gen2.Class;
}

