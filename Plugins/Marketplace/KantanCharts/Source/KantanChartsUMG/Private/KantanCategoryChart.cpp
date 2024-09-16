#include "KantanCategoryChart.h"
#include "KantanCategoryStyleSet.h"

UKantanCategoryChart::UKantanCategoryChart() {
    (*this).bAutoPerCategoryStyles = true;
    static ConstructorHelpers::FObjectFinder<UKantanCategoryStyleSet> gen(TEXT("/KantanCharts/Style/CategoryStyles/DefaultCategoryStyleSet.DefaultCategoryStyleSet"));
    (*this).CategoryStyleSet = gen.Object;
}

void UKantanCategoryChart::AddCategoryStyleOverride(FName CategoryId, FLinearColor Color) {
}

