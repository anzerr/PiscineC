/*
** action.c for action in /home/anzer_r/project/dicowesh/anzer_r/discowesh
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr 17 14:18:11 2015 ANZER ryan
** Last update Sat Apr 18 13:54:42 2015 ANZER ryan
*/
#include "header.h"

void aff_dico(t_core *core, int side)
{
  t_list *list;
  t_word *word;

  list = core->words;
  while (list != NULL)
    {
      word = (t_word*)list->data;
      my_putstrcolor((side)? word->wesh : word->fr, 32);
      my_putstrcolor(" : ", 32);
      my_putstrcolor((side)? word->fr : word->wesh, 32);
      my_putstr("\n");
      list = list->next;
    }
  my_putstr("> ");
}

void aff_dico_wesh(t_core *core)
{
  my_sort_list(&core->words, &cmpwordwesh);
  aff_dico(core, 1);
}

void aff_dico_fr(t_core *core)
{
  my_sort_list(&core->words, &cmpwordfr);
  aff_dico(core, 0);
}

void ajout_def(t_core *core)
{
  char **arg;

  termdisplay("Enter word to add:", 33);
  if ((arg = readArgument(2, &my_isalpha)) != NULL)
    {
      addword(&core->words, arg[0], arg[1]);
      termdisplay("Word has been added.", 32);
    }
  else
    termdisplay("Error: syntax error (fr, wesh)", 31);
}
