#include "comparators.h"
double compUp(const double * a, const double * b)
{
 return *a - *b;
}

double compDown(const double * a, const double* b)
{
 return *b - *a;
}

double compAbs(const double * a, const double * b)
{
 return abs(*a )- abs(*b);
}

void printArr(double arr[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%lf ", arr[i]);
}