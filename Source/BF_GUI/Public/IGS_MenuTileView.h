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
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UUserWidget> ItemWidgetTemplate;
    
    UIGS_MenuTileView();

};

