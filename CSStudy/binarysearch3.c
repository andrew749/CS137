#include<stdio.h>
int search(int *a, int n, int value)
{
int l,m,h=n-1;
while(h>=1)
{
m=l+(h-1)/2;
if(a[m]==value)return m;
else if(a[m]<value)l=m+1;
else h=m-1;


}
return -1;


}
int main()
{
int a[]={1,2,3,4,5,6};
printf("%d\n",search(a,6,3) );



}
