#include <omp.h>
#include <stdio.h>

static long num_steps = 1000000; double step;
#define NUM_THREADS 1
void main ()
{ 
     int i ; 
     double pi, sum[NUM_THREADS],start_time, end_time ;
     step = 1.0/(double) num_steps;
     omp_set_num_threads(NUM_THREADS);
    start_time=omp_get_wtime();
     #pragma omp parallel private(i)//把 i当做私有变量
    {    
        int id; double x;
        id = omp_get_thread_num();
        for (i=id, sum[id]=0.0;i< num_steps; i=i+NUM_THREADS){
         x = (i+0.5)*step; 
         sum[id] += 4.0/(1.0+x*x);
        }
    }
     #pragma omp master
     {
         for(i=0, pi=0.0;i<NUM_THREADS;i++)
        {
          pi += sum[i] * step;  
          //printf("sum[%d]=%f \n",i,sum[i]);
        } 
        end_time=omp_get_wtime();
        printf("Pi=%f\n Running time %f\n", pi, end_time-start_time);
     }
        
}