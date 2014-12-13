#include<stdio.h>
int main(){
  int h[]={1,1,1};
  printf("%d\n",horner(10,h,3));

}
int horner(int x,int *a,int n){
  int i;
  int sum=0;
  for (i=n-1;i>=0;--i)
  sum=sum*x+a[i];
  return sum;
}

