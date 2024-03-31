#include <stdio.h>

/**
 * mod - Computes the remainder of the division of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The remainder of the division of a by b
 */
int mod(int a, int b)
{
    if (b != 0)
        return (a % b);
    else
    {
        fprintf(stderr, "Error: Division by zero\n");
        return (0);
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a = 10;
    int b = 3;
    int result;

    result = mod(a, b);
    printf("Result: %d\n", result);
    return (0);
}

