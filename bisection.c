#include<math.h>
#include<stdio.h>
#include <assert.h>
void bisection(double a, double b, int iteration);
int main(void){
  bisection(1,2,20);
return 0;
}
double f(double a){
return (a*a*a+10*a*a+8*a-50);
}
void printvariables(double a, double b, double midpoint){
  printf("m=%g n=%g  midpoint=%g\n",a,b,midpoint);
  printf("f(m)=%g  f(n)=%g f(midpoint)=%g\n\n\n",f(a),f(b),f(midpoint));
}

void bisection(double a, double b, int iteration){
double m,n;
double midpoint;
if (f(a)<0&&f(b)>0){
  m=a;
  n=b;
}
else if(f(b<0)&&f(a)>0){
  m=b;
  n=a;

}else{
  return;
}
//done setting variables now do bisection
int i;
for(i =0;i<iteration;i++){
  midpoint=(m+n)/2;
  printvariables(m,n,midpoint);
  if(f(midpoint)<0){
    m=midpoint;
  }
  else if(f(midpoint)>0){
    n=midpoint;

  }
  if(f(midpoint)==0){
  printf("%g\n", midpoint);
break;}}

}
