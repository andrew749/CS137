//qsort library function for sorting
//
#include<stdio.h>
void qsort(void *base,size_t n, size_t size, int (*compare)(const void (*a), const void (* b));
		//function compares pointser to two elmeents returns <0 0 or >0
int compare(const void *a, const void *b){

int *p=(int *)a;
int *q=(int *)b;
if(*p<*q)return -1;
if(*p>*q)return 1;
return 0;
}
void sort(int a[], int n){
qsort(a,n,sizeof(int),compare);

}
