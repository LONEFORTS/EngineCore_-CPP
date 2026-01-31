#include "Logger.h"
#include <iostream>

Logger::Logger(const std::string& filename) {
    file.open(filename, std::ios::app);
}

Logger::~Logger() {
    if(file.is_open())
        file.close();
}

void Logger::log(const std::string& message) {
    std::cout << message << std::endl;
    if (file.is_open())
        file << message << std::endl;
}
