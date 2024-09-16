#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "BPSteamGroupOfficer.generated.h"

USTRUCT(BlueprintType)
struct FBPSteamGroupOfficer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBPUniqueNetId OfficerUniqueNetID;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsOwner;

    ADVANCEDSTEAMSESSIONS_API FBPSteamGroupOfficer();
};
