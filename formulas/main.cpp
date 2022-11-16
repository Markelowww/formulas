#include <stdio.h> 
#include <inttypes.h>
#include <math.h> 
#include "main.h"
int main()
{
    double x, y, e = 2.71828;
    double help = 0;
    double k1 = 1.33, r1 = 0.85, s1 = 3.5;
    double k2 = 0.9, r2 = 3.3, s2 = 1.2;
    double k3 = 1.57, r3 = 0.75, s3 = 2.15;
    printf("Enter x:\n");
    scanf("%d", &x);
    CalculationFormula(x, r1, s1, help, y, e, k1, r2, s2, k2, r3, s3, k3);
    printf("y = %lf", y);
    return 0;
}
