#include<stdio.h>
int main()
{
  int a[]={1,4,98,7,6,5,4,2,1,0};
  sort3(a,10);
  int i;
  for(i=0;i<10;i++ )
    printf("%d\n",a[i] );
}
void sort(int *a,int n)
{
  int i,j,min,temp;
  for(i=0;i<n-1;i++)
  {
    min=i;
    for(j=i+1;j<n;j++)
      if(a[j]<a[min])
        min=j;
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;




  }



}
void sort2(int *a, int n)
{
  int min, i,j,temp;
  for(i=0;i<n-1;i++){
    min=i;
    for(j=i;j<n;j++)
      if(a[j]<a[min])
        min=j;
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;



  }



}
void sort3(int *a, int n)
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
