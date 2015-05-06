/*
** gamelogic.c for gamelogic in /home/anzer_r/project/demineur/step01/core
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Mon Apr 13 10:43:30 2015 ANZER ryan
** Last update Mon Apr 13 20:51:36 2015 ANZER ryan
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
      base->msg = NULL;
      base->lost = 0;
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

void updategamemsg(t_minefield *game, char *str)
{
  if (game->msg != NULL)
    free(game->msg);
  game->msg = my_strdup(str);
}

int hasgamewon(t_player *ply)
{
  t_minefield *game;
  int x;
  int y;
  int open;
  int max;
  game = ply->game;
  x = 0;
  open = 0;
  max = game->width * game->height;
  while (x < game->height)
    {
      y = 0;
      while (y < game->width)
        {
          if (ply->show[x][y] == 0)
	    open = open + 1;
          y = y + 1;
        }
      x = x + 1;
    }
  return (open == (max / 10));
}

void resetgame(t_player *ply)
{
  t_minefield *game;
  int x;
  int y;
  game = ply->game;
  game->lost = 0;
  x = 0;
  while (x < game->height)
    {
      y = 0;
      while (y < game->width)
	{
	  ply->show[x][y] = 0;
	  game->grid[x][y] = 0;
	  y = y + 1;
	}
      x = x + 1;
    }
  addmines(game);
  initscore(game);
}
