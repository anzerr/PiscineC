/*
** my_params_in_list.c for my_params_in_list in /home/anzer_r/project/day09/my_params_in_list
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  9 09:54:12 2015 ANZER ryan
** Last update Thu Apr  9 14:57:35 2015 ANZER ryan
*/
#include <stdlib.h>
#include "my_list.h"

t_list *my_params_in_list(int ac, char **av)
{
  t_list *tmp;
  t_list *last;
  int i;
  last = NULL;
  i = 0;
  while (i < ac)
    {
      tmp = malloc(sizeof(t_list));
      tmp->data = av[i];
      tmp->next = last;
      last = tmp;
      i = i + 1;
    }
  return (tmp);
}
