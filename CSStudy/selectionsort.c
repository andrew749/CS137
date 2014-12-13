#include<stdio.h>
int main(){

int a[]={12,3421,3,2,6,65,56,5,53,56,34,436};
sort(a,sizeof(a)/sizeof(int));
int i;
for (i=0;i<sizeof(a)/sizeof(int);i++)
  printf("%d\n", a[i]);
}
void sort(int *a, int n){
  int i;
  int min=0;
  int sortedindex=0;
  while(sortedindex<n){
    min=sortedindex;
    for(i=sortedindex;i<n;i++){
      if(a[i]<a[min]){
        min=i;
        printf("new minimum %d\n",a[min]);
      }

    }
    printf("found smallest%d with sortedindex %d\n",a[min],sortedindex);
    int temp=a[sortedindex];
    a[sortedindex]=a[min];
    a[min]=temp;
    sortedindex++;
  }
}
