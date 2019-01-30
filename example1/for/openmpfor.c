#include <omp.h>
#include <iostream>
using namespace std;

int main(){
    #pragma omp parallel for  
/*
  通过#pragma omp parallel for来指定下方的for循环采用多线程执行，此时编译器会根据CPU的个数来创建线程数，对于双核系统，编译器会默认创建两个线程执行并行区域的代码。
*/
    for (int i = 0; i < 10; ++i)
    {
        cout << i;
    }
    cout << endl;
    return 0;
}
