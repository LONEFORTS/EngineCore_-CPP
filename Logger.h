#ifndef LOGGER_H
#define LOGGER_H

#include "ILogger.h"
#include <fstream>

class Logger : public ILogger {
private:
    std::ofstream file;

public:
    Logger(const std::string& filename);
    ~Logger();

    void log(const std::string& message) override;
};

#endif