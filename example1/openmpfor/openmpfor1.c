
#include<stdio.h>
#include<omp.h>
int main()
{
    int a[10]={1};
    int b[10]={2};
    int c[10]={0};
    #pragma omp parallel  //八核全开
    {
        #pragma omp for
        for(int i = 0; i < 10;++i)
        {
            //c[i]只跟b[i]有关
            c[i]=a[i]+b[i];
            printf("%d=%d+%d\n",c[i],a[i],b[i]);
        }
        
        
    }
    return 0;
}