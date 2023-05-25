#include "shell.h"
/**
 * _atoi - this function converts a string to integer
 * @s: the string
 * Return: result
*/
int _atoi(char *s)
{
	int counter, sign;
	unsigned int number;

	sign = 1;
	counter = 0;
	number = 0;


	while ((s[counter] < '0' || s[counter] > '9') && (s[counter] != '\0'))
	{
		if (s[counter] == '-')
			sign *= -1;
		counter++;
	}
	while ((s[counter] >= '0') && (s[counter] <= '9'))
	{
		number = number * 10 + (s[counter] - '0');
		counter++;
	}
	return (number * sign);
}
/**
 * _isdigit - this function checks is digit
 * @s: the string to proccess
 * Return: return 1 if c is a digit and 0 in other cases.
*/
int _isdigit(char *s)
{
	int i;

	if (s == NULL)
		return (-1);

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] < 47 || s[i] > 58)
			return (0);
	return (1);
}
