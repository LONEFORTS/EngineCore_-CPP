#include "Engine.h"
#include "Logger.h"
#include "Module.h"
#include <iostream>

class TestModule : public Module {
public:
    void init() override {
        std::cout << "TestModule initialized\n";
    }

    void update() override {
        std::cout << "TestModule updating\n";
    }

    void shutdown() override {
        std::cout << "TestModule shutdown\n";
    }
};

int main() {
    Logger logger("engine.log");
    Engine engine(&logger);

    TestModule testModule;
    engine.addModule(&testModule);

    engine.run();
    return 0;
}