#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Executes a function given as a parameter on a name
 * @name: The name to be passed to the function
 * @f: A pointer to a function that takes a string and returns nothing
 *
 * Return: Nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
