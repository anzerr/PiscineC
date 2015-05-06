/*
** my_strchr.c for my_strchr in /home/anzer_r/project/day03/anzer_r/my_strchr
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr  3 10:17:18 2015 ANZER ryan
** Last update Fri Apr  3 10:28:38 2015 ANZER ryan
*/

char *my_strchr(char *str, int c)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == c)
	{
	  return (&str[i]);
	}
      i = i + 1;
    }
  return ("");
}
