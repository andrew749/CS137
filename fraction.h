struct fraction{
int numerator;
int denominator;
};
struct fraction fractionCreate (int numerator, int denominator);
struct fraction fractionAdd (struct fraction a, struct fraction b);
struct fraction fractionSubtract (struct fraction a, struct fraction b);
struct fraction fractionMultiply (struct fraction a, struct fraction b);
struct fraction fractionDivide (struct fraction a, struct fraction b);
void fractionPrint (struct fraction f);
int gcd(int a, int b);
int lcm(int a, int b);
