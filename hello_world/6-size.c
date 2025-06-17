#include <stdio.h>

/**
 * main- It prints the size of various types
 *
 * Return: Always return 0
 *
 **/

int main(void)
{
	printf("Size of a char: %lu bytes\n", sizeof(char));
	printf("Size of an int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long));
	printf("Size of a long long int: %lu bytes\n", sizeof(long double));
	printf("Size of a float: %lu bytes\n", sizeof(float));
	return (0);
}
