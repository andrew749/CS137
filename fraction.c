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
//subtracts two fractions
struct fraction fractionSubtract (struct fraction a, struct fraction b){
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
  f.numerator=a.numerator-b.numerator;
  f.denominator=c;
  //reduces the fraction to simplest terms
  f=fractionCreate(f.numerator,f.denominator);

  return f;
  }
  //multiplies two fractions
struct fraction fractionMultiply (struct fraction a, struct fraction b){
  struct fraction f={0,0};
  int c,d;
  c=a.numerator*b.numerator;
  d=a.denominator*b.denominator;
  f=fractionCreate(c,d);
  return f;
  }
struct fraction fractionDivide (struct fraction a, struct fraction b){
  struct fraction f={0,0};
  return f;
  }
void fractionPrint (struct fraction f){
  //prints the fraction obatined
  f=fractionCreate(f.numerator,f.denominator);
  printf("%d/%d\n",f.numerator,f.denominator);
}
