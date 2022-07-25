#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define COUNT 5
#define MIN   -20
#define MAX   20
#define EPS 0.0001
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
  
int main()
{
    srand (time ( NULL));
    
    double arr[COUNT];

    for (size_t i = 0; i < COUNT; i++) // generate random numbers
    {
        double range = (MAX - MIN); 
        double div = RAND_MAX / range;
        arr[i] = MIN + (rand() / div);
    }

    int(*fp[4])(const void *, const void *);  // array of the compare functions
    fp[0] =compUp;
    fp[1] =compDown;
    fp[2] =compAbs;


    int number;
    // input check
    scanf("%d", &number); // get index to choose a compare function
    if (number < 0 || number > 3)
    {
        fprintf(stderr, "Error. The number is not correct");
        return 0;
    }
    

    qsort((void*)arr, COUNT, sizeof(arr[0]), fp[number]);
  
    printf("Array is\n");
    printArr(arr, COUNT);
  
    return 0;
}
