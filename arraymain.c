#include <stdio.h>

int max (int array[], int n);
int countValue (int array[], int n, int value);
void absolute (int array[], int n);
int isSorted (int array[], int n);
int isPermutation (int array[], int n);

int main (void)
{
  int i;
  int a[5] = {3,4,2,5,1}; // replace with tests you are failing
  int b[5]={-3,-4,-2,-1,-5};
  int c[5]={-1,-4,-2,-5,0};
  int d[5]={-3,-4,1,-2,6};
  int e[5]={3,4,5,6,7};
  int f[5]={-50,-40,-30,-20,-10};
  int g[9]={-333,-5,-3,-4,-10,-77,-22,-2123,-36};
  int h[4]={1,0,-1};
  testArray(a,5,0);
  testArray(b,5,-3);
    testArray(c,5,1);
  testArray(d,5,-2);
  testArray(e,5,1);
  testArray(f,5,0);
  testArray(g,9,-2123);
  testArray(h,4,1);
  return 0;
}
void testArray(int a[],int n,int count){
 //printf("max(a, 5) = %d\n", max(a, 5));
  //printf("countValue (a, %d, %d) = %d\n",n, count,countValue (a, 5,count ));
 // printf("isSorted (a, 5) = %d\n", isSorted (a, 5));
   printf("isPermutation (a, 5) = %d\n", isPermutation (a, 5));
   // absolute (a, 5);
  //  int i;
   //for (i = 0; i < 5; i++)
    // printf ("c[%d] = %d\n", i, a[i]);
  return 0;
}