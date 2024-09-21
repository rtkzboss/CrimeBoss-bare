#include "K2Node_RICOLoadLevel.h"
#include "K2Node_CallFunction.h"
#include "K2Node_GetArrayItem.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "KismetCompiler.h"
#include "BlueprintNodeSpawner.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "IGS_BuildConfigurationDataAsset.h"
#include "IGS_LevelGeneratorFunctionLibrary.h"
#include "IGS_GeneratorBuildConfiguration.h"
#include "IGS_BuildConfiguration.h"
#include "IGS_RandomStreamHolder.h"
#include "IGS_GeneratorVariantData.h"

#define LOCTEXT_NAMESPACE "Racketeer"

static FName ResultPinName(TEXT("bSuccess"));
static FName WorldContextPinName(TEXT("WorldContextObject"));
static FName BuildConfigurationPinName(TEXT("BuildConfiguration"));
static FName ConnectionNamePinName(TEXT("ConnectionName"));
static FName ConnectionPinName(TEXT("Connection"));
static FName RandomStreamHolderPinName(TEXT("RandomStreamHolder"));
static FName GeneratorVariantDataPinName(TEXT("GeneratorVariantData"));

bool UK2Node_RICOLoadLevel::UseWorldContext() const
{
	UBlueprint* BP = GetBlueprint();
	return BP && BP->ParentClass && BP->ParentClass->HasMetaDataHierarchical(FBlueprintMetadata::MD_ShowWorldContextPin);
}

bool UK2Node_RICOLoadLevel::IsFreeConnectionPointPin(UEdGraphPin* Pin) const
{
	if (Pin->ParentPin) return IsFreeConnectionPointPin(Pin->ParentPin);

	return Pin->PinName != UEdGraphSchema_K2::PN_Execute &&
		Pin->PinName != UEdGraphSchema_K2::PN_Then &&
		Pin->PinName != WorldContextPinName &&
		Pin->PinName != BuildConfigurationPinName &&
		Pin->PinName != ConnectionNamePinName &&
		Pin->PinName != ConnectionPinName &&
		Pin->PinName != RandomStreamHolderPinName &&
		Pin->PinName != GeneratorVariantDataPinName &&
		Pin->PinName != ResultPinName;
}
void UK2Node_RICOLoadLevel::CreatePinsForBuildConfiguration(UIGS_BuildConfigurationDataAsset* BuildConfiguration, TArray<UEdGraphPin*>* OutPins)
{
	check(BuildConfiguration);
	UScriptStruct* SubtypeObject = TBaseStructure<FIGS_ConnectionPointData>::Get();
	for (FIGS_ConnectionPointData& ConnectionPoint : BuildConfiguration->ConnectionPoints)
	{
		UEdGraphPin* Pin = CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Struct, SubtypeObject, ConnectionPoint.Name);
		if (OutPins) OutPins->Add(Pin);
	}
}
UEdGraphPin* UK2Node_RICOLoadLevel::GetThenPin() const
{
	return FindPinChecked(UEdGraphSchema_K2::PN_Then, EGPD_Output);
}
UEdGraphPin* UK2Node_RICOLoadLevel::GetResultPin() const
{
	return FindPinChecked(ResultPinName, EGPD_Output);
}
UEdGraphPin* UK2Node_RICOLoadLevel::GetWorldContextPin() const
{
	UEdGraphPin* Pin = FindPin(WorldContextPinName);
	check(!Pin || Pin->Direction == EGPD_Output);
	return Pin;
}
UEdGraphPin* UK2Node_RICOLoadLevel::GetConnectionPin() const
{
	return FindPinChecked(ConnectionPinName, EGPD_Input);
}
UEdGraphPin* UK2Node_RICOLoadLevel::GetConnectionNamePin() const
{
	return FindPinChecked(ConnectionNamePinName, EGPD_Input);
}
UEdGraphPin* UK2Node_RICOLoadLevel::GetRandomStreamHolderPin() const
{
	return FindPinChecked(RandomStreamHolderPinName, EGPD_Input);
}
UEdGraphPin* UK2Node_RICOLoadLevel::GetGeneratorVariantDataPin() const
{
	return FindPinChecked(GeneratorVariantDataPinName, EGPD_Input);
}
UEdGraphPin* UK2Node_RICOLoadLevel::GetBuildConfigurationPin(TOptional<TArrayView<UEdGraphPin* const>> InPins) const
{
	TArrayView<UEdGraphPin* const> PinsToSearch = InPins.Get(Pins);
	for (UEdGraphPin* Pin : PinsToSearch)
	{
		if (Pin && Pin->PinName == BuildConfigurationPinName)
		{
			check(Pin->Direction == EGPD_Input);
			return Pin;
		}
	}
	return nullptr;
}
UIGS_BuildConfigurationDataAsset* UK2Node_RICOLoadLevel::GetBuildConfigurationDataAsset(TOptional<TArrayView<UEdGraphPin* const>> InPins) const
{
	UEdGraphPin* Pin = GetBuildConfigurationPin(InPins);
	if (!Pin || Pin->LinkedTo.Num()) return nullptr;
	return Cast<UIGS_BuildConfigurationDataAsset>(Pin->DefaultObject);
}
bool UK2Node_RICOLoadLevel::HasBuildConfiguration() const
{
	UEdGraphPin* Pin = GetBuildConfigurationPin();
	return Pin && (Pin->LinkedTo.Num() || Cast<UIGS_BuildConfigurationDataAsset>(Pin->DefaultObject));
}
FName UK2Node_RICOLoadLevel::GetConnectionName() const
{
	UEdGraphPin* Pin = GetConnectionNamePin();
	if (!Pin || Pin->LinkedTo.Num()) return NAME_None;
	return FName(Pin->DefaultValue);
}

void UK2Node_RICOLoadLevel::AllocateDefaultPins()
{
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);

	if (UseWorldContext())
	{
		CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Object, UObject::StaticClass(), WorldContextPinName);
	}

	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Object, UIGS_BuildConfigurationDataAsset::StaticClass(), BuildConfigurationPinName);
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Name, ConnectionNamePinName);
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Struct, TBaseStructure<FIGS_ConnectionPointData>::Get(), ConnectionPinName);
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Object, UIGS_RandomStreamHolder::StaticClass(), RandomStreamHolderPinName);
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Struct, TBaseStructure<FIGS_GeneratorVariantData>::Get(), GeneratorVariantDataPinName);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Boolean, ResultPinName);
}
void UK2Node_RICOLoadLevel::ReallocatePinsDuringReconstruction(TArray<UEdGraphPin*>& OldPins)
{
	AllocateDefaultPins();
	if (UIGS_BuildConfigurationDataAsset* BuildConfiguration = GetBuildConfigurationDataAsset(TArrayView<UEdGraphPin* const>(OldPins)))
	{
		CreatePinsForBuildConfiguration(BuildConfiguration);
	}
	RestoreSplitPins(OldPins);
}
void UK2Node_RICOLoadLevel::PostPlacedNewNode()
{
	Super::PostPlacedNewNode();
	if (UIGS_BuildConfigurationDataAsset* BuildConfiguration = GetBuildConfigurationDataAsset())
	{
		CreatePinsForBuildConfiguration(BuildConfiguration);
	}
}
void UK2Node_RICOLoadLevel::PinConnectionListChanged(UEdGraphPin* Pin)
{
	Super::PinConnectionListChanged(Pin);
	if (Pin && Pin->PinName == BuildConfigurationPinName)
	{
		OnBuildConfigurationPinChanged();
	}
}
void UK2Node_RICOLoadLevel::PinDefaultValueChanged(UEdGraphPin* Pin)
{
	if (Pin && Pin->PinName == BuildConfigurationPinName)
	{
		OnBuildConfigurationPinChanged();
	}
}
void UK2Node_RICOLoadLevel::OnBuildConfigurationPinChanged()
{
	TArray<UEdGraphPin*> OldPins = Pins;
	TArray<UEdGraphPin*> OldConnectionPointPins;
	Pins.RemoveAll([&](UEdGraphPin* OldPin)
		{
			if (!IsFreeConnectionPointPin(OldPin)) return false;
			OldConnectionPointPins.Add(OldPin);
			return true;
		});

	TArray<UEdGraphPin*> NewConnectionPointPins;
	if (UIGS_BuildConfigurationDataAsset* BuildConfiguration = GetBuildConfigurationDataAsset())
	{
		CreatePinsForBuildConfiguration(BuildConfiguration, &NewConnectionPointPins);
	}
	RestoreSplitPins(OldPins);
	RewireOldPinsToNewPins(OldConnectionPointPins, Pins, nullptr);

	GetGraph()->NotifyGraphChanged();
	FBlueprintEditorUtils::MarkBlueprintAsModified(GetBlueprint());
}

FText UK2Node_RICOLoadLevel::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return /*bUseUObjectConfiguration ?
		LOCTEXT("LoadLevel_TitleUObject", "Load Level According to UObject Configuration") :*/
		LOCTEXT("LoadLevel_Title", "Load Level According to Configuration");
}
void UK2Node_RICOLoadLevel::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	UClass* ActionKey = GetClass();
	if (!ActionRegistrar.IsOpenForRegistration(ActionKey)) return;
	ActionRegistrar.AddBlueprintAction(ActionKey, UBlueprintNodeSpawner::Create(GetClass()));
}

void UK2Node_RICOLoadLevel::EarlyValidation(FCompilerResultsLog& MessageLog) const
{
	Super::EarlyValidation(MessageLog);
	if (!HasBuildConfiguration())
	{
		MessageLog.Error(*LOCTEXT("LoadLevel_MissingBuildConfiguration", "Missing in @@").ToString(), this);
	}
}
static bool MovePinLinks(FKismetCompilerContext& CompilerContext, UEdGraphPin* Src, UEdGraphPin* Dst)
{
	return Src && Dst && CompilerContext.MovePinLinksToIntermediate(*Src, *Dst).CanSafeConnect();
}
void UK2Node_RICOLoadLevel::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);
	UEdGraphSchema_K2 const* Schema = CompilerContext.GetSchema();

	UIGS_BuildConfigurationDataAsset* BuildConfiguration = GetBuildConfigurationDataAsset();
	FName ConnectionName = GetConnectionName();
	bool bUseUObjectConfiguration = BuildConfiguration && !ConnectionName.IsNone();

	UK2Node_CallFunction* CallNode = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	FName FuncName = bUseUObjectConfiguration ?
		GET_FUNCTION_NAME_CHECKED(UIGS_LevelGeneratorFunctionLibrary, LoadLevelAccordingToUObjectConfiguration) :
		GET_FUNCTION_NAME_CHECKED(UIGS_LevelGeneratorFunctionLibrary, LoadLevelAccordingToConfiguration);
	CallNode->FunctionReference.SetExternalMember(FuncName, UIGS_LevelGeneratorFunctionLibrary::StaticClass());
	CallNode->AllocateDefaultPins();

	bool bSuccess = true;
	bSuccess &= MovePinLinks(CompilerContext, GetExecPin(), CallNode->GetExecPin());
	if (UEdGraphPin* WorldContextPin = GetWorldContextPin())
	{
		bSuccess &= MovePinLinks(CompilerContext, WorldContextPin, CallNode->FindPin(TEXT("WorldContextObject")));
	}
	bSuccess &= MovePinLinks(CompilerContext, GetConnectionPin(), CallNode->FindPin(TEXT("Connection")));
	bSuccess &= MovePinLinks(CompilerContext, GetRandomStreamHolderPin(), CallNode->FindPin(TEXT("RandomStreamHolder")));
	bSuccess &= MovePinLinks(CompilerContext, GetGeneratorVariantDataPin(), CallNode->FindPin(TEXT("GeneratorVariantData")));
	bSuccess &= MovePinLinks(CompilerContext, GetResultPin(), CallNode->GetReturnValuePin());
	bSuccess &= MovePinLinks(CompilerContext, GetThenPin(), CallNode->GetThenPin());

	UEdGraphPin* outFCPPin = CallNode->FindPin(TEXT("outFreeConnectionPoints"));
	for (UEdGraphPin* Pin : Pins)
	{
		if (!IsFreeConnectionPointPin(Pin)) continue;
		int32 Index = BuildConfiguration->ConnectionPoints.IndexOfByKey(Pin->GetFName());
		if (Index == INDEX_NONE) continue; // TODO: diagnostic?

		UK2Node_GetArrayItem* GetNode = CompilerContext.SpawnIntermediateNode<UK2Node_GetArrayItem>(this, SourceGraph);
		GetNode->AllocateDefaultPins();
		if (UEdGraphPin* IndexPin = GetNode->GetIndexPin())
		{
			Schema->TrySetDefaultValue(*IndexPin, LexToString(Index));
		}
		else
		{
			bSuccess = false;
		}
		bSuccess &= Schema->TryCreateConnection(outFCPPin, GetNode->GetTargetArrayPin());
		bSuccess &= MovePinLinks(CompilerContext, Pin, GetNode->GetResultPin());
	}

	// create build configuration
	if (bUseUObjectConfiguration)
	{
		auto Outer = GetBlueprint()->SkeletonGeneratedClass->GetAuthoritativeClass();
		UIGS_GeneratorBuildConfiguration* Config = NewObject<UIGS_GeneratorBuildConfiguration>(Outer);
		//Config->Filters = ;
		Config->BuildConfigurationDataAsset = BuildConfiguration;
		//Config->VariantName = ;
		Config->ConnectionName = ConnectionName;
		Config->Cooked_ConnectionPoints = BuildConfiguration->ConnectionPoints;
		Config->Cooked_Variants = BuildConfiguration->Variants;
		if (UEdGraphPin* ConfigurationPin = CallNode->FindPin(TEXT("UObjectConfiguration")))
		{
			ConfigurationPin->DefaultObject = Config;
		}
		else
		{
			bSuccess = false;
		}
	}
	else
	{
		FIGS_BuildConfiguration Config;
		//Config.Filters = ;
		Config.BuildConfigurationDataAsset = BuildConfiguration;
		//Config.VariantName = ;
		Config.ConnectionName = ConnectionName;
		if (BuildConfiguration)
		{
			Config.CachedBuildConfiguration.ConnectionPoints = BuildConfiguration->ConnectionPoints;
			Config.CachedBuildConfiguration.Variants = BuildConfiguration->Variants;
			Config.CachedBuildConfiguration.Level = BuildConfiguration->Level;
			Config.CachedBuildConfiguration.Initialized = true;
		}
		else
		{
			check(0); // TODO: how do we set this at runtime?
		}
		if (UEdGraphPin* ConfigurationPin = CallNode->FindPin(TEXT("Configuration")))
		{
			FString ConfigStr;
			TBaseStructure<FIGS_BuildConfiguration>::Get()->ExportText(ConfigStr, &Config, nullptr, nullptr, 0, nullptr);
			Schema->TrySetDefaultValue(*ConfigurationPin, ConfigStr);
		}
		else
		{
			bSuccess = false;
		}
	}

	BreakAllNodeLinks();
	if (!bSuccess)
	{
		CompilerContext.MessageLog.Error(*LOCTEXT("LoadLevel_Error", "ICE: LoadLevel error @@").ToString(), this);
	}
}

#undef LOCTEXT_NAMESPACE
