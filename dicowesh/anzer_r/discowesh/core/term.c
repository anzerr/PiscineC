/*
** term.c for term in /home/anzer_r/project/dicowesh/anzer_r/discowesh
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr 17 17:21:55 2015 ANZER ryan
** Last update Fri Apr 17 17:39:14 2015 ANZER ryan
*/
#include "header.h"

void my_putstrcolor(char *str, int code)
{
  if (code == 30)
    write(1, "\033[30m\0", 6);
  else if (code == 31)
    write(1, "\033[31m\0", 6);
  else if (code == 32)
    write(1, "\033[32m\0", 6);
  else if (code == 33)
    write(1, "\033[33m\0", 6);
  else if (code == 34)
    write(1, "\033[34m\0", 6);
  else if (code == 35)
    write(1, "\033[35m\0", 6);
  else if (code == 36)
    write(1, "\033[36m\0", 6);
  else if (code == 37)
    write(1, "\033[37m\0", 6);
  else if (code == 39)
    write(1, "\033[39m\0", 6);
  my_putstr(str);
  write(1, "\033[39m\0", 6);
}

void termdisplay(char *str, int code)
{
  my_putstrcolor(str, code);
  my_putstr("\n> ");
}
