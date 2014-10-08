#include<stdio.h>
#include<math.h>
void factor(int n) {
	//prints initial statement which is always true
	int a = 0;
	printf("%d = ", n);
	int done=0;
	//if the number is prime then skip everything
	if(!isPrime(n)){

	// Print the number of 2s that divide n
	while (n % 2 == 0) {
		printf("%d", 2);
		n /= 2;
		if (n == 1) {
			//number has been fully divided using two's
			break;
		} else if (isPrime(n)) {
			//if the number if prime, then twos fully divided it
			printf("*%d", n);
			a = 1;
			break;
		} else
			printf("*");
	}
	// n must be odd at this point.  So we can skip tne element (Note i = i +2)
	for (int i = 3; i < n; i += 2) {
		//if the number is prime
		if (isPrime(n))
			break;
		// While i divides n, print i and divide n
		while (n % i == 0) {
			printf("%d", i);
			n = n / i;
			//still has more operations possible
			if (n % i != 1 && !isPrime(n))
				printf("*");
			else if(n==i){
				printf("*" );
			}
		}

	}

	// This condition is to handle the case when n is a prime number
	// greater than 2
	if (n > 2 && a != 1)
		printf("*%d", n);
	printf("\n");
	}else printf("%d\n",n);
}
int isPrime(int number){
	if(number < 3|| number%2==0)return 0;
	else{
		int i=3;
		while(i*i<=number){
			if(i>46340) return 1;
			if(number%i ==0) return 0;
			i+=2;
		}
		
		return 1;
	}
}