/*
** misc.c for misc in /home/anzer_r/project/dicowesh/anzer_r/discowesh
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr 17 15:51:57 2015 ANZER ryan
** Last update Sat Apr 18 13:55:45 2015 ANZER ryan
*/
#include "header.h"

int my_isalpha(char c)
{
  return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

int my_isnum(char c)
{
  return (c >= 48 && c <= 57);
}

char **readArgument(int argc, int (*func)(char c))
{
  char **arg;
  int i;
  int x;

  arg = my_str_to_wordtab(readLine());
  i = 0;
  while (arg[i] != NULL)
    {
      x = 0;
      while (arg[i][x] != '\0')
	{
	  if (!func(arg[i][x]))
	    return (NULL);
	  x = x + 1;
	}
      i = i + 1;
    }
  return ((i >= argc) ? arg : NULL);
}
