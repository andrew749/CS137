#include<stdio.h>
int main(){
int i=0;
double x=4;
for(i=0;i<100000000;i++)
  x=-6/(x-5);
printf("%g\n",x );

}
