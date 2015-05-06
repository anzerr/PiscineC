/*
** my_params_to_tab.h for .h in /home/anzer_r/project/day08/anzer_r/my_params_to_tab
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr  8 10:39:24 2015 ANZER ryan
** Last update Wed Apr  8 11:36:39 2015 ANZER ryan
*/

#ifndef H__PARAMS_TO_TAB
#define H__PARAMS_TO_TAB

struct s_stock_par
{
  int size_param;
  char *str;
  char *copy;
  char **tab;
} t_stock_par;

void my_putchar(char c);

void my_putstr(char *str);

int my_strlen(char *str);

char *my_strdup(char *str);

char **my_str_to_wordtab(char *str);

#endif
