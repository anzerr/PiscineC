/*
** my_nb_len.c for my_nb_len in /home/anzer_r/project/jour01/anzer_r/my_nb_len
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr  1 17:25:50 2015 ANZER ryan
** Last update Wed Apr  1 17:39:45 2015 ANZER ryan
*/

int my_nb_len(int n)
{
  int i;

  i = 1;
  n = (n < 0) ? n * -1 : n; 
  while (n >= 10)
    {
      n = n / 10;
      i = i + 1;
    }

  return (i);
}
