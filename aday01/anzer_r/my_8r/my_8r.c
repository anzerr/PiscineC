/*
** my_8r.c for my_8r in /home/anzer_r/project/aday01/anzer_r/my_8r
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr 15 14:26:57 2015 ANZER ryan
** Last update Wed Apr 15 19:25:43 2015 ANZER ryan
*/
#include <stdlib.h>
#include <stdio.h>

void my_putstr(char *c);
void my_putchar(char c);
void my_put_nbr(int n);

int m8r_safe(int *g, int z)
{
  int i;
  int d;

  i = 1;
  while (i < z)
    {
      if (i != z)
	{
	  d = (i > 4) ? (i - z) * 1 : i - z;
	  if (g[i] == g[z] - d || g[i] == g[z] + d || g[i] == g[z])
	    return (0);
	}
      i = i + 1;
    }
  return (1);
}

int m8r_reset(int *g, int z)
{
  int i;

  i = z - 1;
  while (g[i] + 1 >= 9 && i > 1)
    {
      g[i] = 1;
      i = i - 1;
    }
  return (i);
}

void m8r_display(int *g)
{
  int i;

  i = 1;
  while (i <= 8)
    {
      my_put_nbr(g[i] - 1);
      i = i + 1;
    }
  my_putchar('\n');
}

int m8r_run(int *g, int z)
{
  int i;

  if (m8r_safe(g, z))
    {
      if (z + 1 <= 8)
	{
	  g[z + 1] = 1;
	  return (m8r_run(g, z + 1));
	}
      else
	{
	  i = m8r_reset(g, z);
	  g[i] += 1;
	  m8r_display(g);
	  return (m8r_run(g, i) + 1);
	}
    }
  if (g[z] + 1 >= 9)
    {
      g[z] = 1;
      i = m8r_reset(g, z);
      if (g[1] < 9)
	{
	  g[i] += 1;
	  return (m8r_run(g, i));
	}
      else
	return (0);
    }
  g[z] += 1;
  return (m8r_run(g, z));
}

int my_8r()
{
  int *grid;
  int i;

  i = 1;
  if ((grid = malloc(10 * sizeof(int))) == NULL)
      return (-1);
  while (i < 9)
    {
      grid[i] = 1;
      i = i + 1;
    }
  return (m8r_run(grid, 1));
}
