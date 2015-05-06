/*
** my_aff_chiffre.c for my_aff_chiffre in /home/anzer_r/project/jour01/anzer_r/my_aff_chiffre
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr  1 16:37:52 2015 ANZER ryan
** Last update Wed Apr  1 16:37:55 2015 ANZER ryan
*/

char my_putchar(char c);

void my_aff_chiffre()
{
  int i;

  i = 48;
  while (i <= 57)
    {
      my_putchar(i);
      i = i + 1;
    }
}
