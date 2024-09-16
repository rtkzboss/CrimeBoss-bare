#include "WorkItemTally.h"

FWorkItemTally::FWorkItemTally() {
    (*this).AllWorkItems = {};
    (*this).WaitingWorkItems = {};
    (*this).ScheduledWorkItems = {};
    (*this).CookingWorkItems = {};
    (*this).CookedWorkItems = {};
    (*this).ErroredWorkItems = {};
    (*this).CookCancelledWorkItems = {};
}
