/*
** my_aff_tab.c for my_aff_tab in /home/anzer_r/project/jour02/anzer_r/my_aff_tab
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  2 09:09:16 2015 ANZER ryan
** Last update Thu Apr  2 09:46:16 2015 ANZER ryan
*/

void my_putchar(char c);

void my_aff_tab(char str[])
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
