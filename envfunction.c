#include "shell.h"
/**
 * cenv - this function creat a list from env
 * @env: the environement
 * Return: return the list.
 **/
lenv_s *cenv(char **env)
{
	int i;
	lenv_s *lenv;

	lenv = NULL;
	for (i = 0; env[i] != NULL; i++)
	{
		add_node(&lenv, env[i]);
	}
	return (lenv);

}
/**
 * add_node - add a new node to a list
 * @head: the head of list
 * @str: the string to put
 * Return: the head of the list
 */
lenv_s *add_node(lenv_s **head, char *str)
{
	lenv_s *node, *tail;
	char *_str;

	tail = *head;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(lenv_s));
	if (node == NULL)
		return (NULL);
	_str = _strdup(str);
	if (_str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->var = _str;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (tail->next)
		tail = tail->next;

	tail->next = node;

	return (tail);

}
/**
 * print_list - this function prints a list
 * @head: the head of list
 * Return: the number of nodes
 **/
size_t print_list(lenv_s **head)
{
	int i;

	lenv_s *h = *head;

	for (i = 0; h ; i++)
	{
		if (h->var == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->var);
		h = h->next;
	}

	return (i);
}
/**
 * menv - this function convert a list to a doble pointer
 * @head: the head of list
 * Return: the doble pointer.
 **/
char **menv(lenv_s **head)
{
	int i;
	lenv_s *h = *head;
	char **lenv;

	for (i = 0; h; i++)
		h = h->next;
	lenv = malloc(sizeof(char *) * (i + 1));
	h = *head;
	for (i = 0; h; i++, h = h->next)
		lenv[i] = h->var;
	lenv[i] = NULL;

	return (lenv);
}

/**
 * free_list - free a list
 * @head: the head of list
 * Return: void, no return
 **/
void free_list(lenv_s **head)
{
	lenv_s *h;
	lenv_s *position, *next;


	h = *head;
	position = h;
	while (position != NULL)
	{
		next = position->next;
		free(position->var);
		free(position);
		position = next;
	}
	h = NULL;
}
