/*
 * @Author: mikey.qrobot
 * @Date: 2019-01-24 11:25:32 
 * @Last Modified by:   mikey.qrobot
 * @Last Modified time: 2019-01-24 11:25:32 
 */
#include <omp.h>
#include <stdio.h>
int main()
{
    #pragma omp parallel
       for(int i = 0; i < 10; i++)
       {
           printf("%d ",i);
           /* code */
       }
       printf("\n");
       //for x循环并行声明形式2
       #pragma omp parallel for
       for(int j = 0; j < 10; ++j)
       {
           /* code */
           printf("%d ",j);
       }
         printf("\n");
  return 0;
}
