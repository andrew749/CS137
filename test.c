#include<stdlib.h>
int comp(const void *i, const void *j)
  {
    return *(int *)i - *(int *)j;
  }
int main(void){
int a[]={1,2,5,6,3,4};
qsort(a,6,sizeof(int),comp);
for(int b=0;b<6;b++){
printf("%d",a[b]);
}
return 0;
}

