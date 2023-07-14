#include <iostream>

#include "Equation.h"
#include "LineEquation.h"
#include "QuadEquation.h"

#define SIZE 2

using namespace std;

int main()
{
    Equation* eq[SIZE];

    eq[0] = new LinearEquation(2, -6);
    eq[1] = new QuadraticEquation(1, -5, 6);

    for (int i = 0; i < SIZE; i++)
        eq[i]->calculateRoots();

    for (int i = 0; i < SIZE; i++)
        delete eq[i];

    return 0;
}
