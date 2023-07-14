#pragma once

#include "Equation.h"

class LinearEquation : public Equation
{
private:
    double a, b;

public:
    LinearEquation(double a, double b);
    void calculateRoots() override;
};