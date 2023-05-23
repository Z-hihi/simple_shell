#include "shell.h"

/**
 * _getenv - get the value of an environmental variable
 * @name: the variable name
 *
 * Return: the value of @name
 */
char *_getenv(const char *name)
{
	int i = 0, j = 0;

	while (environ[i] != NULL)
	{
		while (environ[i][j] != '\0' && *name != '\0')
		{
			if (environ[i][j] != *name || (environ[i][j] == '='))
				break;
			j++, name++;
		}

		if (environ[i][j] == '=' && *name == '\0')
			return ((*(environ + i) + ++j));
		i++;
	}

	return (NULL);
}
