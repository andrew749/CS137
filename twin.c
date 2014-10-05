#include<stdio.h>
int isTwin( int number){
	if(number<3){
		return 0;
	}
	if(isPrime(number)&&(isPrime(number-2)||isPrime(number+2)))
	{
		return 1;
	}
	else return 0;
	
}
int isPrime( int number){
	number=abs(number);
	int x=2;
	while(x<number){

		if(number%x==0){
			//number is not prime
			return 0;
		}
		x++;
	}
	return 1;
}
// int main(){
// int number;
// scanf("%d",&number);
// printf("%d\n",isTwin(number));
// }	
