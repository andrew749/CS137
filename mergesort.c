#include<stdio.h>
#include<stdlib.h>

void mergeSort(int *a,int n, int *temp);
void sort(int a[], int n);
int main(){
int i;
int a[]={0,1,5,4,3,3,43,2,43,21,32,4,14,3,432,4,34,24,34,35,4,25,43,25,45,4356,43,642,1,1,1,1,54,35,23,5,432,54325,42,54,6,76,754,7,437,65,47,654,74,7,654,7,54};
sort(a,sizeof(a)/sizeof(int));
for(i=0;i<sizeof(a)/sizeof(int);i++){
  printf("%d\n",a[i]);
}

}
void sort(int a[], int n){
  int *temp=(int*)malloc(n*sizeof(int));
  mergeSort(a,n,temp);
  free(temp);

}
void mergeSort(int *a, int n, int *temp){
  int i, j, k;
  if(n<=1)return;
  mergeSort(a,n/2,temp);
  mergeSort(a+n/2,n-n/2,temp);
  i=0;j=n/2;k=0;
  while(i<n/2&&j<n)
    if(a[i]<=a[j])
      temp[k++]=a[i++];
    else
      temp[k++]=a[j++];
  while(i<n/2)
    temp[k++]=a[i++];
  while(j<n)
    temp[k++]=a[j++];
  for(i=0;i<n;i++)
    a[i]=temp[i];
}
