#include<stdio.h>
#include<stdlib.h>
int comp(const void *i, const void *j)
  {
    return *(int *)i - *(int *)j;
  }
int max(int array[], int n) {
	if (n <= 0)
		return 0;
	int largestValue = array[0];
	for (int i = 0; i < n; i++) {
		if (array[i] > largestValue)
			largestValue = array[i];
	}
	return largestValue;
}
int countValue(int array[], int n, int value) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] == value)
			count++;
	}
	return count;
}
void absolute(int a[], int n) {
	int array[n];
	memcpy(array,a,sizeof(array));
	for (int i = 0; i < n; i++) {
		if (array[i] < 0)
			array[i] *= -1;
	}
}
int isSorted(int array[], int n) {
	int prevvalue = array[0];
	if (n < 0)
		return 0;
	if(n==0)
		return 1;
	for (int i = 0; i < n; i++) {
		if (array[i] >= prevvalue)
			prevvalue = array[i];
		else
			return 0;
	}
	return 1;
}

// still need to permutation
int isPermutation(int a[], int n) {
	int array[n];
	memcpy(array,a,sizeof(array));
	if (n == 0)
		return 1;
	qsort(array,n,sizeof(int),comp);
	for (int i=0;i<n;i++){
		if(array[i]==array[i-1]||array[i]==array[i+1])
			return 0;
	}
	return 1;

}


