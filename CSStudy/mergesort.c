#include<stdio.h>
int *mergesort(int *, int);
int *merge(int *, int *,int ,int);
void  mergeSort(int *a, int n, int *temp){
  int i, j, k;
  if (n<=1)return ;
  mergeSort (a,n/2,temp);
  mergeSort(a+n/2,n-n/2,temp);
  i=0;j=n/2;k=0;
  while(i<n/2&&j<n)

    if(a[i]<=a[j])
      temp[k++]=a[i++];
    else temp[k++]=a[j++];
  while (i<n/2)
    temp[k++]=a[i++];
  while(j<n)
    temp[k++]=a[j++];
  for(i=0;i<n;i++)
    a[i]=temp[i];
}
int main(){
  int i;
  int  test[]={0,10,4,5,7,1,2,3,10};
  int n=9;
  int * temp=(int *)calloc(n,sizeof(int));
  mergeSort(test,n,temp);
  for(i=0;i<n;i++){
    printf("%d\n",test[i]);
  }

}

