#pragma once
#include "CoreMinimal.h"
#include "LiveLinkRemapAsset.h"
#include "FTILiveLinkRemapAsset.generated.h"

UCLASS()
class FTILIVELINK_API UFTILiveLinkRemapAsset : public ULiveLinkRemapAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FName, FName> AnimationNamesMap;
    
    UFTILiveLinkRemapAsset();

};

