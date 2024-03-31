#include <stdio.h>

/**
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of the two integers
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a = 10;
    int b = 20;
    int result;

    result = add(a, b);
    printf("Result: %d\n", result);
    return (0);
}

