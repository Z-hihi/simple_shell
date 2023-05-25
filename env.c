#include "shell.h"

/**
 * _env - function environment
 *
 * Description: This function prints the environment variables.
 *
 * @argv: the arguments passed to the function
 * @lenv: pointer to the linked list of environment variables
 * @execnt: pointer to a counter for the number of commands executed
 *
 * Return: 1 if successful, otherwise an exit status
 */
int _env(char **argv, lenv_s **lenv, unsigned int *execnt)
{
	(void)argv;
	(void)execnt;
	print_list(lenv);
	return (EXIT_SUCCESS);
}

