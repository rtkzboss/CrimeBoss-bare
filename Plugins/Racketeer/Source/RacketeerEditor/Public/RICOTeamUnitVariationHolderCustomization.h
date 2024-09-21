#pragma once
#include "IPropertyTypeCustomization.h"

class FRICOTeamUnitVariationHolderCustomization : public IPropertyTypeCustomization
{
public:
	static TSharedRef<IPropertyTypeCustomization> MakeInstance()
	{
		return MakeShared<FRICOTeamUnitVariationHolderCustomization>();
	}

	// IPropertyTypeCustomization interface
	void CustomizeHeader(TSharedRef<IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
	void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
	bool ShouldInlineKey() const override
	{
		return true;
	}

private:
	bool GetIsEnabled(TWeakPtr<IPropertyHandle> WeakHandle) const;
	FString GetUnitVariationValue(TWeakPtr<IPropertyHandle> WeakTeamSideHandle, TWeakPtr<IPropertyHandle> WeakUnitVariationHandle) const;
	FString GetTeamSideValue(TWeakPtr<IPropertyHandle> WeakTeamSideHandle) const;
	void GetTeamSideStrings(TArray<TSharedPtr<FString>>& OptionStrings, TArray<TSharedPtr<SToolTip>>& ToolTips, TArray<bool>& RestrictedItems) const;
	void GetUnitVariationStrings(TArray<TSharedPtr<FString>>& OptionStrings, TArray<TSharedPtr<SToolTip>>& ToolTips, TArray<bool>& RestrictedItems, TWeakPtr<IPropertyHandle> WeakTeamSideHandle) const;
	void OnTeamSideValueSelected(FString const& Value, TWeakPtr<IPropertyHandle> WeakTeamSideHandle, TWeakPtr<IPropertyHandle> WeakUnitVariationHandle) const;
	void OnUnitVariationValueSelected(FString const& Value, TWeakPtr<IPropertyHandle> WeakTeamSideHandle, TWeakPtr<IPropertyHandle> WeakUnitVariationHandle) const;
};
