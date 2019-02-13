#include <stdio.h>
#include <omp.h>
int main(int argc,char *argv[])
{
    int nthreads,tid;
    char buf[32];
    #pragma omp parallel private(nthreads,tid)
    {
        tid=omp_get_thread_num();//Obtain and print thread id
        printf("Hello,world form OpenMP thread %d\n",tid);
        if(tid==0)//Only master thread does this
        {
            nthreads=omp_get_num_threads();
            printf("Number of threds %d \n",nthreads);
        }
    }
    return 0;
}