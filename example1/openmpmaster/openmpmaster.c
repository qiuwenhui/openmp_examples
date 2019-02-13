/*
 * @Author: mikey.qiuwenhui 
 * @Date: 2019-02-11 18:23:29 
 * @Last Modified by: mikey.qiuwenhui
 * @Last Modified time: 2019-02-11 18:29:22
 * master 通过#pragma omp mater来声明对应的并行程序块只由主线程完成。
 */
#include <stdio.h>
#include <omp.h>

int main(){
    #pragma omp parallel
    {
        #pragma omp master//master 通过#pragma omp mater来声明对应的并行程序块只由主线程完成
        {
            for (int j = 0; j < 10; ++j){
                printf("%d-\n", j);
            }
        }

        printf("This will be shown two or more times\n");
    }
    return 0;
}