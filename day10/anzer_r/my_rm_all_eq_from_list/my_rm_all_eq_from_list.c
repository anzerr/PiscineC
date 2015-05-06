/*
** my_apply_on_list.c for  in /home/anzer_r/project/day09/anzer_r/my_apply_on_list
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  9 13:11:01 2015 ANZER ryan
** Last update Fri Apr 10 11:32:33 2015 ANZER ryan
*/
#include <stdlib.h>
#include "my_list.h"

void my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)())
{
  t_list *list;
  t_list *node;
  list = *begin;
  node = NULL;
  while (list != NULL)
    {
      if (cmp(list->data, data_ref) == 0)
	{
	  if (node == NULL)
	    *begin = list->next;
	  else
	    node->next = list->next;
	  free(list);
	}
      node = list;
      list = list->next;
    }
}
