//tony hoare, 1962
#include<stdio.h>
int main(){
	int i, a[]={2,-10,14,42,11,-7,0,38,21,34,3,24,3,2143,4,14,3,24,3243,14,34,3};
	sort (a,sizeof(a)/sizeof(int));
	for(i=0;i<sizeof(a)/sizeof(int);i++)
		printf("%d\n",a[i]);
	return 0;
}

void sort(int a[], int n){
	int i,m,temp;
	if(n<=1||a==(int*)0){
		return;

	}
	m=0;
	//partitioning stuff, weird
	for(i=1;i<n;i++)
		if(a[i]<a[0]){
			m++;
			temp=a[m];
			a[m]=a[i];
			a[i]=temp;
		}
	temp=a[m];
	a[m]=a[0];
	a[0]=temp;
	sort(a,m);
	sort(a+(m+1),n-(m+1));


}
