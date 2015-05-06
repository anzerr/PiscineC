/*
** data.c for data in /home/anzer_r/project/dicowesh/anzer_r/discowesh
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Sat Apr 18 09:15:48 2015 ANZER ryan
** Last update Sat Apr 18 14:30:13 2015 ANZER ryan
*/
#include "header.h"

void catword(char **str, char c)
{
  char *tmp;
  char *out;
  int i;

  tmp = *str;
  if (tmp != NULL)
    out = malloc((my_strlen(tmp) + 2) * sizeof(char));
  else
    out = malloc(2 * sizeof(char));
  if (out == NULL)
    return;
  i = 0;
  while (tmp != NULL && tmp[i] != '\0')
    {
      out[i] = tmp[i];
      i = i + 1;
    }
  out[i] = c;
  out[i + 1] = '\0';
  *str = out;
  if (tmp != NULL)
    free(tmp);
}

void loadwords(t_core *core)
{
  int h;
  char *word;
  char b[1];
  char **tab;
  int i;

  h = open("words", O_RDONLY);
  if(h < 0)
    return;
  word = NULL;
  while (read(h, b, 1) > 0)
    catword(&word, b[0]);
  if (word == NULL)
    return;
  tab = my_str_to_wordtab(word);
  i = 0;
  while (tab[i] != NULL)
    {
      if (i % 2 == 1)
	addword(&core->words, tab[i - 1], tab[i]);
      i = i + 1;
    }
}

void savewords(t_core *core)
{
  t_list *list;
  t_word *word;
  int h;

  h = open("words", O_CREAT | O_WRONLY | O_TRUNC, 0666);
  if(h < 0)
    return;
  list = core->words;
  while (list != NULL)
    {
      word = (t_word*)list->data;
      write(h, word->fr, my_strlen(word->fr));
      write(h, ":", 1);
      write(h, word->wesh, my_strlen(word->wesh));
      write(h, "\n", 1);
      list = list->next;
    }
}
