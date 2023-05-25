#include "shell.h"

/**
 * _strlen - Print string length
 * @s: String to print
 *
 * Description: This function prints the length of a string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
return (len);
}

/**
 * _strdup - Copy a string
 * @str: String to copy
 *
 * Description: This function copies a string.
 *
 * Return: Pointer to newly allocated memory containing copied string
 */
char *_strdup(char *str)
{
char *p;
int i, s;
i = 0;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i++;
p = malloc(i *sizeof(*str) + 1);
if (p == NULL)
return (NULL);
for (s = 0; s < i; s++)
*(p + s) = *(str + s);
*(p + s) = '\0';
return (p);
}

/**
 * _strcmp - Compare two strings
 * @s1: First string
 * @s2: Second string
 *
 * Description: This function compares two strings using the first value.
 *
 * Return: Number depending on the result of the comparison
 */
int _strcmp(char *s1, char *s2)
{
int j;
for (j = 0; s1[j] != '\0' || s2[j] != '\0'; j++)
{
if (s1[j] != s2[j])
return (s1[j] - s2[j]);        }
return (0);
}

/**
 * _strncmp - Compare two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number to compare
 *
 * Description: This function compares two strings using the first value.
 *
 * Return: Number depending on the result of the comparison
 */
int _strncmp(char *s1, char *s2, int n)
{
int i;
if (s1 == NULL || s2 == NULL)
return (-1);
for (i = 0; (s1[i] != '\0' || s2[i] != '\0') && i < n; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);        }
return (0);
}

