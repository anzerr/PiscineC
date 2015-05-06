/*
** my_detect_format.c for my_detect_format in /home/anzer_r/project/day03/anzer_r/my_detect_format
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr  3 13:55:55 2015 ANZER ryan
** Last update Fri Apr  3 14:58:54 2015 ANZER ryan
*/

void my_putchar(char c);

void my_putstr(char *str)
{
  int i;
  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

void my_display_format(int s, int e, char *str)
{
  int out;
  out = 0;
  while (s <= e && str[s] != '\0')
    {
      if ((str[s] >= 65 && str[s] <= 90) || (str[s] >= 97 && str[s] <= 122))
	{
	  out = (out == 2 || out == 3) ? 3 : 1;
	}
      if (str[s] >= 48 && str[s] <= 57)
	{
	  out = (out == 1 || out == 3) ? 3 : 2;
	}
      if (str[s] != 32)
	{
	  my_putchar(str[s]);
	}

      s = s + 1;
    }
  my_putstr(" => ");
  my_putstr((out == 2) ? "Chiffre\0" : ((out == 1) ? "Mot\0" : "Inconnu\0"));
}

void my_detect_format(char *str)
{
  int i;
  int ws;
  i = 0;
  ws = 0;
  while (str[i] != '\0')
    {
      if (str[i + 1] == 32 || str[i + 1] == '\0')
	{
	  my_display_format(ws, i + 1, str);
	  my_putchar('\n');
	  ws = i + 1;
	}
      i = i + 1;
    }
  ws = ws + 1;
}
