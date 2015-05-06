/*
** my_apply_on_list.c for  in /home/anzer_r/project/day09/anzer_r/my_apply_on_list
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  9 13:11:01 2015 ANZER ryan
** Last update Fri Apr 10 12:21:32 2015 ANZER ryan
*/
#include <stdlib.h>
#include "my_list.h"

void my_add_list_to_list(t_list **begin1,t_list *begin2)
{
  t_list *list;
  list = *begin1;
  while (list->next != NULL)
    list = list->next;
  list->next = begin2;
}
