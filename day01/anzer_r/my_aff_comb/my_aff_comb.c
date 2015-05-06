/*
** my_aff_comb.c for my_aff_comb in /home/anzer_r/project/jour01/anzer_r/my_aff_comb
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr  1 17:53:59 2015 ANZER ryan
** Last update Wed Apr  1 18:39:24 2015 ANZER ryan
*/

char my_putchar(char c);

void my_aff_comb()
{
  int ia;
  int ib;
  int ic;

  for (ia = 0; ia <= 9; ia++)
    {
    for (ib = ia + 1; ib <= 9; ib++)
      {
      for (ic = ib + 1; ic <= 9; ic++)
	{
	if (ia != 0 || ib != 1 || ic != 2)
	  {
	    my_putchar(',');
	    my_putchar(' ');
	  }
	my_putchar(48 + ia);
	my_putchar(48 + ib);
	my_putchar(48 + ic);
	}
      }
    }
  my_putchar('\n');
}
