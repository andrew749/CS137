#include<stdio.h>

double f(double a)
{
return a*a*a-2*a-3;

}
double bisection(double (*g)(double),double a, double b,int iterations)
{
int i=0;
double midpoint;
while(i<iterations){
midpoint=(a+b)/2;
if(g(midpoint)<0)a=midpoint;
else if (g(midpoint)>0)b=midpoint;
else return midpoint;
i++;
}
return midpoint;




}
int main()
{
printf("%g",bisection(f,-100,100,10000));


}
