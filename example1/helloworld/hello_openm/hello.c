#include <omp.h>
#include <stdio.h>

int main()
{
    #pragma omp parallel
    printf("Hello world openmp\n");
    return 0;
}