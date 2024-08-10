#pragma once

class HardwareInterface
{
public:
    virtual void foo1() = 0;
    virtual void foo2() = 0;
    virtual void foo3() = 0;

    virtual void sendCommand() {};
};