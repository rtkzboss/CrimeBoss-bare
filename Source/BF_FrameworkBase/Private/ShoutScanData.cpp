#include "ShoutScanData.h"

FShoutScanData::FShoutScanData() {
    (*this).WillBeShoutChars = TArray<AIGS_GameCharacterFramework*>{};
    (*this).CanNotShoutChars = TArray<AIGS_GameCharacterFramework*>{};
    (*this).HasImposibleToShoutCharacters = false;
    (*this).HasCharacterForHint = false;
}
