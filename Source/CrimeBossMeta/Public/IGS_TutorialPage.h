#pragma once
#include "CoreMinimal.h"
#include "IGS_TutorialPage.generated.h"

class UBinkMediaPlayer;
class UTexture2D;

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FIGS_TutorialPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBinkMediaPlayer* Video;
    
    FIGS_TutorialPage();
};

