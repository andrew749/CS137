#include<stdlib.h>
#include<stdio.h>
int main(){
  int a[10];
printf("%d",sizeof(a));
}
int gcd(int a, int b){
int m=a,n=b,c=0;
while(m%n!=0){
  c=m%n;
  m=n;
  n=c;
}
return n;
}
