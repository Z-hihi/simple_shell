#include "hsh.h"

/**
 * check_builtin - checks if the input is a built-in command
 *
 * @builtin: the command to check
 *
 * Return: Function pointer
 */
int (*check_builtin(char *builtin))()
{
	int i;
	builtin_s built[] = {
		{"exit", _ex},
		{"env", _env},
		{"cd", _cd},
		{"help", _help},
		{"history", _history},
		{"setenv", _setenv},
		{"unsetenv", _unsetenv},
		{"hlphelp", _hlphelp},
		{"hlpcd", _hlpcd},
		{"hlpexit", _hlpexit},
		{"hlphistory", _hlphistory},
	};
	int built_len = sizeof(built) / sizeof(builtin_s);
	const char *p = builtin;

	if (p != NULL)
	{
		for (i = 0; i < built_len; i++)
			if (_strcmp(builtin, built[i].s) == 0)
				return (built[i].f);
	}
	return (NULL);
}

