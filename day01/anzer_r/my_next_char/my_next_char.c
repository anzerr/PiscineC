/*
** my_next_char.c for my_next_char in /home/anzer_r/project/jour01/anzer_r/my_next_char
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr  1 15:00:14 2015 ANZER ryan
** Last update Wed Apr  1 15:26:48 2015 ANZER ryan
*/

char my_next_char(char c)
{
  if ((c >= 65 && c <= 90) || ( c >= 97 && c <= 122))
    {
      return ((c + 1 == 91 || c + 1 == 123) ? ((c + 1 == 91) ? 65 : 97) : c + 1);
    }
  return (32);
}
