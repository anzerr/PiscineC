/*
** my_aff_comb.c for my_aff_comb in /home/anzer_r/project/jour01/anzer_r/my_aff_comb
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr  1 17:53:59 2015 ANZER ryan
** Last update Wed Apr  1 19:53:57 2015 ANZER ryan
*/

char my_putchar(char c);

void my_print_number(int n)
{
  if (n < 10)
    {
      my_putchar(48);
    }
  else
    {
      my_putchar(48 + (n / 10));
    }
  my_putchar(48 + (n - ((n / 10) * 10)));
}

void my_aff_comb2()
{
  int ia;
  int ib;

  for (ia = 0; ia <= 99; ia++)
    {
      for (ib = ia + 1; ib <= 99; ib++)
	{
	  if (ia != 0 || ib != 1)
	    {
	      my_putchar(',');
	      my_putchar(' ');
	    }
	  my_print_number(ia);
	  my_putchar(' ');
	  my_print_number(ib);
	}
  }
  my_putchar('\n');
}
