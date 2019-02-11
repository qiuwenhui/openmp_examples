/*
 * @Author: mikey.qiuwenhui 
 * @Date: 2019-02-11 16:25:36 
 * @Last Modified by: mikey.qiuwenhui
 * @Last Modified time: 2019-02-11 16:39:13
 * 线程同步之 critical
    #pragma omp critical [(name)] //[]表示名字可选
    {
    //并行程序块，同时只能有一个线程能访问该并行程序块
    }
 */
#include <stdio.h>


int main()
{
    int sum=0;
    printf("Before:%d \n",sum);

    #pragma omp parallel for
    for(int i = 0; i < 100; i++)
    {
        /* code */
        #pragma omp critical(a) //保护并行程序块
        {
            sum=sum+i;
            sum=sum+i*2;
        }

    }
    printf("After: %d \n",sum);
    return 0;
}