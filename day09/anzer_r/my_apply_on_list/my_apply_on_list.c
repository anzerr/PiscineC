/*
** my_apply_on_list.c for  in /home/anzer_r/project/day09/anzer_r/my_apply_on_list
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  9 13:11:01 2015 ANZER ryan
** Last update Thu Apr  9 14:46:12 2015 ANZER ryan
*/
#include <stdlib.h>
#include "my_list.h"

void my_apply_on_list(t_list *begin, int (*f)())
{
  t_list *list;
  list = begin;
  while (list != NULL)
    {
      f(list->data);
      list = list->next;
    }
}
