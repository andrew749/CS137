#include<stdio.h>
int main()
{

int a[]={7,6,5,4,3,2,1};
int *temp=(int  *)calloc(7,sizeof(int));

sort (a,7,temp);
int i=0;

for(;i<7;i++)
  printf("%d\n",a[i] );
}
void sort(int *a, int n, int *temp)
{
if(n<=1)return;
sort(a,n/2,temp);
sort(a+n/2,n-n/2,temp);
int i=0,j=n/2,k=0;
while(i<n/2&&j<n)
  if(a[i]<=a[j])
    temp[k++]=a[i++];
  else if(a[i]>a[j])
    temp[k++]=a[j++];
while(i<n/2)
  temp[k++]=a[i++];
while(j<n)
  temp[k++]=a[j++];
for (i=0;i<n;i++)
  a[i]=temp[i];



}
