/*
** my_next_char.c for my_next_char in /home/anzer_r/project/jour01/anzer_r/my_next_char
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr  1 15:00:14 2015 ANZER ryan
** Last update Wed Apr  1 15:46:44 2015 ANZER ryan
*/

char my_prev_char(char c)
{
  if ((c >= 65 && c <= 90) || ( c >= 97 && c <= 122))
    {
      return ((c - 1 == 64 || c - 1 == 96) ? ((c - 1 == 64) ? 90 : 122) : c - 1);
    }
  return (32);
}
