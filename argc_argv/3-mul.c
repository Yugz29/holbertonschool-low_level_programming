#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: return 1 bad, return 0 good
 **/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (argc == 3)
	{
		int num = atoi(argv[1]);
		int mun = atoi(argv[2]);

		int result = num * mun;

		printf("%d\n", result);
	}
	return (0);
}
