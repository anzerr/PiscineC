/*
** main.c for main in /home/anzer_r/project/demineur/step01/core
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Mon Apr 13 10:35:37 2015 ANZER ryan
** Last update Mon Apr 13 12:55:16 2015 ANZER ryan
*/
#include "header.h"

int main(int argc, char **argv)
{
  t_minefield *game;
  int x;
  int y;
  if (argc >= 3)
    {
      srand (time (NULL));
      game = initfield(my_getnbr(argv[1]), my_getnbr(argv[2]));
      addmines(game);
      initscore(game);
      renderfield(game);
    }
  return (0);
}
