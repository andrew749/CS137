#include <stdio.h>

double horner(double *coeffs, int s, double x)
{
  int i;
  double res = 0.0;

  for(i=s-1; i >= 0; i--)
  {
    res = res * x + coeffs[i];
  }
  return res;
}
