/*
** my_fill_tab.c for my_fill_tab in /home/anzer_r/project/day02/anzer_r/my_fill_tab
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Thu Apr  2 11:07:47 2015 ANZER ryan
** Last update Fri Apr  3 10:04:20 2015 ANZER ryan
*/

int *my_fill_tab()
{
  static int tab[100];
  int i;

  i = 0;
  while (i < 100)
    {
      tab[i] = i + 1;
      i = i + 1;
    }

  return (tab);
}
