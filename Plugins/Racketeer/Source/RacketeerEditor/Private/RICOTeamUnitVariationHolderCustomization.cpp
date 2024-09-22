#include "RICOTeamUnitVariationHolderCustomization.h"
#include "SlateBasics.h"
#include "Editor.h"
#include "DetailWidgetRow.h"
#include "PropertyEditorModule.h"
#include "PropertyCustomizationHelpers.h"
#include "IDocumentation.h"

#include "IGS_TeamUnitVariationHolder.h"
#include "EIGS_SecurityVariationType.h"
#include "EIGS_CopsVariationType.h"
#include "EIGS_SWATVariationType.h"
#include "EIGS_CiviliansVariationType.h"
#include "EIGS_EmployeesVariationType.h"
#include "EIGS_GangsterVariationType.h"
#include "EIGS_HeistersBackupVariationType.h"

#define LOCTEXT_NAMESPACE "RacketeerEditor"

static FName NAME_TeamSide("TeamSide");
static FName NAME_UnitVariation("UnitVariation");
static const FString MultipleValuesDisplayName = NSLOCTEXT("PropertyEditor", "MultipleValues", "Multiple Values").ToString();

static UEnum* GetUnitVariationEnum(EIGS_TeamSideEnum TeamSide)
{
	switch (TeamSide)
	{
	case EIGS_TeamSideEnum::TS_Heisters:
		return nullptr;
	case EIGS_TeamSideEnum::TS_Security:
		return StaticEnum<EIGS_SecurityVariationType>();
	case EIGS_TeamSideEnum::TS_Cops:
		return StaticEnum<EIGS_CopsVariationType>();
	case EIGS_TeamSideEnum::TS_SWAT:
		return StaticEnum<EIGS_SWATVariationType>();
	case EIGS_TeamSideEnum::TS_Civilians:
		return StaticEnum<EIGS_CiviliansVariationType>();
	case EIGS_TeamSideEnum::TS_Employees:
		return StaticEnum<EIGS_EmployeesVariationType>();
	case EIGS_TeamSideEnum::TS_Gangsters:
		return StaticEnum<EIGS_GangsterVariationType>();
	case EIGS_TeamSideEnum::TS_HeistersBackup:
		return StaticEnum<EIGS_HeistersBackupVariationType>();
	default:
		return nullptr;
	}
}
static FString GetEnumDisplayString(UEnum* Enum, int64 Value)
{
	int32 Index = Enum->GetIndexByValue(Value);
	if (Index == INDEX_NONE) return FString();
	FText DisplayName = Enum->GetDisplayNameTextByIndex(Index);
	return !DisplayName.IsEmpty() ? DisplayName.ToString() : Enum->GetNameStringByIndex(Index);
}
static int32 FindEnumValueIndex(UEnum* Enum, FString const& Value)
{
	for (int32 Index = 0; Index < Enum->NumEnums(); ++Index)
	{
		FString Name = Enum->GetNameStringByIndex(Index);
		FText DisplayName = Enum->GetDisplayNameTextByIndex(Index);

		if (Name == Value || !DisplayName.IsEmpty() && DisplayName.ToString() == Value) return Index;
	}
	return INDEX_NONE;
}
static void GetEnumStrings(UEnum* Enum, TArray<TSharedPtr<FString>>& OptionStrings, TArray<TSharedPtr<SToolTip>>& ToolTips, TArray<bool>& RestrictedItems)
{
	// skip _MAX
	for (int32 Index = 0; Index < Enum->NumEnums() - 1; ++Index)
	{
		if (Enum->HasMetaData(TEXT("Hidden"), Index) || Enum->HasMetaData(TEXT("Spacer"), Index)) continue;

		FText DisplayName = Enum->GetDisplayNameTextByIndex(Index);
		FString Excerpt = Enum->GetNameStringByIndex(Index);
		TSharedRef<FString> OptionString = MakeShared<FString>(!DisplayName.IsEmpty() ? DisplayName.ToString() : Excerpt);
		TSharedRef<SToolTip> ToolTip = IDocumentation::Get()->CreateToolTip(Enum->GetToolTipTextByIndex(Index), nullptr, FString(), Excerpt);

		OptionStrings.Emplace(MoveTemp(OptionString));
		ToolTips.Add(MoveTemp(ToolTip));
		RestrictedItems.Add(false);
	}
}
template<class Enum>
static FPropertyAccess::Result GetEnumValue(TSharedRef<IPropertyHandle> PropertyHandle, Enum& Out)
{
	uint8 EnumValue = 0;
	FPropertyAccess::Result Result = PropertyHandle->GetValue(EnumValue);
	Out = static_cast<Enum>(EnumValue);
	return Result;
}

void FRICOTeamUnitVariationHolderCustomization::CustomizeHeader(TSharedRef<IPropertyHandle> StructPropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	TWeakPtr<IPropertyHandle> WeakStructHandle = StructPropertyHandle;
	//StructPropertyHandle->SetOnPropertyValueChanged(FSimpleDelegate::CreateSP(this, &FRICOTeamUnitVariationHolderCustomization::OnPropertyValueChanged));

	uint32 NumChildren;
	StructPropertyHandle->GetNumChildren(NumChildren);
	check(NumChildren == 2);

	TSharedRef<IPropertyHandle> TeamSideHandle = StructPropertyHandle->GetChildHandle(NAME_TeamSide).ToSharedRef();
	TSharedRef<IPropertyHandle> UnitVariationHandle = StructPropertyHandle->GetChildHandle(NAME_UnitVariation).ToSharedRef();
	TWeakPtr<IPropertyHandle> WeakTeamSideHandle = TeamSideHandle;
	TWeakPtr<IPropertyHandle> WeakUnitVariationHandle = UnitVariationHandle;

	HeaderRow
		.NameContent()
		[
			StructPropertyHandle->CreatePropertyNameWidget()
		]
		.ValueContent()
		.MinDesiredWidth(214)
		.VAlign(VAlign_Center)
		.HAlign(HAlign_Left)
		[
			SNew(SHorizontalBox)
			.IsEnabled(this, &FRICOTeamUnitVariationHolderCustomization::GetIsEnabled, WeakStructHandle)
			+SHorizontalBox::Slot()
			.AutoWidth()
			.Padding(0, 0, 4, 0)
			[
				SNew(SBox)
				.MinDesiredWidth(105)
				[
					PropertyCustomizationHelpers::MakePropertyComboBox(
						TeamSideHandle,
						FOnGetPropertyComboBoxStrings::CreateSP(this, &FRICOTeamUnitVariationHolderCustomization::GetTeamSideStrings),
						FOnGetPropertyComboBoxValue::CreateSP(this, &FRICOTeamUnitVariationHolderCustomization::GetTeamSideValue, WeakTeamSideHandle),
						FOnPropertyComboBoxValueSelected::CreateSP(this, &FRICOTeamUnitVariationHolderCustomization::OnTeamSideValueSelected, WeakTeamSideHandle, WeakUnitVariationHandle)
					)
				]
			]
			+SHorizontalBox::Slot()
			.AutoWidth()
			[
				SNew(SBox)
				.MinDesiredWidth(105)
				[
					PropertyCustomizationHelpers::MakePropertyComboBox(
						UnitVariationHandle,
						FOnGetPropertyComboBoxStrings::CreateSP(this, &FRICOTeamUnitVariationHolderCustomization::GetUnitVariationStrings, WeakTeamSideHandle),
						FOnGetPropertyComboBoxValue::CreateSP(this, &FRICOTeamUnitVariationHolderCustomization::GetUnitVariationValue, WeakTeamSideHandle, WeakUnitVariationHandle),
						FOnPropertyComboBoxValueSelected::CreateSP(this, &FRICOTeamUnitVariationHolderCustomization::OnUnitVariationValueSelected, WeakTeamSideHandle, WeakUnitVariationHandle)
					)
				]
			]
		];
}
void FRICOTeamUnitVariationHolderCustomization::CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
}

bool FRICOTeamUnitVariationHolderCustomization::GetIsEnabled(TWeakPtr<IPropertyHandle> WeakHandle) const
{
	TSharedPtr<IPropertyHandle> Handle = WeakHandle.Pin();
	return Handle && !Handle->IsEditConst();
}

FString FRICOTeamUnitVariationHolderCustomization::GetTeamSideValue(TWeakPtr<IPropertyHandle> WeakTeamSideHandle) const
{
	TSharedPtr<IPropertyHandle> TeamSideHandle = WeakTeamSideHandle.Pin();
	if (!TeamSideHandle) return FString();

	EIGS_TeamSideEnum TeamSide;
	FPropertyAccess::Result Result = GetEnumValue(TeamSideHandle.ToSharedRef(), TeamSide);
	if (Result == FPropertyAccess::Fail) return FString();
	if (Result == FPropertyAccess::MultipleValues) return MultipleValuesDisplayName;
	return GetEnumDisplayString(StaticEnum<EIGS_TeamSideEnum>(), static_cast<int64>(TeamSide));
}
FString FRICOTeamUnitVariationHolderCustomization::GetUnitVariationValue(TWeakPtr<IPropertyHandle> WeakTeamSideHandle, TWeakPtr<IPropertyHandle> WeakUnitVariationHandle) const
{
	TSharedPtr<IPropertyHandle> TeamSideHandle = WeakTeamSideHandle.Pin();
	TSharedPtr<IPropertyHandle> UnitVariationHandle = WeakUnitVariationHandle.Pin();
	if (!TeamSideHandle || !UnitVariationHandle) return FString();

	EIGS_TeamSideEnum TeamSide;
	FPropertyAccess::Result Result = GetEnumValue(TeamSideHandle.ToSharedRef(), TeamSide);
	if (Result == FPropertyAccess::Fail) return FString();
	if (Result == FPropertyAccess::MultipleValues) return MultipleValuesDisplayName;
	check(Result == FPropertyAccess::Success);

	uint8 UnitVariation;
	Result = UnitVariationHandle->GetValue(UnitVariation);
	if (Result == FPropertyAccess::Fail) return FString();
	if (Result == FPropertyAccess::MultipleValues) return MultipleValuesDisplayName;
	check(Result == FPropertyAccess::Success);

	UEnum* Enum = GetUnitVariationEnum(static_cast<EIGS_TeamSideEnum>(TeamSide));
	if (!Enum) return FString::FormatAsNumber(UnitVariation);
	return GetEnumDisplayString(Enum, UnitVariation);
}
void FRICOTeamUnitVariationHolderCustomization::GetTeamSideStrings(TArray<TSharedPtr<FString>>& OptionStrings, TArray<TSharedPtr<SToolTip>>& ToolTips, TArray<bool>& RestrictedItems) const
{
	GetEnumStrings(StaticEnum<EIGS_TeamSideEnum>(), OptionStrings, ToolTips, RestrictedItems);
}
void FRICOTeamUnitVariationHolderCustomization::GetUnitVariationStrings(TArray<TSharedPtr<FString>>& OptionStrings, TArray<TSharedPtr<SToolTip>>& ToolTips, TArray<bool>& RestrictedItems, TWeakPtr<IPropertyHandle> WeakTeamSideHandle) const
{
	TSharedPtr<IPropertyHandle> TeamSideHandle = WeakTeamSideHandle.Pin();
	if (!TeamSideHandle) return;

	EIGS_TeamSideEnum TeamSide;
	if (GetEnumValue(TeamSideHandle.ToSharedRef(), TeamSide) != FPropertyAccess::Success) return;
	UEnum* Enum = GetUnitVariationEnum(TeamSide);
	if (!Enum) return;
	GetEnumStrings(Enum, OptionStrings, ToolTips, RestrictedItems);
}
void FRICOTeamUnitVariationHolderCustomization::OnTeamSideValueSelected(const FString& ValueString, TWeakPtr<IPropertyHandle> WeakTeamSideHandle, TWeakPtr<IPropertyHandle> WeakUnitVariationHandle) const
{
	TSharedPtr<IPropertyHandle> TeamSideHandle = WeakTeamSideHandle.Pin();
	TSharedPtr<IPropertyHandle> UnitVariationHandle = WeakUnitVariationHandle.Pin();
	if (!TeamSideHandle || !UnitVariationHandle) return;

	UEnum* Enum = StaticEnum<EIGS_TeamSideEnum>();
	int32 Index = FindEnumValueIndex(Enum, ValueString);
	if (Index == INDEX_NONE) return;

	EIGS_TeamSideEnum TeamSide;
	if (GetEnumValue(TeamSideHandle.ToSharedRef(), TeamSide) == FPropertyAccess::Success)
	{
		int32 OldIndex = Enum->GetIndexByValue(static_cast<int64>(TeamSide));
		if (OldIndex == Index) return;
	}

	int64 Value = Enum->GetValueByIndex(Index);
	ensure(0 <= Value && Value <= 0xff);

	FScopedTransaction Transaction(FText::Format(LOCTEXT("BeginEditProperty", "Edit {0}"), TeamSideHandle->GetPropertyDisplayName()));
	TeamSideHandle->SetValue(static_cast<uint8>(Value));
	UnitVariationHandle->SetValue(static_cast<uint8>(0));
}
void FRICOTeamUnitVariationHolderCustomization::OnUnitVariationValueSelected(const FString& ValueString, TWeakPtr<IPropertyHandle> WeakTeamSideHandle, TWeakPtr<IPropertyHandle> WeakUnitVariationHandle) const
{
	TSharedPtr<IPropertyHandle> TeamSideHandle = WeakTeamSideHandle.Pin();
	TSharedPtr<IPropertyHandle> UnitVariationHandle = WeakUnitVariationHandle.Pin();
	if (!TeamSideHandle || !UnitVariationHandle) return;

	EIGS_TeamSideEnum TeamSide;
	if (GetEnumValue(TeamSideHandle.ToSharedRef(), TeamSide) != FPropertyAccess::Success) return;
	UEnum* Enum = GetUnitVariationEnum(TeamSide);
	int32 Index = FindEnumValueIndex(Enum, ValueString);
	if (Index == INDEX_NONE) return;

	int64 Value = Enum->GetValueByIndex(Index);
	ensure(0 <= Value && Value <= 0xff);
	UnitVariationHandle->SetValue(static_cast<uint8>(Value));
}

#undef LOCTEXT_NAMESPACE
