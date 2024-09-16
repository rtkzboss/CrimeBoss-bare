#include "META_NotificationTableRow.h"

FMETA_NotificationTableRow::FMETA_NotificationTableRow() {
    (*this).ID = FSoftObjectPath();
    (*this).Type = EMETA_NotificationType::Small;
    (*this).Effect = EMETA_NotificationEffect::Neutral;
    (*this).Title = FText::GetEmpty();
    (*this).Description = FText::GetEmpty();
    (*this).Image = FSoftObjectPath();
    (*this).AggregationNotificationID = FSoftObjectPath();
    (*this).HideInIntro = false;
}
