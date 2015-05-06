/*
** enc_cesar.c for enc_cesar in /home/anzer_r/project/aday02/anzer_r/enc_cesar
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr 16 09:26:30 2015 ANZER ryan
** Last update Thu Apr 16 17:19:01 2015 ANZER ryan
*/
#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

void enc_cesar(char *str, int n)
{
  int p;

  if (*str != '\0')
    {
      p = -1;
      if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
	p = (*str >= 65 && *str <= 90) ? 65 : 97;
      my_putchar((p != -1) ? (((*str + n) - p) % 26) + p : *str);
      enc_cesar(str + 1, n);
    }
}
