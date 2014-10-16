#include<stdio.h>
int main(){
  double a[] = {2.0, 3.0, 4.0};
  double b[] = {0.0, 3.0, 0.0};
  double c[] = {2.0, -2.0, 9.0, -1.0, 8.0, -7.0};
  double d[] = {2.0, 0.0, 0.0, 0.0, 0.0, 1.0};
  double e[] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
  double f[] = {2.0/3.0, 1.0/7.0, 9.0/13.0};
double g[]={5,666,77,4,3,2};
double h[]={7,-32,-5,-22,-23,-95,-2345,-123};
double i[]={3,2,3,0};
double j[]={3,2,3,-1};
double k[]={3,0.5,1.7,-6.8};
double l[]={2,0,0,7};
  polyPrint (a, sizeof(a)/sizeof(a[0]));
  polyPrint (b, sizeof(b)/sizeof(b[0]));
  polyPrint (c, sizeof(c)/sizeof(c[0]));
  polyPrint (d, sizeof(d)/sizeof(d[0]));
  polyPrint (e, sizeof(e)/sizeof(e[0]));
  polyPrint (f, sizeof(f)/sizeof(f[0]));
  polyPrint (g, sizeof(g)/sizeof(g[0]));
  polyPrint (h, sizeof(h)/sizeof(h[0]));
  polyPrint (i, sizeof(i)/sizeof(i[0]));
  polyPrint (j, sizeof(j)/sizeof(j[0]));
  polyPrint (k, sizeof(k)/sizeof(k[0]));
  polyPrint (l, sizeof(l)/sizeof(l[0]));

  return 0;
}
