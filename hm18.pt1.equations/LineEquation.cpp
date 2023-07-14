#include "LineEquation.h"

LinearEquation::LinearEquation(double a, double b)
    :
    a(a),
    b(b)
{}

void LinearEquation::calculateRoots()
{
    if (a == 0)
    {
        if (b == 0)
            cout << "Endless quantity of roots" << endl;

        else
            cout << "No roots" << endl;
    }
    else
    {
        double x = -b / a;
        cout << fixed << setprecision(2) << "x = " << x << endl;
    }
}