#include "poly.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//creats an empty polynomial of size 0 with no terms
struct poly *polyCreate(){
  double *t=(double *)calloc(1,sizeof(double));
  struct poly *p=(struct poly *)malloc(sizeof(struct poly));
  p->terms=t;
  p->length=0;
  return p;
}
//deletes the structure
struct poly *polyDelete(struct poly *p){
  if(p){
  free (p->terms);
  free (p);
}
  return (struct poly *)0;
}

struct poly *polySetCoefficient (struct poly *p, int i, double value){
  if(!p)
    return (struct poly *)0;
  if(p->length<i){
    p->terms=(double *)realloc((void *)p->terms,sizeof(double)*i);
  }
  for (;p->length<=i;p->length++){
    p->terms[p->length]=0;
  }
  p->terms[i]=value;
  return p;
}


//return the coefficient a point in the array
double polyGetCoefficient (struct poly *p, int i){
  if(!p)
    return 0;
  if(i<=p->length)
  return p->terms[i];
  else return 0;
}


//returns the degree of the polynomial
int polyDegree (struct poly *p){
if(!p)
  return 0;
  return p->length-1;

}


//prints the polynomial
void polyPrint (struct poly *p){

  //use poly print function from previous assignment
  polyPrint2(p->terms,p->length);
}


struct poly *polyCopy (struct poly *p){
  if(!p)
    return (struct poly *)0;
  int i;
  double *t=calloc(p->length, sizeof(double));
  struct poly *p2=(struct poly *)malloc((sizeof (struct poly)*p->length));
p2->terms=t;
  for (i=0;i<p->length;i++){
    p2->terms[i]=p->terms[i];
  }
  p2->length=p->length;
  return p2;

}
//adds the two polynomials
struct poly *polyAdd (struct poly *p0, struct poly *p1){
  if(!p0||!p1)
    return (struct poly *)0;
  int highestdegree=0;
  int lowestdegree=0;
  int state=0;
  //state of 0 is the first is larger than the smaller
  if(p0->length>p1->length){
    highestdegree=p0->length;
    lowestdegree=p1->length;
  }
  else{
    highestdegree=p1->length;
    lowestdegree=p0->length;
    state=1;
  }

  double *t=(double *)calloc(highestdegree,sizeof(double));
  struct poly *sum=(struct poly *)malloc(sizeof(struct poly));
  sum->terms=t;
  int i;
  for(i=0;i<highestdegree;i++){
    if(i<=lowestdegree)
      sum->terms[i]=p0->terms[i]+p1->terms[i];
    else if(i>lowestdegree){
        if(state)
          sum->terms[i]=p0->terms[i];
        else sum->terms[i]=p1->terms[i];

      }
  }
  sum->length=highestdegree;
  return sum;
}
struct poly *polyMultiply (struct poly *p0, struct poly *p1){
  if(!p0||!p1)
    return (struct poly *)0;
  int highestdegree=0;
  int lowestdegree=0;
  int state=0;
  //state of 0 is the first is larger than the smaller
  if(p0->length>p1->length){
    highestdegree=p0->length;
    lowestdegree=p1->length;
  }
  else{
    highestdegree=p1->length;
    lowestdegree=p0->length;
    state=1;
  }
  double *t=(double *)calloc(highestdegree+lowestdegree,sizeof(double));
  struct poly *temp=(struct poly *)malloc(sizeof(struct poly));
  temp->terms=t;
  struct poly *a,*b;
  if(state){
    a=p0;
    b=p1;
  }
  else{
    a=p1;
    b=p0;
  }

  int i,j;
  //iterates over the terms of the first array
  for(i=0;i<highestdegree;i++){
    //multiplies second array
    for(j=0;j<lowestdegree;j++){
      if(!temp->terms[i+j])
        temp->terms[i+j]=a->terms[i]*b->terms[j];
      else{
        temp->terms[i+j]+=a->terms[i]*b->terms[j];

      }
    }

  }
  temp->length=highestdegree+lowestdegree;
  return temp;
}
//returns derivative of polynomial
struct poly *polyPrime (struct poly *p){
  if(!p)
    return (struct poly *)0;
  int i;
  double *t=(double *)calloc(p->length-1,sizeof(double));
  struct poly *derivative=(struct poly *)malloc(sizeof( struct poly)*p->length-1);
  derivative->terms=t;
  for (i=1;i<p->length;i++){
    derivative->terms[i-1]=i*p->terms[i];

  }
  derivative->length=p->length-1;
  return derivative;
}
//TODO implement
double polyEval (struct poly *p, double x){

  return horner(p->terms, p->length,x);
}
void polyPrint2(double a[], int n) {
  int i;
  int first=1;
  //adjust n for actual integer value
  n--;
  //first checks to make sure array is not empty
  if (checkifempty(a, n)) {

    for (i = n; i >= 0; i--) {
      //if the value is 0 or 1, dont print it
      if (a[i] != 1 && fabs(a[i]) >= 0) {
        // if the value is greater than 0 than print it
      if (a[i] < 0 && i==n && first) {
        printf("-");
        first=0;
      }
        if (fabs(a[i]) > 0) {
          if(fabs(a[i])!=1)
          printf("%g", fabs(a[i]));
          if(i==0&&fabs(a[i])==1)
            printf("%g", fabs(a[i]));


        }



      }
      // if the number has a greater exponent than 1 and value isnt 0
      if (i > 1 && a[i] != 0) {
        printf("x^%d", i);
      } else if (i == 1) {
        //the cases if the value is x with exponent of 1
        if (a[i] == 0)
          continue;
        else {
          printf("x");
        }
      }
      //handle placing signs
      if (i > 0 &&a[i]!=0) {
        //if it isnt empty than print accorind to the next sign
          if (a[nextElement(a, i)] < 0)
            printf(" - ");
          else if (a[nextElement(a, i)] > 0)
            printf(" + ");
            else break;
          i = nextElement(a, i)+1;

      }

    }
  } else
    printf("0");
  //newline after creating polynomial
  printf("\n");
}
//returns 1 if not empty and 0 if empty
int checkifempty(double a[], int start) {
  int i;
  for (i = start - 1; i >= 0; i--) {
    if (a[i] != 0.0)
      return 1;
  }
  return 0;
}
int nextElement(double a[], int start) {
  int i;
  for (i = start - 1; i >= 0; i--) {
    if (a[i] != 0.0)
      return i;
  }
  return 0;
}

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
