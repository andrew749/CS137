#include<stdio.h>
void printNum(int number);
int main(){
	int a;
	scanf("%d",&a);
	printNum(a);
	return 0;
}
void printNum(int number){
	int x;
	scanf("%d",&x);
	if(x!=0)
	printNum(x);
	else printf("0\n");
	printf("%d\n",number);
}