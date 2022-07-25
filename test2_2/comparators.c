#include "comparators.h"
int compUp(const void * a, const void * b)
{
  double n1 = *(double*)a;
    double n2 = *(double*)b;
    if (fabs(n1 - n2) < EPS){
        return 0;
    } else if (n1 > n2){
        return 1;
    }
    return -1;
}

int compDown(const void * a, const void* b)
{
 double n1 = *(double*)a;
    double n2 = *(double*)b;
    if (fabs(n1 - n2) < EPS){
        return 0;
    } else if (n1 > n2){
        return -1;
    }
    return 1;
}

int compAbs(const void * a, const void * b)
{
 double n1 = *(double*)a;
    double n2 = *(double*)b;
    if (fabs(n1 - n2) < EPS){
        return 0;
    } else if (fabs(n1) > fabs(n2)){
        return 1;
    }
    return -1;
}

void printArr(double arr[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%lf ", arr[i]);
}
