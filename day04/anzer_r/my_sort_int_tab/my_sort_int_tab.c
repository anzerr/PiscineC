/*
** my_sort_int_tab.c for my_sort_int_tab in /home/anzer_r/project/day04/anzer_r/my_sort_int_tab
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Mon Apr  6 09:30:54 2015 ANZER ryan
** Last update Mon Apr  6 09:55:51 2015 ANZER ryan
*/

void my_swap(int *a, int *b)
{
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

void my_sort_int_tab(int *tab, int size)
{
  int i;
  int v;
  i = 0;
  while (i < size)
    {
      v = 0;
      while (v < size)
	{
	  if (tab[i] < tab[v])
	    {
	      my_swap(&tab[i], &tab[v]);
	    }
	  v = v + 1;
	}
      i = i + 1;
    }
}
