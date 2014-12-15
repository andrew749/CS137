#include<stdlib.h>

int compare(const void *a, const void *b)
{
return (*(int *)a-*(int *)b);
}
int main(){

int a[]={9,8,7,6,56,4,34321,432,2,15,1};
qsort(a,11,sizeof(int),compare);
int i;
for(i=0;i<11;i++)
  printf("%d\n", a[i]);
}
