#include "IGS_EntitlementDatabaseRow.h"

FIGS_EntitlementDatabaseRow::FIGS_EntitlementDatabaseRow() {
    (*this).ID = FGameplayTag();
    (*this).Title = FText::GetEmpty();
    (*this).RequiresCampaignRestart = false;
    (*this).Steam_AppId = 0;
    (*this).Steam_URL = TEXT("");
    (*this).Epic_OfferId = TEXT("");
    (*this).Epic_OfferURL = TEXT("");
    (*this).PS5_Offers.US_OfferId = TEXT("");
    (*this).PS5_Offers.US_StoreId = TEXT("");
    (*this).PS5_Offers.EU_OfferId = TEXT("");
    (*this).PS5_Offers.EU_StoreId = TEXT("");
    (*this).PS5_Offers.JP_OfferId = TEXT("");
    (*this).PS5_Offers.JP_StoreId = TEXT("");
    (*this).PS5_Offers.ASIA_OfferId = TEXT("");
    (*this).PS5_Offers.ASIA_StoreId = TEXT("");
    (*this).XBOX_OfferId = TEXT("");
    (*this).OnlineFact = FGameplayTag();
    (*this).IsDLC = false;
}
