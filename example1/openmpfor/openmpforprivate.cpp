/*
 * @Author: mikey.qiuwenhui 
 * @Date: 2019-01-30 16:51:47 
 * @Last Modified by: mikey.qiuwenhui
 * @Last Modified time: 2019-01-30 17:09:28
 * 数据的共享与私有化
 * 并行区域中定义的变量
 * 多个线程用来完成循环的循环变量
 * private、firstprivate、lastprivate或reduction字句修饰的变量
 */
#include <omp.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int share_a=0;// 共享变量
    int share_to_private_b=1; // 通过 private 子句修饰该变量之后在并行区域内变为私有变量
    #pragma omp parallel
    {
        int private_c =2;

        #pragma omp for private(share_to_private_b)
        for(int i = 0; i < 10; ++i)//该循环变量是私有的，若为两个线程，则一个线程执行0~4，另一个执行5~9
        {
            /* code */
             cout<<"x="<<i<<endl;
        }
        
       
    }
    return 0;
}