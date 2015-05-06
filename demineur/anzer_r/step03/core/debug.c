/*
** debug.c for debug in /home/anzer_r/project/demineur/step03
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Mon Apr 13 20:37:13 2015 ANZER ryan
** Last update Mon Apr 13 20:46:04 2015 ANZER ryan
*/
#include "header.h"

void renderfield(t_minefield *game)
{
  int x;
  int y;
  y = 0;
  my_putstr("  ");
  while (y < game->width)
    {
      my_putstr(" | ");
      putnbrformat((y = y + 1), 10);
    }
  my_putstr(" |\n");
  x = 0;
  while (x < game->height)
    {
      putnbrformat(x + 1, 10);
      y = 0;
      while (y < game->width)
        {
          my_putstr(" | ");
          my_put_nbr(game->grid[x][y]);
          if (game->grid[x][(y = y + 1) - 1] >= 0)
            my_putstr(" ");
        }
      my_putstr(" |\n");
      x = x + 1;
    }
}
