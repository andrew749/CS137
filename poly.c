#include<stdio.h>
#include<math.h>
void polyPrint(double a[], int n) {
	int i;
	//adjust n for actual integer values
	n--;
	//first checks to make sure array is not empty
	if (checkifempty(a, n)) {

		for (i = n; i >= 0; i--) {
			//if the value is 0 dont print it and the value is not 1
			if (a[i] != 1 && abs(a[i]) >= 0) {
				// if the value is greater than 0 than print it
				if (a[i] > 0)
					printf("%g", a[i]);
				//if the value is less than 0 and its the first iteration
				else if (a[i] < 0 && i == n) {
					if (a[i] == -1)
						printf("-");
					else
						printf("%g", a[i]);
				}
			}
			// if the number has a greater exponent than 1 and value isnt 0
			if (i > 1 && a[i] != 0) {
				printf("x^%d", i);
			} else if (i == 1) {
				//the cases if the value is x with exponent of 1
				if (a[i] == 0)
					continue;
				else
					printf("x");
			}

			if (i > 0 && abs(a[i]) > 0 && abs(a[i - 1]) > 0
					&& checkifempty(a, i)) {
				if (a[i] < 0)
					printf(" - ");
				else if (a[i] > 0)
					printf(" + ");
			}

		}
	} else
		printf("0");
	//newline after creating polynomial
printf("\n");
}
//returns 1 if not empty and 0 if empty
int checkifempty(double a[], int start) {
	int i;
	for (i = start - 1; i >= 0; i--) {
		if (a[i] != 0.0)
			return 1;
	}
	return 0;
}
