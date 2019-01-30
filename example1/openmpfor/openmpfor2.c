#include <stdio.h>
#include <omp.h>

int main()
{
    int a[10][5]={1};
    int b[10][5]={2};
    int c[10][5]={3};

    #pragma omp parallel
    {
        #pragma omp for
        for(int i = 0; i < 10; i++)
        {
            printf("i=%d",i);
            /* code */
            for(int j = 0; j < 5; j++)
            {
                /* code */
                c[i][j]=a[i][j]+b[i][j];
                printf("j=%d",j);
            }
            
        }
        
    }
    return 0;
}