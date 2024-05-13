#ifndef SDNETSERVICE_LOCAL_H
#define SDNETSERVICE_LOCAL_H

#include "sdNet.h"

class sdNetServiceLocal : public sdNetService {
public:
    sdNetServiceLocal();
    ~sdNetServiceLocal() override;

    bool Init() override;
    void Shutdown() override;
    void RunFrame() override;
    serviceState_e GetState() const override;
    disconnectReason_e GetDisconnectReason() const override;
    dedicatedState_e GetDedicatedServerState() const override;
    const motdList_t& GetMotD() const override;
    bool CheckKey(const char* key, bool noChecksum = false) const override;
    const char* GetStoredLicenseCode() const override;
    bool IsSteamActive() const override;
    sdNetErrorCode_e CreateUser(sdNetUser** user, const char* username) override;
    void DeleteUser(sdNetUser* user) override;
    int NumUsers() const override;
    sdNetUser* GetUser(int index) override;
    sdNetUser* GetActiveUser() override;
    sdNetSessionManager& GetSessionManager() override;
    sdNetStatsManager& GetStatsManager() override;
    sdNetFriendsManager& GetFriendsManager() override;
    sdNetTeamManager& GetTeamManager() override;
    void FreeTask(sdNetTask* task) override;
    sdNetErrorCode_e GetLastError() const override;
    sdNetTask* Connect() override;
    sdNetTask* SignInDedicated() override;
    sdNetTask* SignOutDedicated() override;
    sdNetTask* GetAccountsForLicense(idStrList& accountNames, const char* licenseCode) override;
    const idDict* GetProfileProperties(sdNetClientId userID) const override;
};

#endif // SDNETSERVICE_LOCAL_H