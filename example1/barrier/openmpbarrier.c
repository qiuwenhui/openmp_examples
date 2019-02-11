/*
 * @Author: mikey.qiuwenhui 
 * @Date: 2019-02-11 18:03:46 
 * @Last Modified by: mikey.qiuwenhui
 * @Last Modified time: 2019-02-11 18:04:53
 * 显式同步栅障 #pragma omp barrier
 */
#include <stdio.h>
#include <omp.h>

int main(){
    #pragma omp parallel
    {
        for (int i = 0; i < 10; ++i){
        printf("%+d+\n", i);
        }
        #pragma omp barrier
        for (int j = 0; j < 10; ++j){
            printf("%d-\n", j);
        }
    }    
}