#include "KantanChartStyle.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"

FKantanChartStyle::FKantanChartStyle() {
    (*this).Background.ImageSize.X = 3.200000000e+01f;
    (*this).Background.ImageSize.Y = 3.200000000e+01f;
    (*this).Background.Margin.Left = 0.000000000e+00f;
    (*this).Background.Margin.Top = 0.000000000e+00f;
    (*this).Background.Margin.Right = 0.000000000e+00f;
    (*this).Background.Margin.Bottom = 0.000000000e+00f;
    (*this).Background.TintColor = FSlateColor(FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f));
    auto gen = TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceObject");
    (*gen->ContainerPtrToValuePtr<UObject*>(&(*this).Background, 0)) = nullptr;
    auto gen2 = TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("ResourceName");
    (*gen2->ContainerPtrToValuePtr<FName>(&(*this).Background, 0)) = NAME_None;
    auto gen3 = TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("UVRegion");
    (*gen3->ContainerPtrToValuePtr<FBox2D>(&(*this).Background, 0)).Min.X = 0.000000000e+00f;
    (*gen3->ContainerPtrToValuePtr<FBox2D>(&(*this).Background, 0)).Min.Y = 0.000000000e+00f;
    (*gen3->ContainerPtrToValuePtr<FBox2D>(&(*this).Background, 0)).Max.X = 0.000000000e+00f;
    (*gen3->ContainerPtrToValuePtr<FBox2D>(&(*this).Background, 0)).Max.Y = 0.000000000e+00f;
    (*gen3->ContainerPtrToValuePtr<FBox2D>(&(*this).Background, 0)).bIsValid = 0;
    (*this).Background.DrawAs = ESlateBrushDrawType::Image;
    (*this).Background.Tiling = ESlateBrushTileType::NoTile;
    (*this).Background.Mirroring = ESlateBrushMirrorType::NoMirror;
    (*this).Background.ImageType = ESlateBrushImageType::NoImage;
    auto gen4 = TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("bIsDynamicallyLoaded");
    CastField<FBoolProperty>(gen4)->SetPropertyValue(&(*gen4->ContainerPtrToValuePtr<uint8>(&(*this).Background, 0)), false);
    auto gen5 = TBaseStructure<FSlateBrush>::Get()->FindPropertyByName("bHasUObject");
    CastField<FBoolProperty>(gen5)->SetPropertyValue(&(*gen5->ContainerPtrToValuePtr<uint8>(&(*this).Background, 0)), false);
    (*this).ChartLineColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
    (*this).ChartLineThickness = 1.000000000e+00f;
    (*this).BaseFont.FontObject = nullptr;
    (*this).BaseFont.FontMaterial = nullptr;
    (*this).BaseFont.OutlineSettings.OutlineSize = 0;
    (*this).BaseFont.OutlineSettings.bSeparateFillAlpha = false;
    (*this).BaseFont.OutlineSettings.bApplyOutlineToDropShadows = false;
    (*this).BaseFont.OutlineSettings.OutlineMaterial = nullptr;
    (*this).BaseFont.OutlineSettings.OutlineColor = FLinearColor(0.000000000e+00f, 0.000000000e+00f, 0.000000000e+00f, 1.000000000e+00f);
    (*this).BaseFont.TypefaceFontName = NAME_None;
    (*this).BaseFont.Size = 24;
    (*this).BaseFont.LetterSpacing = 0;
    (*this).TitleFontSize = 0;
    (*this).AxisDescriptionFontSize = 0;
    (*this).AxisValueFontSize = 0;
    (*this).FontColor = FLinearColor(1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f, 1.000000000e+00f);
}
