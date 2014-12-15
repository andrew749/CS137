#include<stdio.h>
int main(){
int counter=0;
int i;
int a[]={1,2,3,4,5,6,7,8,9};
int b[]={1,3,2,4,5,6,7,8,1};
for(i=0;i<sizeof(a)/sizeof(int);i++)
if(a[i]!=b[i])
  counter++;
printf("%d\n",counter);

}
