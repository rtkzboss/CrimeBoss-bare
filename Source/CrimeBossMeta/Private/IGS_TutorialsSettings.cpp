#include "IGS_TutorialsSettings.h"
#include "IGS_TutorialScreen.h"

UIGS_TutorialsSettings::UIGS_TutorialsSettings() {
    (*this).TutorialsSystemEnabled = true;
    static ConstructorHelpers::FClassFinder<UIGS_TutorialScreen> gen0(TEXT("/Game/00_Main/UI/Common/TutorialWindows/UMG_TutorialWindow.UMG_TutorialWindow_C"));
    (*this).DefaultTutorialScreenClass = gen0.Class;
    static ConstructorHelpers::FClassFinder<UIGS_TutorialScreen> gen1(TEXT("/Game/00_Main/UI/Common/TutorialWindows/UMG_BinkTutorialWindow.UMG_BinkTutorialWindow_C"));
    (*this).DefaultVideoTutorialScreenClass = gen1.Class;
}


