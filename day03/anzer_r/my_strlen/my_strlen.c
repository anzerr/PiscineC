/*
** my_strlen.c for my_strlen in /home/anzer_r/project/day03/anzer_r/my_strlen
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr  3 10:10:49 2015 ANZER ryan
** Last update Fri Apr  3 10:12:26 2015 ANZER ryan
*/

int my_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }

  return (i);
}
