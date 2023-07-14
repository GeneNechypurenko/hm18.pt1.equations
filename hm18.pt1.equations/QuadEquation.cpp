#include "QuadEquation.h"

QuadraticEquation::QuadraticEquation(double a, double b, double c)
    :
    a(a),
    b(b),
    c(c)
{}

void QuadraticEquation::calculateRoots()
{
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << fixed << setprecision(2) << "x1 = " << x1  << "; x2 = " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        double x = -b / (2 * a);
        cout << fixed << setprecision(2) << "x = " << x << endl;
    }
    else
    {
        cout << "No roots" << endl;
    }
}
