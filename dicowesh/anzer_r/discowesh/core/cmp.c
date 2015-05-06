/*
** cmp.c for cmp in /home/anzer_r/project/dicowesh/anzer_r/discowesh
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr 17 15:09:33 2015 ANZER ryan
** Last update Fri Apr 17 16:57:02 2015 ANZER ryan
*/
#include "header.h"

int cmpcommand(t_command *node, char *str)
{
  return (my_strcmp(node->command, str));
}

int cmpwordfr(t_word *cur, t_word *next)
{
  return (my_strcmp(cur->fr, next->fr));
}

int cmpwordwesh(t_word *cur, t_word *next)
{
  return (my_strcmp(cur->wesh, next->wesh));
}

int cmpwwesh(t_word *cur, char *str)
{
  return (my_strcmp(cur->wesh, str));
}

int cmpwfr(t_word *cur, char *str)
{
  return (my_strcmp(cur->fr, str));
}
