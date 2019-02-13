/*
 * @Author: mikey.qiuwenhui 
 * @Date: 2019-02-13 16:28:06 
 * @Last Modified by: mikey.qiuwenhui
 * @Last Modified time: 2019-02-13 16:47:43
 * FLUSH语句是用来确保执行中存储器中的数据一
致的同步点。保证一个变量从内存中的读/写
 */
#include <stdio.h>
int main()
{
  int x[100]={10},i,j,y[100],n=10;
  for(i=0;i<n;i++)
  {
       for(j=1;i<4;j++)
       {
           x[j]=i+x[j-1]; 
       }
       y[i]=x[1]-x[3];
       printf("y[%d]=%d\n",i,y[i]);
  }
  return 0;
}