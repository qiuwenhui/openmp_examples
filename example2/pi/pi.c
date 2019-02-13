/*
 * @Author: mikey.qiuwenhui 
 * @Date: 2019-02-13 13:49:53 
 * @Last Modified by: mikey.qiuwenhui
 * @Last Modified time: 2019-02-13 14:35:29
 */

#include <stdio.h>
#include <time.h>
static long num_steps = 100000;
double step;
void main ()
{ 
   float i; double x, pi, sum = 0.0;
    float start_time,end_time;
    step = 1.0/(double) num_steps;
    start_time=clock();
    for (i=1;i<= num_steps; i++){
    x = (i-0.5)*step;
    sum = sum + 4.0/(1.0+x*x);
    }
    pi = step * sum;
    end_time=clock();
    printf("Pi=%f\nRuning time %f \n",pi,end_time-start_time);
}