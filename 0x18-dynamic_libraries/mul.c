#include <stdio.h>

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The product of the two integers
 */
int mul(int a, int b)
{
    return (a * b);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a = 5;
    int b = 10;
    int result;

    result = mul(a, b);
    printf("Result: %d\n", result);
    return (0);
}

