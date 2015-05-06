/*
** cmd.c for cmd in /home/anzer_r/project/dicowesh/anzer_r/discowesh/core
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr 17 10:53:05 2015 ANZER ryan
** Last update Sat Apr 18 12:23:23 2015 ANZER ryan
*/
#include "header.h"

void addcmd(t_list **cmd, char *com, char *exp, void (*func)())
{
  t_command *tmp;
  t_list *node;

  if ((tmp = malloc(sizeof(t_command))) == NULL)
    return;
  tmp->command = my_strdup(com);
  tmp->explain = my_strdup(exp);
  tmp->func = func;
  node = my_add_list(cmd);
  node->data = tmp;
}

int runcmd(char *line, t_core *core)
{
  t_command *tmp;
  t_list *list;
  int run;

  list = core->cmd;
  tmp = (t_command*)my_find_list(list, line, &cmpcommand);
  run = (my_strcmp(line, "quit") != 0);
  if (run)
    {
      if (tmp != NULL && tmp->func != NULL)
	tmp->func(core);
      else
	termdisplay("Error: is not a command", 31);
    }
  else
    {
      savewords(core);
      freecore(core);
      termdisplay("This isn't brave. It's murder.", 35);
    }
  return (run);
}

void displaycmd(t_core *core)
{
  t_list *list;
  t_command *tmp;

  list = core->cmd;
  while (list != NULL)
    {
      tmp = (t_command*)list->data;
      my_putstrcolor(tmp->command, 33);
      my_putstrcolor(" : ", 33);
      my_putstrcolor(tmp->explain, 33);
      my_putstrcolor("\n", 33);
      list = list->next;
    }
  my_putstr("> ");
}

void initcmd(t_core *c)
{
  addcmd(&c->cmd, "3", "traduire du francais au wesh", &fr_to_wesh);
  addcmd(&c->cmd, "2", "traduire du wesh au francais", &wesh_to_fr);
  addcmd(&c->cmd, "1", "ajouter une définition", &ajout_def);
  addcmd(&c->cmd, "b", "afficher le dictionnaire sous la forme fr : wesh", &aff_dico_fr);
  addcmd(&c->cmd, "a", "afficher le dictionnaire sous la forme wesh : fr", &aff_dico_wesh);
}
