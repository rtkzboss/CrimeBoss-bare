#include "IGS_TutorialsSettings.h"

UIGS_TutorialsSettings::UIGS_TutorialsSettings() {
    (*this).TutorialsSystemEnabled = true;
    static ConstructorHelpers::FClassFinder<UIGS_TutorialScreen> gen(TEXT("/Game/00_Main/UI/Common/TutorialWindows/UMG_TutorialWindow.UMG_TutorialWindow_C"));
    (*this).DefaultTutorialScreenClass = gen.Class;
    static ConstructorHelpers::FClassFinder<UIGS_TutorialScreen> gen2(TEXT("/Game/00_Main/UI/Common/TutorialWindows/UMG_BinkTutorialWindow.UMG_BinkTutorialWindow_C"));
    (*this).DefaultVideoTutorialScreenClass = gen2.Class;
}

