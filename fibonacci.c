#include<stdio.h>
int main(){


	printf("%d\n",f(38));//~1sec
	printf("%d\n",f(47));//~9sec
	printf("%d\n",f(45));//~37sec

}
int f(int n){
	if (n==0)return 0;
	else if (n==1)return 1;
	else return f(n-1)+f(n-2);

}

