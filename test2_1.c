#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 5
#define MIN   1
#define MAX   20

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
  
int main()
{
    srand (time ( NULL));
    
    double arr[COUNT];
    double range;
    double divi ;

    for (size_t i = 0; i < COUNT; i++) // generate random numbers
    {
        range = (MAX - MIN); 
        divi = RAND_MAX / range;
        arr[i] = MIN + (rand() / divi);
    }

    double(*fp[4])(const double *, const double *);  // array of the compare functions
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
