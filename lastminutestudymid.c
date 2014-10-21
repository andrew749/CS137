#include<stdio.h>
#include<math.h>
void convertTobase(int, int);
int compare(const void*, const void*);
int main(){
convertTobase(10,2);
int array[]={1,3,54,5,4,3,34,4,66,43,5,42,542,5,42,54325,425,42,5,2};
qsort(array, sizeof(array)/sizeof(int), sizeof(int),compare);
int i;
for ( i =0;i<sizeof(array)/sizeof(int);i++){
  printf("%d\n", array[i]);
}
int co[]={1,2,3};
printf("%d",horner(co, 3,2));

}
void convertTobase(int number, int base){
int rem, a;
a=number/base;
rem=number%base;
if(a!=0)
  convertTobase(a,base);
printf("%d\n", rem);

}
int compare(const void *a, const void *b){

  return *(int*)a-*(int*)b;
}
int horner(int a[], int n, int x){
  int i;
  double sum=0.0;
  for (i=0;i<n;i++){
    sum=sum*x +a[i];
  }
  return sum;

}
int gcd(int a,int b){
  int temp=0;
  while(b!=0){
    temp=b;
    b=a%b;
    a=temp;
  }

}
int isPrime(int number){
  int i=0;
  while(number/i>i)
    if(number%1)
      return 0;
}
