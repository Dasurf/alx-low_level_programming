#include <stdlib.h>
#include <stdio.h>

/**
 * main - This is a program that prints its own name
 *
 * @argc: This holds the number of arguments passed
 * @argv: This is an array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char* argv[])
{
    (void)argc;
    printf("The name of the program is %s\n", argv[0]);

    return (0);
}