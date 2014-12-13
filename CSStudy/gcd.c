#include<stdio.h>
int main(){
  int i,j;
  scanf("%d %d",&i,&j);
  printf("%d",gcd(i,j));

}
int gcd(int n1, int n2){
  if(n2==0)
  return n1;
  int temp;
  temp=n2;
  n2=n1%n2;
  n1=temp;
  gcd(n1,n2);
}
