/*
** player.c for player in /home/anzer_r/project/demineur/step03
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Mon Apr 13 13:30:14 2015 ANZER ryan
** Last update Mon Apr 13 20:35:17 2015 ANZER ryan
*/
#include "header.h"

t_player *initplayer(t_minefield *game)
{
  t_player *ply;
  int x;
  int y;
  if ((ply = malloc(sizeof(t_player))) != NULL)
    {
      ply->game = game;
      if ((ply->show = malloc(game->height * sizeof(int*))) != NULL)
        {
          x = 0;
          while (x < game->height)
            ply->show[(x = x + 1) - 1] = malloc(game->width * sizeof(int));
          x = 0;
          while (x < game->height)
            {
              y = 0;
              while (y < game->width)
                ply->show[x][(y = y + 1) - 1] = 0;
              x = x + 1;
            }
        }
    }
  return (ply);
}

void renderplayer(t_player *ply)
{
  t_minefield *game;
  int x;
  int y;
  y = 0;
  game = ply->game;
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
	  showblockcolor(ply->show[x][y]);
	  y = y + 1;
        }
      my_putstr(" |\n");
      x = x + 1;
    }
}

void openblock(t_player *ply, int x, int y, int flag)
{
  t_minefield *game;
  int ox;
  int oy;
  game = ply->game;
  ox = x - 1;
  oy = y - 1;
  if (ox >= 0 && ox >= 0 && ox < game->height && oy < game->width)
    {
      if (flag == 0)
	{
	  if (game->grid[ox][oy] != -1 || flag == 1)
	    showisland(ply, ox, oy);
	  else
	    {
	      game->lost = 1;
	      updategamemsg(game, "you lost\n");
	    }
	}
      else
	ply->show[ox][oy] = -1;
    }
}

void playercommand(char **str, t_player *ply)
{
  t_minefield *game;
  char **tab;
  int count;
  int flag;
  char *cmd;
  cmd = *str;
  game = ply->game;
  tab = my_str_to_wordtab(cmd);
  count = 0;
  flag = (my_strcmp(my_strstr(cmd, "-f"), "null") != 0);
  while (tab[(count = count + 1) - 1] != NULL);
  if (count >= 3 && is_numeric(tab[0]) && is_numeric(tab[1]))
    openblock(ply, my_getnbr(tab[0]), my_getnbr(tab[1]), flag);
  else
    updategamemsg(game, "error: need (int),(int) -(flags)\n");
  count = 0;
  while (tab[(count = count + 1) - 1] != NULL)
    free(tab[count - 1]);
}

int playerrun(char *str, t_player *ply)
{
  t_minefield *game;
  char *cmd;
  game = ply->game;
  cmd = my_strdup(str);
  if (my_strcmp(my_strstr(cmd, "-q"), "null") != 0)
    return (0);
  if (my_strcmp(my_strstr(cmd, "-r"), "null") != 0)
    {
      resetgame(ply);
      return (1);
    }
  if (game->lost )
    return (1);
  playercommand(&cmd, ply);
  return (1);
}
