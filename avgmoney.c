#include<stdio.h>
int main(void){

return 0;
}
void printAverageAmount(double money[], int n){
  double sum=0;
  for(int i =0;i<n;i++){

    sum+=money[i];
  }

  int dollars=(int)sum/n;
  int cents=sum-dollars*100;
  printf("Everyone gets %g dollars and %g cent(s)",dollars,cents);
}
