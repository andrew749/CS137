#include<stdlib.h>
#include<stdio.h>
int compare(const void * a, const void * b){
return (*(int*)a-*(int*)b);
}
int main(){
int test[]={4,5,6,2,6,8,7353,3,65,365,36,5,346,53,653,6,543,6534,6,543};
qsort(test,sizeof(test)/sizeof(test[0]),sizeof(int), compare);
int i;
for(i=sizeof(test)/sizeof(int)-1;i>0;i--)
{
printf("%d ",test[i]);
}
return 0;
}
