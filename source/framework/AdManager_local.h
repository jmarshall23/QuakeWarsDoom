#ifndef __ADMANAGERLOCAL_H__
#define __ADMANAGERLOCAL_H__

class sdAdObjectCallbackLocal : public sdAdObjectCallback {
public:
    void OnImageLoaded(class idImage* image) override;
    void OnDestroyed(void) override;
    void UpdateImpression(impressionInfo_t& impression, const struct renderView_s& view, const class sdBounds2D& viewPort) override;
};

class sdAdObjectSubscriberLocal : public sdAdObjectSubscriberInterface {
public:
    void Free(void) override;
    void Activate(void) override;
};

class sdAdManagerLocal : public sdAdManager {
public:
    ~sdAdManagerLocal(void) override {}

    void Init() override;
    void Shutdown() override;

    sdAdObjectSubscriberInterface* AllocAdSubscriber(const char* objectName, sdAdObjectCallback* callback) override;
    void SetAdZone(const char* zoneName) override;
};

#endif // __ADMANAGERLOCAL_H__