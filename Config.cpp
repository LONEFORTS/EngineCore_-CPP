#include "Config.h"

void Config::set(const std::string& key, const std::string& value) {
    data[key] = value;
}

std::string Config::get(const std::string& key) const {
    auto it = data.find(key);
    if (it != data.end()) return it->second;
    return "";
}