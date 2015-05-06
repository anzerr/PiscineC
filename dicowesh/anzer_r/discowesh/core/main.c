/*
** main.c for main in /home/anzer_r/project/dicowesh/anzer_r/discowesh/core
** 
** Made by ANZER ryan
** Login   <anzer_r@etna-alternance.net>
** 
** Started on  Fri Apr 17 10:36:53 2015 ANZER ryan
** Last update Sat Apr 18 13:55:35 2015 ANZER ryan
*/
#include "header.h"

int main()
{
  t_core *core;
  int run;

  core = initcore();
  if (core != NULL)
    {
      my_putstrcolor("Bienvenue sur le DicoWesh !\n", 33);
      displaycmd(core);
      run = 1;
      while (run)
	run = runcmd(readLine(), core);
    }
  else
    my_putstrcolor("Error: did not create core\n", 32);
  return (0);
}
