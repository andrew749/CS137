#include<stdio.h>
int lcm(int,int);
int main(){
printf("%d",lcm(6,8));
return 0;
}
int lcm(int a,int b){
  int i=1,j=1;
  while(1){
  if(i*a<j*b)
    i++;
  else if(i*a>j*b)
    j++;
  if(i*a==j*b)
      return i*a;
  }
}
