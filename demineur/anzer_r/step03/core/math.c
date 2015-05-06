/*
** math.c for math in /home/anzer_r/project/demineur/step03
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Mon Apr 13 16:04:29 2015 ANZER ryan
** Last update Tue Apr 14 11:23:02 2015 ANZER ryan
*/
#include "header.h"

int is_numeric(char *str)
{
  int i;
  i = 0;
  while (str[i] != '\0')
    {
      if (!(str[i] >= 48 && str[i] <= 57))
	return (0);
      i = i + 1;
    }
  return (1);
}

void putnbrformat(int nbr, int max)
{
  int i;
  i = my_numlen(max) - my_numlen(nbr);
  while (i > 0)
    {
      my_putchar('0');
      i = i - 1;
    }
  my_put_nbr(nbr);
}

void showisland(t_player *ply, int x, int y)
{
  t_minefield *game;
  int ox;
  int oy;
  ox = x - 1;
  game = ply->game;
  ply->show[x][y] = game->grid[x][y] + 1;
  if (game->grid[x][y] != 0)
      return;
  while (ox <= (x + 1))
    {
      oy = y - 1;
      while (oy <= (y + 1))
        {
          if (ox >= 0 && ox >= 0 && ox < game->height && oy < game->width)
            {
	      if ((oy - y) == 0 || (ox - x) == 0)
		{
		  if (game->grid[ox][oy] != -1 && ply->show[ox][oy] == 0)
		    showisland(ply, ox, oy);
		}
	    }
          oy = oy + 1;
        }
      ox = ox + 1;
    }
}

void showblockcolor(int n)
{
  my_putstr(" | ");
  if (n > 1)
    {
      if (n == 2)
	write(1, "\033[36m\0", 6);
      if (n == 3)
	write(1, "\033[32m\0", 6);
      if (n >= 4)
	write(1, "\033[31m\0", 6);
      my_put_nbr(n - 1);
      write(1, "\033[39m\0", 6);
    }
  else
    {
      if (n == 0 || n == -1)
	write(1, (n == 0) ? "\033[43m\0" : "\033[45m\0", 6);
      my_putchar(32);
      write(1, "\033[49m\0", 6);
    }
    my_putstr(" ");
}
