#include "IGS_BotOrderDatabaseTableRow.h"
#include "EIGS_BotOrderActionSource.h"

FIGS_BotOrderDatabaseTableRow::FIGS_BotOrderDatabaseTableRow() {
    (*this).ID = EIGS_BotCommandDefinition::Unknown;
    (*this).Data.MaxBotCount = 1;
    (*this).Data.PathMustExist = true;
    (*this).Data.Stacks = false;
    (*this).Data.CancelOnObject = true;
    (*this).Data.CannotBeInterruptedBy = TSet<EIGS_BotCommandDefinition>{};
    (*this).Data.AllowedSources = TSet<EIGS_BotOrderActionSource>{};
    (*this).UI.IconCharacter = TEXT("");
    (*this).UI.ActionName = FText::GetEmpty();
}
