// KeyInput.cpp
//

#include "precompiled.h"
#include "KeyInput_local.h"

sdKeyInputManagerLocal keyInputManagerLocal;
sdKeyInputManager* keyInputManager = &keyInputManagerLocal;

void sdKeyInputManagerLocal::SetBinding(sdBindContext* context, idKey& key, const char* binding, idKey* modifierKey) {

}

const char* sdKeyInputManagerLocal::GetBinding(sdBindContext* context, idKey& key, idKey* modifierKey) {

    return "";
}

void sdKeyInputManagerLocal::UnbindBinding(sdBindContext* context, const char* bind) {

}

void sdKeyInputManagerLocal::KeysFromBinding(sdBindContext* context, const char* binding, bool useBindStrWhenEmpty, idWStr& keyName) {

}

void sdKeyInputManagerLocal::KeysFromBinding(sdBindContext* context, const char* binding, int& numKeys, idKey** keys) {

}

bool sdKeyInputManagerLocal::IsDown(const idKey& key) {
    return false;
}

bool sdKeyInputManagerLocal::IsDown(keyNum_e key) {
    return false;
}

idKey* sdKeyInputManagerLocal::GetKey(const char* name) {
    return nullptr;
}

idKey* sdKeyInputManagerLocal::GetKeyForEvent(const sdSysEvent& evt, bool& down) {
    return nullptr;
}

void sdKeyInputManagerLocal::ProcessUserCmdEvent(const sdSysEvent& event) {

}

sdKeyCommand* sdKeyInputManagerLocal::GetCommand(sdBindContext* context, const idKey& key) {

    return nullptr;
}

sdBindContext* sdKeyInputManagerLocal::AllocBindContext(const char* context) {
    return nullptr;
}

void sdKeyInputManagerLocal::UnbindKey(sdBindContext* context, idKey& key, idKey* modifier) {

}

bool sdKeyInputManagerLocal::AnyKeysDown(void) {
    return false;
}