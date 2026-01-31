#ifndef CONFIG_H
#define CONFIG_H

#include <unordered_map>
#include <string>

class Config {
private:
    std::unordered_map<std::string, std::string> data;

public:
    void set(const std::string& key, const std::string& value);
    std::string get(const std::string& key) const;
};

#endif