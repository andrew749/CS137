#include "vector.h"
#include<stdio.h>
#include <stdlib.h>
struct vector *createVector(){

  struct vector *list=(struct vector *)malloc(sizeof(struct vector));
  int *elements=(int *)calloc(1,sizeof(int));
  list->elements=elements;
  list->size=1;
  list->length=0;
  return list;
}

void addElement(struct vector *list, int value)
{
  if(list==(struct vector *)0)
    return;
  if(list->length==list->size){
    list->elements=(int *)realloc(list->elements,sizeof(int)*list->size*2);

    list->size*=2;
  }
  list->elements[list->length]=value;
  list->length++;



}


void deleteVector(struct vector *list){
  free(list->elements);
  free(list);


}
int getElement(struct vector *list, int index){
  if(index<=list->length)
    return list->elements[index];

}
void setElement(struct vector *list, int index, int value){
  while(list->length<index)
    addElement(list, 0);
  list->elements[index]=value;
}
int main()
{
  struct vector *test=createVector();

  setElement(test, 1000000,1);
  printf ("%d",getElement(test, 1000000));


}
