#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_NavlinkHelpersLibrary.generated.h"

class AIGS_RoomBase;
class UIGS_NavLinkComponentFramework;

UCLASS()
class BF_FRAMEWORKGAME_API UIGS_NavlinkHelpersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_NavlinkHelpersLibrary();

    UFUNCTION()
    static bool IsLinkHeadingTo(UIGS_NavLinkComponentFramework* inNavLink, AIGS_RoomBase* inDestinationRoom);

};
