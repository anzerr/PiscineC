/*
** my_apply_on_list.c for  in /home/anzer_r/project/day09/anzer_r/my_apply_on_list
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  9 13:11:01 2015 ANZER ryan
** Last update Thu Apr  9 15:33:04 2015 ANZER ryan
*/
#include <stdlib.h>
#include "my_list.h"

void my_apply_on_eq_list(t_list *begin, int (*f)(), void *data_ref, int (*cmp)())
{
  t_list *list;
  list = begin;
  while (list != NULL)
    {
      if (cmp(list->data, data_ref) == 0)
	{
	  f(list->data);
	}
      list = list->next;
    }
}
