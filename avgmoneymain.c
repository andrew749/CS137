#include<stdio.h>
int main(void){
double a[5] = {100.00, 250.00, 320.00, 120.00, 1500.00};
  double b[3] = {8.00, 1.00, 1.00};
  double c[3] = {8.00, 1.50, 1.50};
  double d[10]={123.45,0,0,0,0,0,0,0,0,0};
  double e[3]={0.3,0.3,0.3};

  printAverageAmount(a, 5);
  printAverageAmount(b, 3);
  printAverageAmount(c, 3);
  printAverageAmount(d, 10);
printAverageAmount(e, 3);

return 0;
}
