#ifndef SHELL_H
#define SHELL_H

/* Header Files */
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/* Macros */
#define TRUE 1
#define FALSE 0
#define BUFSIZE 1024


extern char **environ;

/**

struct builtin_t - Structure for builtin
@cmd: the command
@f: the appropriate
*/
typedef struct builtin_t { char *cmd; int (*f)(char **, int, char *);} builtin_t;

int execute(char **cmd, char *filename);

void init_prompt(void);

char *rm_newline(char *line);
char **parse_input(char *line);
char *build_path(char *token, char *value);
int check_cmd_path(char **cmd);
int _strlen(const char *s);
char *_strstr(char *haystack, char *needle);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
int _strcmp(char *s1, char *s2);

char *_getenv(const char *name);

int _putchar(int c);
int print(char *str);

void free_memory_p(char *);
void free_memory_pp(char **);
int cmp(const char *s1, const char *s2);
int _atoi(char *s);
int _isalpha(char c);

char *_strdup(char *s);

int exit_cmd(char **, int, char *);
int env_cmd(char **, int, char *);
builtin_t is_builtin(char *cmd);
int (*check_builtins(char **))(char **, int, char *);

#endif
