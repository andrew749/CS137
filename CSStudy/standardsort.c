#include<stdio.h>
int compare(const void * a,const void * b)
{
if(*(int *)a<*(int *)b)return 1;
else return -1;

}
int main(){
int a[]={1,3,2,5,432,54325,435436,42,21,3424,3243,2};
qsort(a,sizeof(a)/sizeof(int),sizeof(int),compare);
int i;
for(i=0;i<sizeof(a)/sizeof(int);i++)
  printf("%d\n",a[i]);



}

