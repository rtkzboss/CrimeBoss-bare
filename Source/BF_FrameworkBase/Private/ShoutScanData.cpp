#include "ShoutScanData.h"

FShoutScanData::FShoutScanData() {
    (*this).WillBeShoutChars = {};
    (*this).CanNotShoutChars = {};
    (*this).HasImposibleToShoutCharacters = false;
    (*this).HasCharacterForHint = false;
}
