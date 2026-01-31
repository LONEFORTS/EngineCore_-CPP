#ifndef MODULE_H
#define MODULE_H

class Module {
public:
    virtual void init() = 0;
    virtual void update() = 0;
    virtual void shutdown() = 0;
    virtual ~Module() {}
};

#endif