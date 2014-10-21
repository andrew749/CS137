#include<stdio.h>
void doSomethign(double (*f)(double), double n){
printf("%g",f(n));
}
double a(double b){
return b*b;
}
int main(){
doSomethign(a,10);
return 0;
}
