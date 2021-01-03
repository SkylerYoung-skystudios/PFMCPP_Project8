#pragma once 

#include "Highway.h"
#include <string>

struct HighwayPatrol : Vehicle 
{
    HighwayPatrol();
    ~HighwayPatrol() override= default;
    HighwayPatrol(const HighwayPatrol&)= default;
    HighwayPatrol& operator=(const HighwayPatrol&)= default;

    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h );
};
