#include "precompiled.h"
#include "NotificationSystem_local.h"

sdNotificationSystemLocal::sdNotificationSystemLocal() : numNotifications(0) {
    std::memset(notifications, 0, sizeof(notifications));
}

int sdNotificationSystemLocal::GetNumNotifications() const {
    return numNotifications;
}

const notification_t* sdNotificationSystemLocal::GetNotification(const int index) const {
    if (index < 0 || index >= numNotifications) {
        return nullptr;
    }
    return &notifications[index];
}

void sdNotificationSystemLocal::AddNotification(const notification_t& notification) {
    if (numNotifications < MAX_NOTIFICATIONS) {
        notifications[numNotifications++] = notification;
    }
}