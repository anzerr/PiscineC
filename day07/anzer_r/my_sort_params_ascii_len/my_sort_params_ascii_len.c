/*
** my_sort_params_ascii_len.c for my_sort_params_asii_len in /home/anzer_r/project/day07/anzer_r/my_sort_params_asii_len
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Tue Apr  7 16:10:38 2015 ANZER ryan
** Last update Tue Apr  7 16:24:42 2015 ANZER ryan
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

int my_strcmplen(char *s1, char *s2)
{
  int i;
  int b;
  b = (i = 0);
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] == '\0' || s2[i] == '\0')
	return ((s1[i] == '\0') ? -1 : 1);
      if (s1[i] != s2[i] && b == 0)
        b = ((s1[i] < s2[i]) ? -1 : 1);
      i = i + 1;
    }
  return (b);
}

void my_swap_array(char **a, char **b)
{
  char *tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

void my_sort_params_ascii_len(int nb, char **arg)
{
  int i;
  int v;
  i = 0;
  while (i < nb)
    {
      v = 0;
      while (v < nb)
	{
	  if (my_strcmplen(arg[i], arg[v]) == -1)
	    {
	      my_swap_array(&arg[i], &arg[v]);
	    }
	  v = v + 1;
	}
      i = i + 1;
    }
  my_aff_params(nb, arg);
}
