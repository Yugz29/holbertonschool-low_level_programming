#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Return: always 1
 *
 **/

int main(void)
{
	const char *msg = "and that piece of art is useful\" - "
		"Dora Korpar, 2015-10-19\n";

	write(2, msg, 59);
	return (1);
}
