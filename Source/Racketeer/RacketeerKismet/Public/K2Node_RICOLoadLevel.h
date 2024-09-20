#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "K2Node_RICOLoadLevel.generated.h"

class UIGS_BuildConfigurationDataAsset;

/**
 * 
 */
UCLASS()
class RACKETEERKISMET_API UK2Node_RICOLoadLevel : public UK2Node
{
	GENERATED_BODY()

	// UEdGraphNode interface
	void AllocateDefaultPins() override;
	FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	void PinConnectionListChanged(UEdGraphPin* Pin) override;
	void PinDefaultValueChanged(UEdGraphPin* Pin) override;
	//FText GetTooltipText() const override;
	void PostPlacedNewNode() override;
	void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	void EarlyValidation(class FCompilerResultsLog& MessageLog) const override;

	// UK2Node interface
	//bool IsNodeSafeToIgnore() const override { return true; }
	void ReallocatePinsDuringReconstruction(TArray<UEdGraphPin*>& OldPins) override;
	void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	//FText GetMenuCategory() const override;

public:
	bool IsFreeConnectionPointPin(UEdGraphPin* Pin) const;
	void CreatePinsForBuildConfiguration(UIGS_BuildConfigurationDataAsset* BuildConfiguration, TArray<UEdGraphPin*>* OutClassPins = nullptr);
	UEdGraphPin* GetThenPin() const;
	UEdGraphPin* GetWorldContextPin() const;
	UEdGraphPin* GetResultPin() const;
	UEdGraphPin* GetConnectionPin() const;
	UEdGraphPin* GetRandomStreamHolderPin() const;
	UEdGraphPin* GetGeneratorVariantDataPin() const;
	UEdGraphPin* GetBuildConfigurationPin(TOptional<TArrayView<UEdGraphPin* const>> Pins = {}) const;
	UIGS_BuildConfigurationDataAsset* GetBuildConfigurationDataAsset(TOptional<TArrayView<UEdGraphPin* const>> Pins = {}) const;
	bool HasBuildConfiguration() const;

	UPROPERTY()
	bool bUseUObjectConfiguration = true;

protected:
	bool UseWorldContext() const;
	void OnBuildConfigurationPinChanged();
};
