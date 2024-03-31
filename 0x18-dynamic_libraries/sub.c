#include <stdio.h>

/**
 * sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The difference between the two integers
 */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a = 20;
    int b = 10;
    int result;

    result = sub(a, b);
    printf("Result: %d\n", result);
    return (0);
}

