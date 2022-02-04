#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void) { 
	char charSize;
	int intSize;
	long int longintSize;
	long long int longlongintSize;
	float floatSize;

	printf("Size of char: %lu bytes\n", sizeof(charSize));
	printf("Size of int: %lu bytes\n", sizeof(intSize));
	printf("Size of long int: %lu bytes\n", sizeof(longintSize));
	printf("Size of long long int: %lu byte\n", sizeof(longlongintSize));
	printf("Size of float: %lu byte\n", sizeof(floatSize));
	
	return 0;
}
