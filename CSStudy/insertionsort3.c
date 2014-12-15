#include<stdio.h>
int sort(int *a, int n)
{

int i,j,temp;
for(i=1;i<n;i++)
{
j=i;temp=a[j];

while(j>0&&a[j-1]>temp)
{
a[j]=a[j-1];
--j;
}
a[j]=temp;


}


}
int main()
{
int a[]={5,4,3,2,1};
sort(a,5);
int i;
for(i=0;i<5;i++)
  printf("%d\n",a[i] );




}
