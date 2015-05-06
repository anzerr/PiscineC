/*
** my_tablen.c for my_tablen in /home/anzer_r/project/day02/anzer_r/my_tablen
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  2 10:49:42 2015 ANZER ryan
** Last update Thu Apr  2 15:59:21 2015 ANZER ryan
*/

int my_tablen(char tab[])
{
  int i;

  i = 0;
  while (tab[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
