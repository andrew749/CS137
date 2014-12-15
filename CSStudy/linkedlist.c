#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"
struct list *createlist(){
  struct list *l=(struct list *)malloc(sizeof(struct list));
  l->length=0;
  struct listitem item={
    NULL,0
  };
  l->headelement=&item;
  return l;
}
void additem(int location,int  value,struct list *l){
  if(location>l->length-1)
    location=l->length+1;
  int i;
  struct listitem *n=l->headelement;
  for(i=0;i<location-1;i++)
    n=n->nextitem;
  struct listitem *item=(struct listitem *)malloc(sizeof(struct listitem));
  item->value=value;
  item->nextitem=n->nextitem;
  n->nextitem=item;
  l->length++;

}
int getitem(struct list *l,int index){
  if (index>l->length)
    return -1;
  int i;
  struct listitem *n=l->headelement;
  for (i=0;i<index;i++)
    n=n->nextitem;
  return n->value;

}
int main()
{
  struct list *l=createlist();
  additem(1,13,l);
  printf("%d\n",getitem(l,1));

}
