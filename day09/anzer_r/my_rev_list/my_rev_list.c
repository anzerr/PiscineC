/*
** my_rev_list.c for my_rev_list in /home/anzer_r/project/day09/anzer_r/my_rev_list
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  9 10:44:36 2015 ANZER ryan
** Last update Thu Apr  9 12:50:24 2015 ANZER ryan
*/
#include <stdlib.h>
#include <stdio.h>
#include "my_list.h"

t_list *my_unlink_last(t_list **begin)
{
  t_list *obj;
  t_list *link;
  obj = *begin;
  link = NULL;
  while (obj != NULL)
    {
      if (obj->next == NULL)
	{
	  if (link != NULL)
	    link->next = NULL;
	  return (obj);
	}
      obj = (link = obj)->next;
    }
  return (NULL);
}

void my_rev_list(t_list **begin)
{
  t_list *tmp;
  t_list *obj;
  t_list *link;
  t_list *first;
  int i;
  obj = *begin;
  i = ((tmp = NULL) != NULL);
  if (obj->next == NULL)
    return;
  while (i <= 1)
    {
      link = my_unlink_last(&obj);
      if (link != NULL)
	{
	  if (tmp == NULL)
	    first = link;
	  else
	    tmp->next = link;
	  tmp = link;
	}
      if ((obj = *begin)->next == NULL)
	i = i + 1;
    }
  *begin = first;
}
