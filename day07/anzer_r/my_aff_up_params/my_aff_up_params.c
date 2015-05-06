/*
** my_aff_up_params.c for my_aff_up_params in /home/anzer_r/project/day07/anzer_r/my_aff_up_params
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Tue Apr  7 11:11:19 2015 ANZER ryan
** Last update Tue Apr  7 11:19:54 2015 ANZER ryan
*/

void my_putchar(char c)
{
  write(1, &c, 1);
}

void my_aff_up_params(int nbr, char **arg)
{
  int i;
  int si;

  i = 0;
  while (i < nbr)
    {
      si = 0;
      while (arg[i][si] != '\0')
        {
	  if (arg[i][si] >= 97 && arg[i][si] <= 122)
	    my_putchar(arg[i][si] - 32);
	  else
	    my_putchar(arg[i][si]);
	  si = si + 1;
        }
      i = i + 1;
      my_putchar('\n');
    }
}
