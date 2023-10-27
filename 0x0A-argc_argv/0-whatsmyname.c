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

int main(int __attribute__((unused)) argc, char* argv[])
{
    printf("%s\n", argv[0]);

    return (0);
}