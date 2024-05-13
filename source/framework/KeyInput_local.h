// keyInputLocal.h
#ifndef __KEYINPUTLOCAL_H__
#define __KEYINPUTLOCAL_H__

class sdKeyInputManagerLocal : public sdKeyInputManager {
public:
    ~sdKeyInputManagerLocal() override {}

    void SetBinding(sdBindContext* context, idKey& key, const char* binding, idKey* modifierKey) override;
    const char* GetBinding(sdBindContext* context, idKey& key, idKey* modifierKey) override;

    void UnbindBinding(sdBindContext* context, const char* bind) override;
    void KeysFromBinding(sdBindContext* context, const char* binding, bool useBindStrWhenEmpty, idWStr& keyName) override;
    void KeysFromBinding(sdBindContext* context, const char* binding, int& numKeys, idKey** keys) override;

    bool IsDown(const idKey& key) override;
    bool IsDown(keyNum_e key) override;
    idKey* GetKey(const char* name) override;
    idKey* GetKeyForEvent(const sdSysEvent& evt, bool& down) override;

    void ProcessUserCmdEvent(const sdSysEvent& event) override;

    sdKeyCommand* GetCommand(sdBindContext* context, const idKey& key) override;

    sdBindContext* AllocBindContext(const char* context) override;

    void UnbindKey(sdBindContext* context, idKey& key, idKey* modifier = NULL) override;

    bool AnyKeysDown(void) override;

private:
    idHashIndex keysHash;
    idList<idKey*> keys;
    idList<sdBindContext*> bindContexts;
    idHashIndex bindContextsHash;
    bool overStrikeMode;
};

#endif // __KEYINPUTLOCAL_H__