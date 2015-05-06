/*
** readline.c for readline in /home/anzer_r/project/dicowesh/anzer_r/discowesh
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr 17 12:34:05 2015 ANZER ryan
** Last update Sat Apr 18 13:55:51 2015 ANZER ryan
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
