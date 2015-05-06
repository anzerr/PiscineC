/*
** my_str_is_printable.c for my_str_is_printable in /home/anzer_r/project/day02/anzer_r/my_str_is_printable
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  2 12:49:42 2015 ANZER ryan
** Last update Thu Apr  2 16:09:54 2015 ANZER ryan
*/

int my_str_is_printable(char str[])
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      if (!(str[i] >= 32 && str[i] <= 126))
	{
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}
