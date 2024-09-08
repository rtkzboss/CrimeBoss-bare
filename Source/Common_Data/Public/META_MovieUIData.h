#pragma once
#include "CoreMinimal.h"
#include "META_MovieUIData.generated.h"

class UBinkMediaPlayer;
class UMETA_BaseStoryGraphManager;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_MovieUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBinkMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite)
    UMETA_BaseStoryGraphManager* GraphRef;
    
    UPROPERTY(BlueprintReadWrite)
    int32 OriginalID;
    
    UPROPERTY(BlueprintReadWrite)
    int32 NextNodeID;
    
    FMETA_MovieUIData();
};

