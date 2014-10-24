#include <stdio.h>
void printmixedFraction(int numerator, int denominator);
int lowestTerm(int number1, int number2) {
  if (abs(number1) <= abs(number2)) {
    return number1;
  } else {
    return number2;
  }
}
void print(int n, int d) {
  int numerator=n;
  int denominator=d;
  int divisor = 1;
  int gooddivisor=1;
if(denominator!=0){
  int lt = lowestTerm(abs(numerator), abs(denominator));
  if ((numerator*denominator)<0) {
      printf("-");
    }
  numerator=abs(numerator);
  denominator=abs(denominator);

  while (divisor <= lt) {
    if (((numerator % divisor) == 0) && ((denominator % divisor) == 0)) {
      gooddivisor = divisor;
    }

    ++divisor;
  }

  numerator/= gooddivisor;
  denominator/=gooddivisor;
  printmixedFraction(numerator, denominator);}else{
printf("Divide by zero!");
}
}
void printmixedFraction(int numerator, int denominator) {

  int whole = numerator / denominator;
  int fraction = numerator % denominator;


  if (whole > 1) {
    if(fraction==0){
    printf("%d\n", whole);
    }else{
    printf("%d %d/%d\n", whole, fraction, denominator);
}
  } else {
    printf("%d/%d\n", fraction, denominator);
  }
}
