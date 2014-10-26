#include<math.h>
#include"fraction.h"
#include<assert.h>
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
	if(abs(numerator)==0 &&denominator!=0){
		printf("0\n");return;}
	if(denominator!=0){
		int lt = lowestTerm(abs(numerator), abs(denominator));
		if ((numerator*denominator)<0) {
			printf("-");
		}
		numerator=abs(numerator);
		denominator=abs(denominator);

		int a=gcd(numerator,denominator);
		numerator/= a;
		denominator/=a;
		printmixedFraction(numerator, denominator);}else{
			printf("Divide by zero!\n");
		}
}
void printmixedFraction(int numerator, int denominator) {

	int whole = numerator / denominator;
	int fraction = numerator % denominator;


	if (whole >= 1) {
		if(fraction==0){
			printf("%d\n", whole);
		}else{
			printf("%d %d/%d\n", whole, fraction, denominator);
		}
	} else {
		printf("%d/%d\n", fraction, denominator);
	}
}

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
	if(a==0||b==0)
		return 0;
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
	struct fraction f={0,0};

	//reduces to lowest terms
	a=fractionCreate(a.numerator, a.denominator);
	b=fractionCreate(b.numerator, b.denominator);
	//finds lowest common multiple

	int c= lcm(a.denominator,b.denominator);
	if(abs(b.denominator)>0&&abs(a.denominator)>0){
		a.numerator=(c/a.denominator)*a.numerator;

		b.numerator=(c/b.denominator)*b.numerator;
}	else return f;

	f.numerator=a.numerator+b.numerator;
	f.denominator=c;
	f=fractionCreate(f.numerator,f.denominator);

	return f;
}
//subtracts two fractions
struct fraction fractionSubtract (struct fraction a, struct fraction b){
	struct fraction f={0,0};

	//reduces to lowest terms
	a=fractionCreate(a.numerator, a.denominator);
	b=fractionCreate(b.numerator, b.denominator);
	//finds lowest common multiple
	int c= lcm(a.denominator,b.denominator);
	a.numerator=(c/a.denominator)*a.numerator;
	if(abs(b.denominator)>0&&abs(a.denominator)>0)
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
	struct fraction f={0,1};
	int c,d;
	f.numerator=a.numerator*b.denominator;
	f.denominator=a.denominator*b.numerator;
	f=fractionCreate(f.numerator,f.denominator);
	return f;
}
void fractionPrint (struct fraction f){
	//prints the fraction obatined
	f=fractionCreate(f.numerator,f.denominator);
	print(f.numerator,f.denominator);
}
