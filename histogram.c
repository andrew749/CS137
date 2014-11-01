#include<stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
  return *(int*)a-*(int*)b;
}
int *histogram(const int *a, int n, int *m){
  int i;
  int *result=malloc(sizeof(int)*n);
  qsort(a,n,sizeof(int),compare);
  for(i=0;i<n;i++){
    result[i]=0;
  }

  int current;
  //sets the first element to the current value
  current=a[0];
  int g=0;
  for(i=0;i<=n;i++){

    //checks if the current element is positive or 0 and increments if it is
    if(current>=0){
      if(i!=0)
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
