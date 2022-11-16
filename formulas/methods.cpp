#include <inttypes.h>
#include <math.h> 
#include <cmath>
void CalculationFormula(double x, double r1, double s1, double help, double& y, double e, double k1, double r2, double s2, double k2, double r3, double s3, double k3)
{
    if (cos(x) == cos(r1 * s1))
    {
        help = r1 * x;
        y = pow(x, 2) * pow(e, 2 * k1) + log(abs(help));
    }
    if (cos(x) > cos(r2 * s2))
    {
        help = k2 + r2 * s2 * x;
        y = pow(x, 2 / 3) + sqrt(abs(k2 + r2 * s2 * x));
    }
    if (cos(x) < cos(r3 * s3))
        y = atan(k3 * x + r3 * s3);
}