#pragma once
#include "CoreMinimal.h"
#include "EdGraphUtilities.h"

class UEdGraphPin;
class SGraphPin;

class RACKETEERKISMET_API FRICOGraphPanelPinFactory: public FGraphPanelPinFactory
{
public:
	TSharedPtr<SGraphPin> CreatePin(UEdGraphPin* Pin) const override;
};
