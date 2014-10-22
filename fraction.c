#include<math.h>
#include"fraction.h"
#include<assert.h>
int gcd(int a, int b){
  int temp;
  while(b!=0){
    temp=b;
    b=a%b;
    a=temp;
  }
  return a;
}
int lcm(int a, int b){
  int g=gcd (a,b);
  return (g*(a/g)*(b/g));
}
struct fraction fractionCreate (int numerator, int denominator){
  int a,b,g;
  struct fraction f;
  //assert(abs(numerator)>0&&abs(denominator)>0);
  if(denominator==0){
    f.numerator=numerator;
    f.denominator=denominator;
    return f;
  }
  g=gcd(numerator,denominator);
  a=numerator/g;
  b=denominator/g;
  f.numerator=a;
  f.denominator=b;
  return f;
}
//adds two fractions together
struct fraction fractionAdd (struct fraction a, struct fraction b){
  struct fraction f={0,1};

  //reduces to lowest terms
  a=fractionCreate(a.numerator, a.denominator);
  b=fractionCreate(b.numerator, b.denominator);
  //finds lowest common multiple
  int c= lcm(a.denominator,b.denominator);
  a.numerator=(c/a.denominator)*a.numerator;
  if(abs(b.denominator)>0)
  b.numerator=(c/b.denominator)*b.numerator;
else return f;
  a.denominator=c;
  b.denominator=c;

  f.numerator=a.numerator+b.numerator;
  f.denominator=c;
  return f;
}
struct fraction fractionSubtract (struct fraction a, struct fraction b){
  struct fraction f={0,0};
  return f;
  }
struct fraction fractionMultiply (struct fraction a, struct fraction b){
  struct fraction f={0,0};
  return f;
  }
struct fraction fractionDivide (struct fraction a, struct fraction b){
  struct fraction f={0,0};
  return f;
  }
void fractionPrint (struct fraction f){
  //prints the fraction obatined
  printf("%d/%d",f.numerator,f.denominator);
}
