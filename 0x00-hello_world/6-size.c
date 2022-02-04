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

	printf("Size of a char: %lu byte(s)\n", sizeof(charSize));
	printf("Size of an int: %lu byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longintSize));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongintSize));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatSize));
	
	return (0);
}
