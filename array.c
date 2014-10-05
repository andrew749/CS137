#include<stdio.h>
#include<stdlib.h>
int comp(const void *i, const void *j)
  {
    return *(int *)i - *(int *)j;
  }
int max(int a[], int n){
	if(n==0)
	return 0;
	
	int largestvalue=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>largestvalue)
			largestvalue=a[i];
	}
return largestvalue;
}
int countValue(int a[], int n,int value){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]==value)
			count++;
	}
	return count;
}
void absolute(int a[], int n){
for (int i = 0; i < n; ++i)
{
	if(a[i]<0)
		a[i]*=-1;
}
}
int isSorted(int a[], int n){
	int startingvalue=a[0];
	if(n==0)
		return 0;
	for (int i =0;i<n-1;i++){
		if(a[i]>a[i+1])
			return 0;

	}
	return 1;
}
int isPermutation(int a[],int n){
	int temp[n];
	if(n==0)
		return 1;

	memcpy(temp,a,sizeof(temp));
	qsort(temp, n, sizeof(int),comp);
	//check if array does not reach the 
	if(max(temp,n)<1)
		return 0;
	if(temp[0]>1)
		return 0;

	
	if(temp[0]<=1)
	for(int i=temp[0];i<=1;i++){

		if (countValue(temp,n,i)<1)
			return 0;
	}
	else if (temp[0]==1)
		for (int i = temp[0]; i < temp[n-1]; ++i)
		{
			if(countValue(temp,n,i)<1)
				return 0;
		}
	return 1;
}
