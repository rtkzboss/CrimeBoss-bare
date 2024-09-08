#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetInfoBoxBig.generated.h"

class UBorder;
class UImage;
class UTextBlock;
class UTexture;

UCLASS(Abstract, EditInlineNew)
class BF_GUI_API UIGS_WidgetInfoBoxBig : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* NameText;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* TypeText;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* LeftSubText;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* RightSubText;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTextBlock* InfoText;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* ItemBigImage;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBorder* TypeBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText LeftSubType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText RightSubType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ItemBigImageBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush IconImageBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor HeaderColor;
    
    UIGS_WidgetInfoBoxBig();

    UFUNCTION(BlueprintCallable)
    void Setup(FText InName, FText inInfo, FText inType, FText inLeftSubType, FText inRightSubType);
    
    UFUNCTION(BlueprintCallable)
    void SetType(FText inType);
    
    UFUNCTION(BlueprintCallable)
    void SetRightSubType(FText inRightSubType);
    
    UFUNCTION(BlueprintCallable)
    void SetName(FText InName);
    
    UFUNCTION(BlueprintCallable)
    void SetLeftSubType(FText inLeftSubType);
    
    UFUNCTION(BlueprintCallable)
    void SetInfo(FText inInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetIconImage(TSoftObjectPtr<UTexture> inImageTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetBigItemImage(TSoftObjectPtr<UTexture> inImageTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Refresh() const;
    
};

