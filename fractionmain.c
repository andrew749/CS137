#include <stdio.h>
#include "fraction.h"

int main (void)
{
  struct fraction a, b, c, d, r, bad;

  a = fractionCreate (5, 6);
  b = fractionCreate (8, 9);
  c = fractionCreate (56, 160);
  d = fractionCreate (35, 150);
  bad = fractionCreate (8, 0);
  struct fraction e=fractionCreate(31,0);

fractionPrint(e);
  r = fractionAdd (a, b);
  fractionPrint(r);
  r = fractionSubtract (c, d);
  fractionPrint(r);
  r = fractionMultiply (a, b);
  fractionPrint(r);
  r = fractionDivide (c, d);
  fractionPrint(r);

  r = fractionAdd (a, bad);
  fractionPrint(r);
  r = fractionAdd (b, r);
  fractionPrint(r);
  e=fractionAdd(b,fractionAdd(a,bad));
fractionPrint(e);
  return 0;
}
