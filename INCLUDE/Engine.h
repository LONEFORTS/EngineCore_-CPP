#ifndef ENGINE_H
#define ENGINE_H

#include <vector>
#include "Module.h"
#include "ILogger.h"
#include "Config.h"

class Engine {
private:
    std::vector<Module*> modules;
    ILogger* logger;
    Config config;
    bool running;

public:
    Engine(ILogger* logger);

    void addModule(Module* module);
    void run();
    void shutdown();
};

#endif
