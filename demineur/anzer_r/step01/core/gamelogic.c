/*
** gamelogic.c for gamelogic in /home/anzer_r/project/demineur/step01/core
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Mon Apr 13 10:43:30 2015 ANZER ryan
** Last update Mon Apr 13 12:40:44 2015 ANZER ryan
*/
#include "header.h"

t_minefield *initfield(int width, int height)
{
  t_minefield *base;
  int x;
  int y;
  if ((base = malloc(sizeof(t_minefield))) != NULL)
    {
      base->width = width;
      base->height = height;
      if ((base->grid = malloc(height * sizeof(int*))) != NULL)
	{
	  x = 0;
	  while (x < height)
	    base->grid[(x = x + 1) - 1] = malloc(width * sizeof(int));
	  x = 0;
	  while (x < height)
	    {
	      y = 0;
	      while (y < width)
		base->grid[x][(y = y + 1) - 1] = 0;
	      x = x + 1;
	    }
	}
    }
  return (base);
}

void addmines(t_minefield *game)
{
  int x;
  int y;
  int mines;
  mines = (game->height * game->width) / 10;
  while (mines > 0)
    {
      x = (rand() % game->height);
      y = (rand() % game->width);
      if (game->grid[x][y] != -1)
	{
	  game->grid[x][y] = -1;
	  mines = mines - 1;
	}
    }
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
