#include "IGS_LoadingScreenSetup.h"

FIGS_LoadingScreenSetup::FIGS_LoadingScreenSetup() {
    (*this).ID = FGameplayTag();
    (*this).BackgroundTexture = FSoftObjectPath();
    (*this).ThrobberSprite = FSoftObjectPath();
    (*this).BinkMoviePaths = TArray<FString>{};
    (*this).TipsTagContainer = FGameplayTagContainer();
    (*this).Tips = TArray<FText>{};
    (*this).ControllerTips = TArray<FText>{};
    (*this).KeyboardMouseTips = TArray<FText>{};
}
