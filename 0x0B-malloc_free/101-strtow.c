#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words from
 *
 * Return: The number of words
 */
int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            count++;
        }

        str++;
    }

    return count;
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int num_words = count_words(str);
    char **words = malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    int i = 0;
    char *token = strtok(str, " ");
    while (token != NULL)
    {
        words[i] = strdup(token);
        if (words[i] == NULL)
        {
            for (int j = 0; j < i; j++)
                free(words[j]);
            free(words);
            return NULL;
        }

        i++;
        token = strtok(NULL, " ");
    }

    words[i] = NULL;

    return words;
}

