#include "shell.h"
#include <stdlib.h>

/**
 * init_prompt - Initialize prompt.
 * Return: void.
 */
void init_prompt(void)
{
	int p_l, s_l, t_l;
	char *p, *s, *t = "> ";
	char *prompt = NULL;

	p = getenv("USER");
	s = getenv("NAME");

	p_l = strlen(p);
	s_l = strlen(s);
	t_l = strlen(t);
	prompt = malloc(p_l + s_l + t_l + 1 + 1);
	if (!p || !s || !prompt)
	{
		puts("$ ");
		return;
	}
	strcpy(prompt, p);
	strcat(prompt, "@");
	strcat(prompt, s);
	strcat(prompt, t);
	puts(prompt);
	free(prompt);
}
