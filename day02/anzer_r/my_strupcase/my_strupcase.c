/*
** my_strupcase.c for my_strupcase in /home/anzer_r/project/day02/anzer_r/my_strupcase
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  2 11:40:53 2015 ANZER ryan
** Last update Tue Apr  7 11:12:55 2015 ANZER ryan
*/


char *my_strupcase(char str[])
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 97 && str[i] <= 122)
        {
          str[i] = str[i] - 32;
        }
      i = i + 1;
    }
  return (str);
}
