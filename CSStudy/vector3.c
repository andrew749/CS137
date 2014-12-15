#include<stdio.h>
#include<stdlib.h>
#include"vector3.h"
struct vector *createVector(){
  int *array=(int *)calloc(1,sizeof(int));
  struct vector *a=(struct vector *)malloc(sizeof(struct vector));
  a->values=array;
  a->size=1;
  a->length=0;


}
int getValue(struct vector *a, int index)
{
  if(index<a->length)
    return a->values[index];
  else return -1;



}
void  deleteVector(struct vector *a)
{
  free(a->values);
  free (a);


}
void addValue(struct vector *a, int value){
  if(a->size==a->length)
  {
    a->values=(int *)realloc(a->values, sizeof(int)*a->size*2);
    a->size*=2;
  }
  a->values[a->length]=value;
  a->length++;




}
void setValue(struct vector *a,int value, int index) {
  //grow vector
  if(index>=a->size){
    while(index>=a->size)
    {
      addValue(a,0);
    }
    a->length=index+1;
  }
  printf("grew vector to %d with length%d\n",a->size,a->length );
  a->values[index]=value;


}
