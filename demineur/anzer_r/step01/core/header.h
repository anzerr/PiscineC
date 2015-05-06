/*
** base.h for base in /home/anzer_r/project/demineur/step01/core
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Mon Apr 13 10:40:08 2015 ANZER ryan
** Last update Mon Apr 13 12:40:25 2015 ANZER ryan
*/

#ifndef __BASEH__
#define __BASEH__

#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

typedef struct s_minefield
{
  int width;
  int height;
  int **grid;
} t_minefield;

t_minefield *initfield(int width, int height);

void renderfield(t_minefield *game);

#endif
