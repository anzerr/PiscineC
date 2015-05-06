/*
** header.h for header in /home/anzer_r/project/dicowesh/anzer_r/discowesh/core
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr 17 10:38:11 2015 ANZER ryan
** Last update Sat Apr 18 12:24:36 2015 ANZER ryan
*/

#ifndef __HEADER__
#define __HEADER__

#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct s_list
{
  void *data;
  struct s_list *next;
} t_list;


typedef struct s_core
{
  t_list *cmd;
  t_list *words;
} t_core;

typedef struct s_word
{
  char *fr;
  char *wesh;
} t_word;

typedef struct s_command
{
  char *command;
  char *explain;
  void (*func)();
} t_command;


void termdisplay(char *str, int code);
void my_putstrcolor(char *str, int code);

int my_strlen(char *str);
void my_put_nbr(int nbr);
void my_putchar(char c);
void my_putstr(char *str);
char *my_strdup(char *str);
int my_strcmp(char *s1, char *s2);
char **my_str_to_wordtab(char *str);

t_core *initcore();
void freecore(t_core *core);
void freewords(t_core *core);
void freecommands(t_core *core);

void initcmd(t_core *core);
void addcmd(t_list **cmd, char *com, char *exp, void (*func)());
int runcmd(char *line, t_core *core);
void displaycmd(t_core *core);

int cmpcommand(t_command *node, char *str);
int cmpwordfr(t_word *cur, t_word *next);
int cmpwordwesh(t_word *cur, t_word *next);
int cmpwwesh(t_word *cur, char *str);
int cmpwfr(t_word *cur, char *str);

char *readLine();

void my_sort_list(t_list **begin, int (*cmp)());
t_list *my_add_list(t_list **begin);
void my_remove_list(t_list **begin, void *data_ref, int (*cmp)());
void *my_find_list(t_list *begin, void *data_ref, int (*cmp)());

void aff_dico(t_core *core, int side);
void aff_dico_wesh(t_core *core);
void aff_dico_fr(t_core *core);
void ajout_def(t_core *core);

void addword(t_list **cmd, char *fr, char *wesh);
void initwords(t_core *core);
void wordtranslate(t_core *core, int side);
void wesh_to_fr(t_core *core);
void fr_to_wesh(t_core *core);

int my_isalpha(char c);
int my_isnum(char c);
int my_isalphanum(char c);
char **readArgument(int argc, int (*func)(char c));

void loadwords(t_core *core);
void savewords(t_core *core);

#endif
