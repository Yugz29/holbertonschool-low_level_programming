#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Entry point, performs a simple operation based on arguments
* @argc: Number of arguments passed to the program
* @argv: Array of arguments passed (num1, operator, num2)
*
* Return: 0 if successful, exits with code on error
**/

int main(int argc, char *argv[])
{
    int a, b, result;
    int (*operation)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    if (get_op_func(argv[2]) == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
        atoi(argv[3]) == 0)
    {
        printf("Error\n");
        exit(100);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);
    operation = get_op_func(argv[2]);
    result = operation(a, b);

    printf("%d\n", result);

    return (0);
}
