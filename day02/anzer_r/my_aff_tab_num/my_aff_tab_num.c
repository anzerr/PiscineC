/*
** my_aff_tab.c for my_aff_tab in /home/anzer_r/project/jour02/anzer_r/my_aff_tab
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  2 09:09:16 2015 ANZER ryan
** Last update Thu Apr  2 10:12:59 2015 ANZER ryan
*/

void my_putchar(char c);

void my_aff_tab_num(int tab[], int size)
{
  int i;

  i = 0;
  while (i < size)
    {
      my_putchar(48 + tab[i]);
      my_putchar('\n');
      i = i + 1;
    }
}
