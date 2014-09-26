#include<stdio.h>
int main(void) {
	int a = 11150;
	int b = 10;
	int temp = 0;
	scanf("%d %d",&a,&b );
	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;

	}
	printf("%d", a);
	return 0;
}
