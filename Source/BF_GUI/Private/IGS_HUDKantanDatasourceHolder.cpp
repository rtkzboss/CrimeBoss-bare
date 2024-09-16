#include "IGS_HUDKantanDatasourceHolder.h"
#include "KantanSimpleCartesianDatasource.h"

UIGS_HUDKantanDatasourceHolder::UIGS_HUDKantanDatasourceHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    auto gen = CreateDefaultSubobject<UKantanSimpleCartesianDatasource>(TEXT("PressureGraphDataSource"));
    (*this).PressureGraphDataSource = gen;
    (*this).PressureGraphCatId_Value = TEXT("KantanSimpleSeries__0");
    (*this).PressureGraphExpectedId_Value = TEXT("KantanSimpleSeries__1");
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

