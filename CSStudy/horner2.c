#include<stdio.h>
int horner(int *a, int n,int x)
{
  int i;int sum=0;
  for(i=n-1;i>=0;--i)
    sum=sum*x+a[i];
  return sum;


}
int main(){
int a[]={};



}
