/*
** my_aff_params.c for my_aff_params in /home/anzer_r/project/day03/anzer_r/my_aff_param
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr  3 12:54:55 2015 ANZER ryan
** Last update Tue Apr  7 11:14:06 2015 ANZER ryan
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
