/*
** my_sort_params.c for my_sort_parms in /home/anzer_r/project/day04/anzer_r/my_sort_params
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Mon Apr  6 13:06:36 2015 ANZER ryan
** Last update Mon Apr  6 13:36:10 2015 ANZER ryan
*/

void my_putchar(char c);

void my_aff_params(int nbr, char **arg)
{
  int i;
  int si;

  i = 0;
  while (i < nbr)
    {
      si = 0;
      while (arg[i][si] != '\0')
        {
          my_putchar(arg[i][si]);
          si = si + 1;
        }
      i = i + 1;
      my_putchar('\n');
    }
}

int my_strcmp(char *s1, char *s2)
{
  int i;
  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] != s2[i])
        return ((s1[i] < s2[i]) ? -1 : 1);
      i = i + 1;
    }
  return (0);
}

void my_swap_array(char **a, char **b)
{
  char *tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

void my_sort_params(int nb, char **arg)
{
  int i;
  int v;
  i = 0;
  while (i < nb)
    {
      v = 0;
      while (v < nb)
	{
	  if (my_strcmp(arg[i], arg[v]) == -1)
	    {
	      my_swap_array(&arg[i], &arg[v]);
	    }
	  v = v + 1;
	}
      i = i + 1;
    }
  my_aff_params(nb, arg);
}
