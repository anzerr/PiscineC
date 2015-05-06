/*
** my_list_size.c for my_list_size in /home/anzer_r/project/day09/anzer_r/my_list_size
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  9 10:25:52 2015 ANZER ryan
** Last update Thu Apr  9 10:32:09 2015 ANZER ryan
*/
#include <stdlib.h>
#include "my_list.h"

int my_list_size(t_list *begin)
{
  t_list *tmp;
  int i;
  i = 0;
  tmp = begin;
  while (tmp != NULL)
    {
      i = i + 1;
      tmp = tmp->next;
    }
  return (i);
}
