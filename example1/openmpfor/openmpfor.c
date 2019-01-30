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
    #pragma omp parallel  for
       for(int i = 0; i < 10; i++)
       {
           printf("i=%d",i);
           /* code */
       }
  return 0;
}
