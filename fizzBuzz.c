/*
 * FizzBuzz test 
 */

#include <stdio.h>
#include <stdlib.h>

int FizzBuzz(int);

int FizzBuzz(int i) {
	if (!(i % 3)) printf("Fizz");
	if (!(i % 5)) printf("Buzz");
	return i%3 * i%5;
}

int main(void) {
	int i=0;

	for (i=1; i<=100; i++) {
		if (FizzBuzz(i)) printf ("%d", i);
		printf ("\n");
	}
	return EXIT_SUCCESS;
}
