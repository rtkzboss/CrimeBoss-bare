#include "META_RandomEventManagerSaveData.h"

FMETA_RandomEventManagerSaveData::FMETA_RandomEventManagerSaveData() {
    (*this).RandEventCategoriesInfo = {};
    (*this).CurrentPartnersRandEvents = {};
    (*this).ReadyForActivationEvents = {};
    (*this).EventsSpecificCooldown = {};
    (*this).SelectedGangForEvent = {};
    (*this).EventRewards = {};
    (*this).CrewEventMissions = {};
    (*this).CalculatedCostForGenericEvents = {};
    (*this).CrewEventMissionsPrices = {};
    (*this).CrewEventsAndTheirGraphs = {};
    (*this).HeistersStateChangesHistory = {};
    (*this).MissingHeistersEventsData = {};
    (*this).CooldownCounterForFuneralOfGenericHeisters = 0;
    (*this).UnfulfilledEvents = {};
}
