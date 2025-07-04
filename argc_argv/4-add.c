#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: return 1 bad, return 0 good
 **/

int main(int argc, char *argv[])
{
	int i;
	int j;
	int toto;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

		}
		toto += atoi(argv[i]);
	}
	printf("%d\n", toto);
	return (0);
}
