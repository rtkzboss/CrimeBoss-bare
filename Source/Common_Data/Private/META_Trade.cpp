#include "META_Trade.h"

UMETA_Trade::UMETA_Trade() {
}

void UMETA_Trade::SetDataFromSave(const FMETA_TradeMissionSave& inTradeMissionSave) {
}

TArray<FMETA_TradeExpense> UMETA_Trade::GetTradeExpenses() const {
    return {};
}

FMETA_TradeMissionSave UMETA_Trade::GetSaveData() {
    return FMETA_TradeMissionSave{};
}

FMETA_TradeMissionRowInfo UMETA_Trade::GetInfo() const {
    return FMETA_TradeMissionRowInfo{};
}

