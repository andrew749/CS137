#include<stdio.h>
void printAverageAmount(double money[], int n){
  double sum=0;
  int i;
  for( i =0;i<n;i++){
    sum+=money[i];
  }

  int dollars=sum/n;
  int cents=(sum/n-dollars)*100;
  printf("Everyone gets %d dollar(s) and %d cent(s).\n",dollars,cents);
}
