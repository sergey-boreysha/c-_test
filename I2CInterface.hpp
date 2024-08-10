#pragma once

#include "HardwareInterface.hpp"

class I2CInterface : public HardwareInterface
{
public:
    void foo1();
    void foo2();
    void foo3();

    void sendCommand();
};

