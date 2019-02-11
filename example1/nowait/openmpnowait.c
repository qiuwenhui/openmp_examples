/*
 * @Author: mikey.qiuwenhui 
 * @Date: 2019-02-11 17:44:35 
 * @Last Modified by: mikey.qiuwenhui
 * @Last Modified time: 2019-02-11 18:02:04
 * nowait 用来取消栅障
 * 隐式栅障
barrier为隐式栅障，即并行区域中所有线程执行完毕之后，主线程才继续执行。
 * 
 */
#include <stdio.h>
#include <omp.h>

int main(){
    #pragma omp parallel
    {
        #pragma omp for nowait
        for (int i = 0; i < 10; ++i){
            printf("%+d+\n", i);
        }

        #pragma omp for
        for (int j = 0; j < 10; ++j){
            printf("%d-\n", j);
        }
    }
    return 0;
}