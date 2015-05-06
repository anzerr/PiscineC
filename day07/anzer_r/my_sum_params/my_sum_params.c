/*
** my_sum_params.c for my_sum_params in /home/anzer_r/project/day07/anzer_r/my_sum_params
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Tue Apr  7 15:24:31 2015 ANZER ryan
** Last update Tue Apr  7 16:00:22 2015 ANZER ryan
*/
#include <stdlib.h>

char *my_sum_params(int argc, char **argv)
{
  char *out;
  int max;
  int i;
  int v;
  int x;
  i = 0;
  while (i < argc)
    {
      v = (i = i + 1) % -1;
      while (argv[i - 1][(v = v + 1) - 1] != '\0')
	  max = max + 1;
    }
  out = malloc(((max + i) + 1) * sizeof(char));
  i = (x = 0);
  while (i < argc)
    {
      v = 0;
      while (argv[i][(v = v + 1) - 1] != '\0')
	out[(x = x + 1) - 1] = argv[i][v - 1];
      out[(x = x + 1) - 1 + ((i = i + 1) % -1)] = '\n';
    }
  out[x - 1] = '\0';
  return (out);
}
