#include<stdio.h>
#include<math.h>
int main(){
	int input;
	scanf("%d",&input);
	if (input<0){
	printf("-");
	}
	input=abs(input);
	do{
	printf("%d",input%10);
		input/=10;
	}while(input);
	return 0;
}