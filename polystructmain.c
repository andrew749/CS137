#include <stdio.h>
#include "poly.h"

int main (void)
{
  struct poly *p0 = polySetCoefficient (polySetCoefficient (polySetCoefficient (
                                      polyCreate() , 0, 4.0), 1, -1.0), 10, 2.0);
  struct poly *p1 = polyCopy (p0);
  struct poly *p2, *p3, *p4;

  printf ("%g\n", polyGetCoefficient (p0, 10));
  printf ("%g\n", polyGetCoefficient (p0, 100));
  printf ("%d\n", polyDegree (p0));
  polyPrint (p0);
  polyPrint (p1);
  polySetCoefficient (p1, 2, 1.0/2.0);
  polyPrint (p1);
  p2 = polyAdd (p0, p1);
  polyPrint (p2);
  p3 = polyMultiply (p0, p1);
  polyPrint (p3);
  p4 = polyPrime (p0);
  polyPrint (p4);
  printf ("%g\n", polyEval (p0, 0.0));
  printf ("%g\n", polyEval (p0, 1.0));
  printf ("%g\n", polyEval (p0, 2.0));
  p0 = polyDelete (p0);
  p1 = polyDelete (p1);
  p2 = polyDelete (p2);
  p3 = polyDelete (p3);
  p4 = polyDelete (p4);
  struct poly *p5=polySetCoefficient (polyCreate() , 1000000, 1.0);
  struct poly *p7=polySetCoefficient (polyCreate() , 1000000, 1.0);
  polyPrint(polyAdd(p5,p7));
  struct poly *p6;
  p6=polySetCoefficient(polyCreate(),0,1);
  struct poly *p8 = polyCreate();
   int i=0;

   for(i=0;i<1000000;i++){
     p8=polyAdd(p6,p8);
   }
   polyPrint(p8);

  return 0;
}
