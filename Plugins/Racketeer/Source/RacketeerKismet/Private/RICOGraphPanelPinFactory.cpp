#include "RICOGraphPanelPinFactory.h"
#include "K2Node_RICOLoadLevel.h"
#include "SGraphPinNameList.h"
#include "IGS_BuildConfigurationDataAsset.h"
#include "IGS_ConnectionPointData.h"
#include "IGS_VariantDefinition.h"

TSharedPtr<SGraphPin> FRICOGraphPanelPinFactory::CreatePin(UEdGraphPin* Pin) const
{
	if (Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Name)
	{
		if (UK2Node_RICOLoadLevel* Node = Cast<UK2Node_RICOLoadLevel>(Pin->GetOwningNode()))
		{
			if (UIGS_BuildConfigurationDataAsset* BCDA = Node->GetBuildConfigurationDataAsset())
			{
				TArray<TSharedPtr<FName>> RowNames;
				if (Pin == Node->GetConnectionNamePin())
				{
					for (FIGS_ConnectionPointData const& CP : BCDA->ConnectionPoints)
					{
						RowNames.Add(MakeShared<FName>(CP.Name));
					}
				}
				else if (Pin == Node->GetVariantNamePin())
				{
					RowNames.Add(MakeShared<FName>(NAME_None));
					for (FIGS_VariantDefinition const& V : BCDA->Variants)
					{
						RowNames.Add(MakeShared<FName>(V.Name));
					}
				}
				else
				{
					return nullptr;
				}
				return SNew(SGraphPinNameList, Pin, RowNames);
			}
		}
	}
	return nullptr;
}
