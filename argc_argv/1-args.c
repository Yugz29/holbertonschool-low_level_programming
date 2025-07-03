#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: return always 0
 **/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
