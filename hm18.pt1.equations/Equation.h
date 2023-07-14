#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

class Equation
{
public:
    virtual void calculateRoots() = 0;
    virtual ~Equation() {}
};