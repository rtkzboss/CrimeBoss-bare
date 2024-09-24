#include "RacketeerKismet.h"
#include "Modules/ModuleManager.h"
#include "EdGraphUtilities.h"
#include "RICOGraphPanelPinFactory.h"

#define LOCTEXT_NAMESPACE "Racketeer"

FRacketeerKismetModule::FRacketeerKismetModule()
	: GraphPanelPinFactory(MakeShared<FRICOGraphPanelPinFactory>())
{
}
void FRacketeerKismetModule::StartupModule()
{
	FEdGraphUtilities::RegisterVisualPinFactory(GraphPanelPinFactory);
}
void FRacketeerKismetModule::ShutdownModule()
{
	FEdGraphUtilities::UnregisterVisualPinFactory(GraphPanelPinFactory);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRacketeerKismetModule, RacketeerKismet)
