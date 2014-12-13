#include<stdio.h>
int search(int a[], int n, int value){

	int l=0;h=n-1;
	while(h>=l){
		int m=l+(h-l)/2;
		if(a[m]==value)return m;
		if(a[m]>value)
			h=m-1;
		else
			e=m+1;

	}
	return -1;


}
int main(void){
int i,a[]={-10,-7,0,2,11,14,14,38};
for(i=0;i<7;i++)
	printf("%d\n", search(a,7,a[i]);
printf("%d\n",search(a,7,-100));
}
//time complexity 
//
//
//suppose n=2^k-1
//1,000,000 
