/*
** my_sort_anything.c for my_sort_anything in /home/anzer_r/project/day08/anzer_r/my_sort_anything
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Wed Apr  8 14:57:41 2015 ANZER ryan
** Last update Thu Apr  9 08:56:07 2015 ANZER ryan
*/
#include <stdlib.h>

/*void my_swap_void(void *a, void *b, int size)
{
  void *tmp;
  tmp = malloc(size);
  }*/

void my_sort_anything(void *to_sort, int nmemb, int size, int (*compar)(void *, void *))
{
  void *tmp = to_sort;
  int i = 0;
  //  int v = 0;
  while (i < nmemb)
    {
      //      v = 0;
      compar(tmp + (i * size), tmp + (i * size));
      /*while (v < nmemb)
	{
	  if (compar(tmp + (i * size), tmp + (v * size)) < 0)
	    {
	      my_swap_void(tmp + (i * size), tmp + (v * size), size);
	    }
	  v = v + 1;
	  }*/
      i = i + 1;
    }
}
