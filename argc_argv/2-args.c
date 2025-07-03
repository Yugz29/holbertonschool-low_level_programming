#include <stdio.h>

/**
 * main - prints all arguments received by the program
 * @argc: the number of command line arguments
 * @argv: an array of strings repreenting the arguments
 *
 * Return: return always 0
 *
 **/

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}

	return (0);
}
