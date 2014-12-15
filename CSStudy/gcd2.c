#include<stdio.h>
int main(){

printf("%d\n",gcd(10,20) );
}
int gcd(int a,int b)
{

int temp;
  if(b<a)
  {
  temp=b;
  b=a;
  a=temp;

  }
while(b>0)
{
temp=b;
b=a%b;
a=temp;

}
return a;

}
