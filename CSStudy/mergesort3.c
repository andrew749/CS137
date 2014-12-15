#include<stdio.h>
int main(){
  int b[]={1,24,314,3214314,32,4,3,54,435,43,54,35,43,5435,43543,5,43543,5,4543543};
  int *temp=(int *)calloc(sizeof(b)/sizeof(int),sizeof(int));
  sort2(b,sizeof(b)/sizeof(int),temp);
  int i;
  for (i=0;i<sizeof(b)/sizeof(int);i++)
    printf("%d\n",b[i] );

}
void sort(int *a, int n, int *temp){
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
  for(i=0;i<n;i++)
    a[i]=temp[i];

}
void sort2(int *a, int n, int *temp)
{
  if(n<=1)return;
  sort2(a,n/2,temp);
  sort2(a+n/2,n-n/2,temp);
  int i=0, j=n/2,k=0;
  while(i<n/2&&j<n)
    if(a[i]<a[j])
      temp[k++]=a[i++];
    else temp[k++]=a[j++];
  while(i<n/2)
    temp[k++]=a[i++];
  while(j<n)temp[k++]=a[j++];
  for(i=0;i<n;i++)
    a[i]=temp[i];


}
