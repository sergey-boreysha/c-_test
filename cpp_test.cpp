#include <iostream>

#include "I2CInterface.hpp"
#include "MDIOInterface.hpp"

int main()
{
   HardwareInterface * hi1 = new I2CInterface;
   hi1->foo1();
   hi1->sendCommand();

   HardwareInterface * hi2 = new MDIOInterface;
   hi2->foo1();


   //std::cout << "Hello, world!" << std::endl;
}