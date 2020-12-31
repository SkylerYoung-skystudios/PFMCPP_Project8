#pragma once
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);

    ~SemiTruck() override= default;
    SemiTruck(const SemiTruck&)= default;
    SemiTruck& operator=(const SemiTruck&)= default;

    void slowDown();
    void pullOver();

};
