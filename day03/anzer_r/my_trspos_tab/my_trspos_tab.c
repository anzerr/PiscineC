/*
** my_trspos_tab.c for my_trspos_tab.c in /home/anzer_r/project/day03/anzer_r/my_trspos_tab
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr  3 12:25:24 2015 ANZER ryan
** Last update Fri Apr  3 12:51:35 2015 ANZER ryan
*/

void my_putchar(char c);

void my_trspos_tab(int c, int l, int tab[l][c])
{
  int a;
  int b;

  a = 0;
  while (a < c)
    {
      b = 0;
      while (b < l)
	{
	  my_putchar(48 + tab[b][a]);
	  b = b + 1;
	}
      my_putchar('\n');
      a = a + 1;
    }
}
