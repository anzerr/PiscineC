/*
** score.c for score in /home/anzer_r/project/demineur/step02/core
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Mon Apr 13 12:43:08 2015 ANZER ryan
** Last update Mon Apr 13 13:15:59 2015 ANZER ryan
*/
#include "header.h"

void addscore(t_minefield *game, int x, int y)
{
  int range;
  int ox;
  int oy;
  range = 1;
  ox = x - range;
  while (ox <= (x + range))
    {
      oy = y - range;
      while (oy <= (y + range))
	{
	  if (ox >= 0 && ox >= 0 && ox < game->height && oy < game->width)
	    {
	      if ((ox != x || oy != y) && game->grid[ox][oy] != -1)
		game->grid[ox][oy] = game->grid[ox][oy] + 1;
	    }
	  oy = oy + 1;
	}
      ox = ox + 1;
    }
}

void initscore(t_minefield *game)
{
  int x;
  int y;
  x = 0;
  while (x < game->height)
    {
      y = 0;
      while (y < game->width)
	{
	  if (game->grid[x][y] == -1)
	    addscore(game, x, y);
	  y = y + 1;
	}
      x = x + 1;
    }
}
