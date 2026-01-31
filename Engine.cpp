#include "Engine.h"
#include <string>

Engine::Engine(ILogger* logger)
    : logger(logger), running(false) {}

void Engine::addModule(Module* module) {
    modules.push_back(module);
}

void Engine::run() {
    running = true;
    logger->log("[Engine] Starting engine");

    for (auto module : modules) module->init();

    for (int tick = 0; tick < 5; ++tick) {
        logger->log("[Engine] Tick " + std::to_string(tick));
        for (auto module : modules) module->update();
    }

    shutdown();
}

void Engine::shutdown() {
    logger->log("[Engine] Shutting down");
    for (auto module : modules) module->shutdown();
    running = false;
}