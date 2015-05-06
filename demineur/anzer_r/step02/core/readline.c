/*
** readline.c for readline in /home/anzer_r/project/demineur/step01/core
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Mon Apr 13 10:30:48 2015 ANZER ryan
** Last update Mon Apr 13 21:10:29 2015 ANZER ryan
*/
#include "header.h"

char *readLine()
{
  ssize_t ret;
  char *buff;
  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
