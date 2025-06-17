#include <stdio.h>

/**
 * main- It prints the size of various types
 *
 * Return: Always return 0
 *
 **/

int main(void)
{
	printf("Size of char: %lu bytes\n", sizeof(char));
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of long int: %lu bytes\n", sizeof(long));
	printf("Size of long long int: %lu bytes\n", sizeof(long double));
	printf("Size of float: %lu bytes\n", sizeof(float));
	return (0);
}
