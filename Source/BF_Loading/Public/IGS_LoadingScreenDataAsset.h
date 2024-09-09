#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateTypes.h"
#include "IGS_LoadingScreenDataAsset.generated.h"

class UIGS_RichTextBlockDecoratorBase;

UCLASS()
class BF_LOADING_API UIGS_LoadingScreenDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UIGS_LoadingScreenDataAsset();

    UPROPERTY(EditDefaultsOnly)
    FSlateFontInfo MainTextFont;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateFontInfo SecondaryTextFont;
    
    UPROPERTY(EditDefaultsOnly)
    FTextBlockStyle LoadingTipTextBlockStyle;
    
    UPROPERTY(EditDefaultsOnly)
    FTextBlockStyle LoadingTipDecoratorTextBlockStyle;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<UIGS_RichTextBlockDecoratorBase>> LoadingTipTextDecorators;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateFontInfo LoadingTextFont;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateFontInfo LoadingIconFont;
    
};

