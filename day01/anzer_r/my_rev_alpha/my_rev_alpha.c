/*
** my_aff_alpha.c for my_aff_alpha in /home/anzer_r/project/jour01/anzer_r/my_aff_alpha
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr  1 16:11:17 2015 ANZER ryan
** Last update Wed Apr  1 16:32:33 2015 ANZER ryan
*/

char my_putchar(char c);

void my_rev_alpha()
{
  int i;

  i = 122;
  while (i >= 97)
    {
      my_putchar(i);
      i = i - 1;
    }
}
