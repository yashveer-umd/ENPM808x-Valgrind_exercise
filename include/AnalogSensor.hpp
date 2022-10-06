#pragma once

#include <iostream>

class AnalogSensor
{
private:
    unsigned int mSamples;
    
public:
    AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
};
