/*
** base.h for base in /home/anzer_r/project/demineur/step01/core
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Mon Apr 13 10:40:08 2015 ANZER ryan
** Last update Mon Apr 13 18:43:13 2015 ANZER ryan
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
  int lost;
  char *msg;
  int **grid;
} t_minefield;

typedef struct s_player
{
  int **show;
  struct s_minefield *game;
} t_player;

void addscore(t_minefield *game, int x, int y);
void initscore(t_minefield *game);
t_minefield *initfield(int width, int height);
void addmines(t_minefield *game);
void putnbrformat(int nbr, int max);
void renderfield(t_minefield *game);
char *readLine();
t_player *initplayer(t_minefield *game);
void renderplayer(t_player *ply);

char *my_strdup(char *);
int is_numeric(char *str);
char **my_str_to_wordtab(char *str);

void showisland(t_player *ply, int x, int y);
  
#endif
