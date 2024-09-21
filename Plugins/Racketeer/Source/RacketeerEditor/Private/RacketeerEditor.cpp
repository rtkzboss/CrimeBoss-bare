#include "RacketeerEditor.h"
#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "IGS_TeamUnitVariationHolder.h"
#include "RICOTeamUnitVariationHolderCustomization.h"

#define LOCTEXT_NAMESPACE "Racketeer"

static FName NAME_IGS_TeamUnitVariationHolder("IGS_TeamUnitVariationHolder");

void FRacketeerEditorModule::StartupModule()
{
	auto& PropertyEditorModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyEditorModule.RegisterCustomPropertyTypeLayout(NAME_IGS_TeamUnitVariationHolder, FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FRICOTeamUnitVariationHolderCustomization::MakeInstance));
}

void FRacketeerEditorModule::ShutdownModule()
{
	if (auto PropertyEditorModule = FModuleManager::GetModulePtr<FPropertyEditorModule>("PropertyEditor"))
	{
		PropertyEditorModule->UnregisterCustomPropertyTypeLayout(NAME_IGS_TeamUnitVariationHolder);
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRacketeerEditorModule, RacketeerEditor)
