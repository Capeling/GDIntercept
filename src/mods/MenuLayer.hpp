#pragma once

#include <Geode/modify/MenuLayer.hpp>
#include "../include.hpp"
#include "../nodes/InterceptPopup.hpp"

class $modify(ModMenuLayer, MenuLayer) {
    bool init();
    void onLogoClick(CCObject* sender);
};