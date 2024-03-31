#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdlib.h>

/**
 * rand - Override for the rand() function
 *
 * Return: Always returns 9
 */
int rand(void)
{
    return 9; // Always return 9 for rand()
}

