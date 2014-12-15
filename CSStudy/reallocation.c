#include<stdio.h>
#include<stdlib.h>
int main(){
  int i;
  int *originalarray=(int *)calloc(10,sizeof(int));


  printArray  (originalarray,10);
  printf("\n\n\n\n");
  originalarray=(int*) realloc(originalarray,sizeof(int)*11);



  originalarray[10]=1;
  printArray(originalarray,11);
}
void printArray(int *array,int n){
  int i=0;
  for(i=0;i<n;i++)
    printf("%d\n",array[i]);

}

