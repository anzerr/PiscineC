/*
** my_apply_on_list.c for  in /home/anzer_r/project/day09/anzer_r/my_apply_on_list
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  9 13:11:01 2015 ANZER ryan
** Last update Fri Apr 10 16:59:43 2015 ANZER ryan
*/
#include <stdlib.h>
#include <stdio.h>
#include "my_list.h"

void my_sort_list(t_list **begin, int (*cmp)())
{
  t_list *prev;
  t_list *link;
  t_list *next;
  link = *begin;
  prev = NULL;
  while (link != NULL)
    {
      next = link->next;
      if (next != NULL && cmp(link->data, next->data) > 0)
	{
	  link->next = next->next;
	  next->next = link;
	  if (prev == NULL)
	    *begin = next;
	  else
	    prev->next = next;
	  link = *begin;
	  prev = NULL;
	}
      else
	link = (prev = link)->next;
    }
}
