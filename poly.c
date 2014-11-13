#include "poly.h"
#include "poly2.h"
#include <stdio.h>
#include <stdlib.h>
#include "horner.h"
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
  free (p->terms);
  free (p);
  return (struct poly *)0;
}

struct poly *polySetCoefficient (struct poly *p, int i, double value){
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
  if(i<=p->length)
  return p->terms[i];
  else return 0;
}


//returns the degree of the polynomial
int polyDegree (struct poly *p){

  return p->length-1;

}


//prints the polynomial
void polyPrint (struct poly *p){
  //use poly print function from previous assignment
  polyPrint2(p->terms,p->length);
}


struct poly *polyCopy (struct poly *p){
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

}
//returns derivative of polynomial
struct poly *polyPrime (struct poly *p){
  int i;
  double *t=(double *)calloc(p->length-1,sizeof(double));
  struct poly *derivative=(struct poly *)malloc(sizeof( struct poly)*p->length-1);
  derivative->terms=t;
  for (i=1;i<p->length;i++){
    derivative->terms[i-1]=i*p->terms[i];

  }
  derivative->length=p->lengthb;
  return derivative;
}
//TODO implement
double polyEval (struct poly *p, double x){

  return horner(p->terms, p->length,x);
}
