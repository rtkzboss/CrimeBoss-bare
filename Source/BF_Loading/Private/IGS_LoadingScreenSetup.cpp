#include "IGS_LoadingScreenSetup.h"

FIGS_LoadingScreenSetup::FIGS_LoadingScreenSetup() {
    (*this).ID = FGameplayTag();
    (*this).BackgroundTexture = FSoftObjectPath();
    (*this).ThrobberSprite = FSoftObjectPath();
    (*this).BinkMoviePaths = {};
    (*this).TipsTagContainer = FGameplayTagContainer();
    (*this).Tips = {};
    (*this).ControllerTips = {};
    (*this).KeyboardMouseTips = {};
}
