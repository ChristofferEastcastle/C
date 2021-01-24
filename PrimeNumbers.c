#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime (int input) {
	for (int i = sqrt(input); i >= 2; i--) {
	  	if (input % i == 0)
        		return false;
        }
	return true;
}


int main () {

	printf("Write a number. You'll get all prime numbers between this and zero.\n");
	printf("Number: ");
	int input;
	scanf("%d", &input);
	
	for (int i = input; i >= 2; i--) {
		if (isPrime(i))
			printf("%d\n", i);
	}

	return 0;
}
