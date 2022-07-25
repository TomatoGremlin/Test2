#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "comparators.h"
#define COUNT 5
#define MIN   1
#define MAX   20

/*
(.h files don't compile like .c files )

Compiling main.c :

1.preprocessing/ it goes from the source code .c file to a .i file;
-The preprocessor includes the header and expands macros 
gcc -E main.c -o main.i   
2.compilation/ it goes from a .i file to a .s file    
gcc -S main.i -o main.s  
3.assemble / it goes from a .s file to a .o(object) file   
-turns into assembly code with the Assembler
gcc -c main.s -o main.o      


Compiling comparators.c :

1.preprocessing/ it goes from the source code .c file to a .i file;
-The preprocessor includes the header and expands macros 
gcc -E comparators.c -o comparators.i   
2.compilation/ it goes from a .i file to a .s file 
-turns into assembly code   
gcc -S comparators.i -o comparators.s  
3.assemble / it goes from a .s file to a .o(object) file   
-turns into machine code with the Assembler
gcc -c comparators.s -o comparators.o      

----------
4.Linking
- includes static libraries
-turns into an executable machine code
gcc main.o comparators.o -o program

-------

Static library:
ar -rcs libcomparatorslib comparators.o
gcc main.c -o program -L . -l comparatorslib

Dynamic library:
gcc -c -fPIC comparators.c -o dcomparators.o
gcc -shared -o libcomparatorslib.so
gcc main.c -o program -L. -l dcomparatorslib
*/

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

    double(*fp[4])(const double *, const double *);  // array of the compare functions
    fp[0] =compUp;
    fp[1] =compDown;
    fp[2] =compAbs;


    int number;
    // input check
    scanf("%d", number); // get index to choose a compare function
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

