#include<stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
  return *(int*)a-*(int*)b;
}
int *histogram(const int *a, int n, int *m){
  int i;
  int *result=malloc(sizeof(int)*n);
  qsort(a,n,sizeof(int),compare);

  int current;
  current=a[0];
  int g=0;
  for(i=0;i<=n;i++){
    if(current>=0){
      result[g]+=1;

    while(a[i]==current){
      result[g]+=1;
      i++;
    }
    g++;
    current=a[i];
  }else{ i++; current=a[i];}
  }
  *m=g;
  return result;
}
