#include<stdio.h>
int sort(int *a, int n)
{

int i,j,temp,min;
for(i=0;i<n-1;i++)
{
min=i;
for(j=i;j<n;j++)
  if(a[j]<a[min])
    min=j;
temp=a[i];
a[i]=a[min];
a[min]=temp;



}



}
int main()
{
int a[]={9,8,7,6,5,4,3,2,1};
sort(a, 9);
int i;
for(i=0;i<9;i++)
  printf("%d\n",a[i] );


}
