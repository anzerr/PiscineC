/*
** main.c for main in /home/anzer_r/project/demineur/step01/core
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Mon Apr 13 10:35:37 2015 ANZER ryan
** Last update Tue Apr 14 11:21:34 2015 ANZER ryan
*/
#include "header.h"

void displaymines(t_minefield *game)
{
  my_putstr("Mines: ");
  my_put_nbr((game->width * game->height) / 10);
  my_putstr("\n\n");
}

int gamerenderthink(t_minefield *game, t_player *ply)
{
  write(1, "\033[H\0", 5);
  write(1, "\033[2J\0", 5);
  displaymines(game);
  renderplayer(ply);
  if (game->msg != NULL)
    {
      my_putstr(game->msg);
      free(game->msg);
      game->msg = NULL;
    }
  if (hasgamewon(ply))
    {
      my_putstr("you WIN!\n");
      game->lost = 1;
    }
  return (playerrun(readLine(), ply));
}

int main(int argc, char **argv)
{
  t_minefield *game;
  t_player *ply;
  int run;
  run = 1;
  if (argc >= 3)
    {
      srand (time (NULL));
      game = initfield(my_getnbr(argv[1]), my_getnbr(argv[2]));
      addmines(game);
      initscore(game);
      ply = initplayer(game);
      while (run)
	{
	  run = gamerenderthink(game, ply);
	}
    }
  return (0);
}
