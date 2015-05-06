/*
** my_params_to_tab.c for my_params_to_tab in /home/anzer_r/project/day08/anzer_r/my_params_to_tab
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr  8 10:18:37 2015 ANZER ryan
** Last update Wed Apr  8 18:47:10 2015 ANZER ryan
*/
#include <stdlib.h>
#include "my_params_to_tab.h"

struct s_stock_par *my_params_to_tab(int ac, char **av)
{
  struct s_stock_par *tab;
  int i;
  tab = malloc((ac + 1) * sizeof(struct s_stock_par));
  i = 0;
  while (i <= ac)
    {
      if (i != ac)
	{
	  tab[i].size_param = my_strlen(av[i]);
	  tab[i].str = av[i];
	  tab[i].copy = my_strdup(av[i]);
	  tab[i].tab = my_str_to_wordtab(av[i]);
	}
      else
	tab[i].str = NULL;
      i = i + 1;
    }
  return (tab);
}
