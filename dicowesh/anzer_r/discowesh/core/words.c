/*
** words.c for words in /home/anzer_r/project/dicowesh/anzer_r/discowesh
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr 17 14:30:12 2015 ANZER ryan
** Last update Sat Apr 18 14:34:36 2015 ANZER ryan
*/
#include "header.h"

void addword(t_list **words, char *fr, char *wesh)
{
  t_word *tmp;
  t_list *node;

  tmp = (t_word*)my_find_list(*words, fr, &cmpwfr);
  if (tmp == NULL)
    {
      if ((tmp = malloc(sizeof(t_word))) == NULL)
	return;
      tmp->fr = my_strdup(fr);
      tmp->wesh = my_strdup(wesh);
      node = my_add_list(words);
      node->data = tmp;
    }
  else
    {
      free(tmp->wesh);
      tmp->wesh = my_strdup(wesh);
    }
}

void wordtranslate(t_core *core, int side)
{
  t_word *tmp;
  char **arg;
  int i;

  termdisplay("Enter a word:", 33);
  if ((arg = readArgument(1, &my_isalpha)) != NULL)
    {
      i = 0;
      while (arg[i] != NULL)
	{
	  tmp = (t_word*)my_find_list(core->words, arg[i], (side)? &cmpwwesh : &cmpwfr);
	  if (tmp != NULL)
	    {
	      my_putstrcolor("the translation for '", 32);
	      my_putstrcolor(arg[0], 32);
	      my_putstrcolor("' is '", 32);
	      my_putstrcolor((side)? tmp->fr : tmp->wesh, 32);
	      my_putstrcolor("'\n", 32);
	    }
	  else
	    my_putstrcolor("Error: did not find the word.\n", 31);
	  i = i + 1;
	}
      my_putstr("> ");
    }
  else
    termdisplay("Error: syntax error (string).", 31);
  free(arg);
}

void wesh_to_fr(t_core *core)
{
  wordtranslate(core, 1);
}

void fr_to_wesh(t_core *core)
{
  wordtranslate(core, 0);
}

void initwords(t_core *core)
{
  loadwords(core);
}
