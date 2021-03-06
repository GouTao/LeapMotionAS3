#include "LNLeapListener.h"

namespace leapnative {

    LNLeapListener::LNLeapListener(FREContext* ctx) {
        m_ctx = ctx;
    }

    LNLeapListener::~LNLeapListener() {
        m_ctx = NULL;
    }

    void LNLeapListener::onInit(const Controller& controller) {
        std::cout << "Initialized" << std::endl;
        FREDispatchStatusEventAsync(*m_ctx, (const uint8_t*) "onInit", (const uint8_t*) "");
    }

    void LNLeapListener::onConnect(const Controller& controller) {
        std::cout << "Connected" << std::endl;
        FREDispatchStatusEventAsync(*m_ctx, (const uint8_t*) "onConnect", (const uint8_t*) "");
    }

    void LNLeapListener::onDisconnect(const Controller& controller) {
        std::cout << "Disconnected" << std::endl;
        FREDispatchStatusEventAsync(*m_ctx, (const uint8_t*) "onDisconnect", (const uint8_t*) "");
    }

    void LNLeapListener::onExit(const Controller& controller) {
        std::cout << "Exited" << std::endl;
        FREDispatchStatusEventAsync(*m_ctx, (const uint8_t*) "onExit", (const uint8_t*) "");
    }

    void LNLeapListener::onFrame(const Controller& controller) {
        FREDispatchStatusEventAsync(*m_ctx, (const uint8_t*) "onFrame", (const uint8_t*) "");
    }
    
    void LNLeapListener::onFocusGained(const Controller& controller) {
        std::cout << "FocusGained" << std::endl;
        FREDispatchStatusEventAsync(*m_ctx, (const uint8_t*) "onFocusGained", (const uint8_t*) "");
    }
    
    void LNLeapListener::onFocusLost(const Controller& controller) {
        std::cout << "FocusLost" << std::endl;
        FREDispatchStatusEventAsync(*m_ctx, (const uint8_t*) "onFocusLost", (const uint8_t*) "");
    }
    
    void LNLeapListener::onServiceConnect(const Controller& controller) {
        std::cout << "ServiceConnect" << std::endl;
        FREDispatchStatusEventAsync(*m_ctx, (const uint8_t*) "onServiceConnect", (const uint8_t*) "");
    }
    
    void LNLeapListener::onServiceDisconnect(const Controller& controller) {
        std::cout << "ServiceDisconnect" << std::endl;
        FREDispatchStatusEventAsync(*m_ctx, (const uint8_t*) "onServiceDisconnect", (const uint8_t*) "");
    }
    
    void LNLeapListener::onDeviceChange(const Controller& controller) {
        std::cout << "DeviceChange" << std::endl;
        FREDispatchStatusEventAsync(*m_ctx, (const uint8_t*) "onDeviceChange", (const uint8_t*) "");
    }
    
}