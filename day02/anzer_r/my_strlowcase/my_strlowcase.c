/*
** my_strupcase.c for my_strupcase in /home/anzer_r/project/day02/anzer_r/my_strupcase
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  2 11:40:53 2015 ANZER ryan
** Last update Thu Apr  2 12:18:36 2015 ANZER ryan
*/

char *my_strlowcase(char str[])
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 65 && str[i] <= 90)
	{
	  str[i] = str[i] + 32;
	}
      i = i + 1;
    }
  return (str);
}
