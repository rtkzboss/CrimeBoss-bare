#pragma once
#include "CoreMinimal.h"
#include "CommonTileView.h"
#include "Templates/SubclassOf.h"
#include "IGS_MenuTileView.generated.h"

class UUserWidget;

UCLASS()
class BF_GUI_API UIGS_MenuTileView : public UCommonTileView {
    GENERATED_BODY()
public:
    UIGS_MenuTileView();

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UUserWidget> ItemWidgetTemplate;
    
};

