#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_ItemStatGUIHolder.h"
#include "Templates/SubclassOf.h"
#include "IGS_WidgetItemInfo.generated.h"

class UBorder;
class UIGS_WidgetItemStat;
class UTextBlock;
class UVerticalBox;

UCLASS(Abstract, EditInlineNew)
class BF_GUI_API UIGS_WidgetItemInfo : public UUserWidget {
    GENERATED_BODY()
public:
    UIGS_WidgetItemInfo();

    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* ItemNameText;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* ItemTypeText;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* ItemSubTypeText;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* ILVLText;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBorder* HeaderBGBorder;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBorder* SubHeaderBGBorder;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UVerticalBox* ItemStatsVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UVerticalBox* ModsVerticalBox;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UIGS_WidgetItemStat> WidgetItemStatClass;
    
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText ItemName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText ItemType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText ItemSubType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ItemLevel;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FIGS_ItemStatGUIHolder> ItemStats;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText ItemDescription;
    
};

