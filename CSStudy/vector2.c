#include<stdio.h>
#include<stdlib.h>
int main()
{



}
struct vector{
int *a;
int size;
int length;

};
struct vector *vectorCreate(){
struct vector *v=(struct vector *)malloc(sizeof(struct vector));
v->a=(int *)calloc(1,sizeof(int));
v->size=1;
v->length=0;

}
void vectorGet(struct vector *list,int index){
return list->a[index];

}
void vectorDelete(struct vector *list){
free(list->a);
free(list);

}
void vectorSet(struct vector *l,int index,int value){
if(index>=l->size)
  while()


}
