#include<stdio.h>
#include"vector.h"
int main(){

  struct vector *vec=createVector();
  setValue(vec,1,1000000);
  int i;
  for(i=0;i<vec->length;i++){

    printf("%d\n",getValue(vec,i));

  }

}
