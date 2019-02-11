/*
 * @Author: mikey.qiuwenhui 
 * @Date: 2019-02-11 15:50:49 
 * @Last Modified by: mikey.qiuwenhui
 * @Last Modified time: 2019-02-11 16:19:27
 * 线程同步之 atomic
 * atomic（原子）操作语法
 * #pragma omp atomic
x< + or * or - or * or / or & or | or << or >> >=expr
(例如x <<= 1; or x *=2;)
 */
#include <stdio.h>
//#include <omp.h>

int main()
{
    int sum=0;
    printf("Before: %d \n",sum);

    #pragma omp parallel for 
    for(int i = 0; i < 20000;++i)
    {
        /* code */
         #pragma omp atomic //对某一块代码操作进行保护，以保证同时只能有一个线程执行该段代码
         sum++;
    }
    printf("Atomic-After:%d\n",sum);
    
    sum=0;
    #pragma omp parallel  for
    for(int  i = 0; i < 20000; ++i)
    {
       sum++; /* code */
    }
    printf("None-atomic-After:%d\n",sum);
    return 0;
    
}