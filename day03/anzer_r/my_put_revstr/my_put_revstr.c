/*
** my_put_revstr.c for my_put_revstr in /home/anzer_r/project/day03/anzer_r/my_put_revstr
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr  3 11:37:39 2015 ANZER ryan
** Last update Fri Apr  3 12:02:03 2015 ANZER ryan
*/

void my_putchar(char c);

void my_put_revstr(char *str)
{
  int i;
  int end;

  i = 0;
  end = 1;
  while (end != -1 || i >= 0)
    {
      if (end == -1)
	{
	  my_putchar(str[i]);
	}
      end = (str[i] == '\0')? -1 : end;
      i = i + end;
    }
}
