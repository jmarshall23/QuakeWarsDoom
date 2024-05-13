// notificationSystemLocal.h
#ifndef __NOTIFICATIONSYSTEMLOCAL_H__
#define __NOTIFICATIONSYSTEMLOCAL_H__

class sdNotificationSystemLocal : public sdNotificationSystem {
public:
    int GetNumNotifications() const override;
    const notification_t* GetNotification(const int index) const override;

    void AddNotification(const notification_t& notification);

private:
    notification_t notifications[MAX_NOTIFICATIONS];
    int numNotifications;
};

#endif // __NOTIFICATIONSYSTEMLOCAL_H__