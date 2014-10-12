#include<stdio.h>
#include<math.h>
void factor(int, int);
int main(){
factor(10,10);
}
void factor(int n, int iteration){
  double y=n;
  int i;
  for (i=0;i<iteration;i++ ){
    y=1/(y-1);
    printf("%g\n",y);
  }
}
