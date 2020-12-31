#include "SemiTruck.h"

#include <iostream>

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}

void SemiTruck::slowDown()
{
    setSpeed(35);
    std::cout << name << ": driving slow!" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": pulling over!" << std::endl;
}
