#pragma once

#include "equation.h"

class QuadraticEquation : public Equation
{
private:
    double a, b, c;

public:
    QuadraticEquation(double a, double b, double c);
    void calculateRoots() override;
};