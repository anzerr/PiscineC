/*
** core.c for core in /home/anzer_r/project/dicowesh/anzer_r/discowesh/core
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr 17 11:31:52 2015 ANZER ryan
** Last update Sat Apr 18 12:24:53 2015 ANZER ryan
*/
#include "header.h"

t_core *initcore()
{
  t_core *core;
  if ((core = malloc(sizeof(t_core))) == NULL)
    return (NULL);
  core->cmd = NULL;
  core->words = NULL;
  initcmd(core);
  initwords(core);
  return (core);
}

void freecore(t_core *core)
{
  freewords(core);
  freecommands(core);
  free(core);
}

void freewords(t_core *core)
{
  t_list *words;
  t_list *tmp;
  t_word *w;

  words = core->words;
  while (words != NULL)
    {
      w = (t_word*)words->data;
      words = (tmp = words)->next;
      free(w->fr);
      free(w->wesh);
      free(w);
      free(tmp);
    }
}

void freecommands(t_core *core)
{
  t_list *cmd;
  t_list *tmp;
  t_command *w;

  cmd = core->cmd;
  while (cmd != NULL)
    {
      w = (t_command*)cmd->data;
      cmd = (tmp = cmd)->next;
      free(w->command);
      free(w->explain);
      free(w);
      free(tmp);
    }
}
