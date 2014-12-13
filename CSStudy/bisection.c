#include<stdio.h>
double f(double x){
  return x*x*x+2*x-10;
}
double bisection(double  a, double b, int iterations){
  if(f(a)>f(b)){
    double temp=a;
    a=b;
    b=temp;
  }
  int i;
  double midpoint;
  for(i=0;i<iterations;i++){
    midpoint=(a+b)/2;
    if(f(midpoint)>0)b=midpoint;
    if(f(midpoint)<0)a=midpoint;
  }
  return midpoint;
}


int main(){


printf("%g\n",bisection(-100,100,100));
}

